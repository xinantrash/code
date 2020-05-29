package arraystack;

public class Stack{

	private int maxSize;	
	private int top = -1;
	private int[] stack;

	public Stack(int maxSize){
		this.maxSize = maxSize;
		stack = new int[maxSize];
	}

	public boolean isFull(){
		return top == maxSize - 1;
	}

	public boolean isEmpty(){
		return top == -1;
	}

	public void push(int value){
		if( isFull() ){
			System.out.println("The stack is full.");
			return;
		}

		stack[++top] = value;
	}

	public int pop(){
		if( isEmpty() ){
			System.out.println("The stack is empty.");
// 			Throw the exception.
			throw new RuntimeException("The stack is empty.");
		}

		int value = stack[top--];

		return value;
	}

	public void list(){
		if( isEmpty() ){
			System.out.println("The stack is empty.");
			return;
		}

		for( int i=top; i>=0; i-- ){
			System.out.printf("stack[%d] = %d\n", i, stack[i]);
		}
	}
}
