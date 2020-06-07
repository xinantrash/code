import java.sql.*;
import java.util.Scanner;
import java.util.Vector;

public class Cashier {

	private int totalNumber = 0;
	private int totalMoney  = 0;
	private boolean flag;
	private Connection connection;
	private Statement statement;
	private ResultSet resultSet;
	private StringBuffer stringBuffer;
	public int receiveMoney() {
		try {
			Scanner in = new Scanner(System.in);
			StringBuffer = new StringBuffer();
			connection = SQLConnect.getConnection();
			statement = connection.createStatement();
			resultSet = statement.getResultSet();
			String selectSql = "select * from goods";
			while( true ) {
				String goodsCode = in.nextLine();
				int goodsNumber = in.nextInt();
				if( goodsCode.equals("") ) {
					break;
				}
				while( resultSet.next() ) {
					if( resultSet.getString("code").equals(goodsCode) ) {
						int temp = resultSet.getInt("number");
						flag = true;
						if( temp >= goodsNumber ) {
							totalMoney += resultSet.getInt("price") * goodsNumber;
							totalNumber += goodsNumber;
							String updateSql = "update goods set number = "
								+(temp-goodsNumber)+" where code = '"+goodsCode
								+"';";
							stringBuffer.append(resultSet.getString("name")+goodsNumber+"*"+resultSet.getInt("price")+"\n");
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
					if( flag == false ) {
						System.out.println("This product does not exist!");
					}
				}
			}
		} catch (SQLException e) {
			e.printStackTrace();
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		}
		
		return totalMoney;
	}
	
	public void change() {
		System.out.println("totalMoney:"+totalMoney);
		System.out.println("totalNumber:"+totalNumber);
		Scanner in = new Scanner(System.in);
		int money = in.nextInt();
		System.out.println("receive money:"+money);
		System.out.println("change:"+(money-totalMoney));
		totalMoney = 0;
		totalNumber = 0;
	}

	public void print() {
		System.out.println(stringBuffer);
		System.out.println("totalMoney:"+totalMoney);
		System.out.println("receive money:"+money);
		System.out.println("change:"+(money-totalMoney));
		Print.dateFormat();
		System.out.println("power by AShelter");
	}
}
