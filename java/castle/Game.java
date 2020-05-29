import java.util.Scanner;
import java.util.HashMap;

public class Game {
    private Room currentRoom;
	private HashMap<String, Handler> handlers = new HashMap<String, Handler>();
        
    public Game() 
    {
		//  create the comments of the game
		handlers.put("go",   new HandlerGo(this));
		handlers.put("bye",  new HandlerBye(this));
		handlers.put("help", new HandlerHelp(this));

        createRooms();
    }

    private void createRooms()
    {
        //	create rooms
       Room outside = new Room("城堡外");
       Room lobby   = new Room("大堂");
       Room pub     = new Room("小酒吧");
       Room study   = new Room("书房");
       Room bedroom = new Room("卧室");
        
        //	initialize the rooms
	   	outside.setExit("east", lobby);
		outside.setExit("south", study);
        outside.setExit("west", pub);
		lobby.setExit("west", outside);
		pub.setExit("east", outside);
		study.setExit("north", outside);
		study.setExit("east", bedroom);
		bedroom.setExit("west", study);
		lobby.setExit("up", pub);
		pub.setExit("down", lobby);

        currentRoom = outside;  //	从城堡门外开始
    }

    private void printWelcome() {
        System.out.println();
        System.out.println("欢迎来到城堡！");
        System.out.println("这是一个超级无聊的游戏。");
        System.out.println("如果需要帮助，请输入 'help' 。");
        System.out.println();
		showPrompt();
    }

    public void goRoom(String direction) 
    {
        Room nextRoom = currentRoom.getExit(direction);

        if (nextRoom == null) {
            System.out.println("那里没有门！");
        }
        else {
            currentRoom = nextRoom;
			showPrompt();
        }
    }

	public void showPrompt(){
    	System.out.println("你在" + currentRoom);
        System.out.print("出口有: ");
		System.out.print(currentRoom.getExitDesc());
        System.out.println();
	}

	public void play(){
		Scanner in = new Scanner(System.in);
		while ( true ) {
        	String line = in.nextLine();
        	String[] words = line.split(" ");
			Handler handler = handlers.get(words[0]);
			String value = "";
			if( words.length > 1 ){
				value = words[1];
			}
			if( handler != null ){
				handler.doCmd(value);
				if( handler.isBye() ){
					break;
				}
			}
            // if ( words[0].equals("help") ) {
                // printHelp();
            // } else if (words[0].equals("go") ) {
                // goRoom(words[1]);
            // } else if ( words[0].equals("bye") ) {
                // break;
            // }
        }	
		in.close();
	}
	
	public static void main(String[] args) {
		Game game  = new Game();
		game.printWelcome();
		game.play();
        System.out.println("感谢您的光临。再见！");
	}

}
