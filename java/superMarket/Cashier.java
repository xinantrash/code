import java.sql.*;
import java.util.Scanner;
import java.util.Vector;

public class Cashier {

	private int totalNumber = 0;
	private double totalMoney  = 0;
	private double receiveMoney;
	private boolean flag;
	private double temp;
	private int goodsNumber;
	private String goodsCode;
	private Connection connection;
	private Statement statement;
	private ResultSet resultSet;
	private StringBuffer stringBuffer;
	public int receiveMoney() {
		try {
			Scanner in = new Scanner(System.in);
			stringBuffer = new StringBuffer();
			connection = SQLConnect.getConnection();
			statement = connection.createStatement();
			String selectSql = "select * from goods";
			resultSet = statement.executeQuery(selectSql);
			while( true ) {
				goodsCode = in.next();
				if( goodsCode.equals("######") ) {
					break;
				}
				goodsNumber = in.nextInt();
				while( resultSet.next() ) {
					if( resultSet.getString("code").equals(goodsCode) ) {
						temp = resultSet.getInt("number");
						flag = true;
						if( temp >= goodsNumber ) {
							totalMoney += resultSet.getInt("price") * goodsNumber;
							totalNumber += goodsNumber;
							updateGoods();				
							stringBuffer.append(resultSet.getString("name")
									+goodsNumber+"*"
									+resultSet.getInt("price")+"\n");
						}
						else {
							System.out.println("The quantity of this product"+
									" is not enough!");
						}
						break;
					}
					else {
						flag = false;
					}
				}
			}
		} catch (SQLException e) {
			e.printStackTrace();
		} 
		
		return totalMoney;
	}

	public void updateGoods() {
		try {
			String updateSql = "update goods set number = "
					+(temp-goodsNumber)+" where code = '"+goodsCode
					+"';";
			PreparedStatement preparedStatement 
				= connection.prepareStatement(updateSql);
			preparedStatement.executeUpdate();
		} catch (SQLException e) {
			e.printStackTrace();
		}
		
	}
	
	public void change() {
		System.out.println("================================================");
		System.out.println("totalMoney:"+totalMoney);
		System.out.println("totalNumber:"+totalNumber);
		Scanner in = new Scanner(System.in);
		System.out.print("receive money:");
		receiveMoney = in.nextDouble();
		System.out.println("================================================");
	}

	public void print() {
		System.out.println(stringBuffer);
		System.out.println("================================================");
		System.out.println("totalMoney:"+totalMoney);
		System.out.println("receive money:"+receiveMoney);
		System.out.println("change:"+(receiveMoney-totalMoney));
		System.out.println("================================================");
		Print.dateFormat();
		System.out.println("================================================");
		System.out.println("power by AShelter");
		totalMoney = 0;
		totalNumber = 0;
	}
}
