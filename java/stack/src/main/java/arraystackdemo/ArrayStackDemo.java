package arraystackdemo;

import java.util.Scanner;
import stack.Stack;

public class ArrayStackDemo{

	public static void main(String[] args){
		Scanner in   = new Scanner(System.in);
		Stack stackA = new Stack(5);
		String key   = new String();
		boolean loop = true;
		
		while( loop ){
			System.out.println("push: put the value to the stack.");
            System.out.println("pop:  grap the value out of the stack.");
            System.out.println("show: show the value in the stack.");
            System.out.println("exit: exit the program.");
			System.out.println("Enter the comment.");

			key = "";
			key = in.nextLine();

			switch(key){
				case "push":
					System.out.println("Please input a value.");
					int value = in.nextInt();
					stackA.push(value);
					break;

				case "pop":
					try{
						System.out.println("The popping value is "+stackA.pop()+".");
					}
					catch(Exception e){
						System.out.println(e.getMessage());
					}
					break;

				case "show":
					stackA.list();
					break;

				case "exit":
					in.close();
					loop = false;
					break;
			}
		}
	}
}
