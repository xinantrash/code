#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

typedef char OperandType;
typedef struct {
	char *base;   
	char *top;	 
	int stacksize; 
}stack;

int InitStack(stack *S){
	S->base = (char *)malloc(100 * sizeof(char));
	if ( !S->base ) {
		return 0;
		exit(-1);
	} 

	S->top = S->base; 
	S->stacksize = 100;
	return 1;
	
}
void Push(stack *S,char e){
	if (S->top-S->top>=S->stacksize) { 
		cout << "error ";
		exit(-1);
	}
	*S->top++ = e;
}  
int Pop(stack *S,char *e){
	if ( S->top==S->base ) {
		cout << "error ";
		return 0; 
	}	
	else {
		*e = *--S->top;
     	return 1;
	} 
} 
int In(char c,char OP[]){
	int i,result;
	for(i=0;i<7;i++){
		if(c==OP[i]) {
			result=1;
			break;  	
		} 
		else {
			result=0;
		}
	}
	return result;
} 
char GetTop(stack *S){
	 if(S->base == S->top) exit(-1);
      return *(S->top-1);
}
char Operate(char a,char theta,char b){
	int A;
	int B;
	int result=0;
	if(a>=48){
		A = a-48;
	}else{
		A = a;
	}
	if(b>=48){
		B = b-48;
	}else{
	    B = b;
	}
	switch(theta){
		case '+':
			result= (A+B);
			break;

		case '-':
			result= (A-B);
			break;

		case '*':
			result= (A*B);
			break;

		case '/':
			result= (A/B);
			break;
	}
	return result;
} 
char Precede(char op,char c){
	char OPT[7]={'+','-','*','/','(',')','#'};
	int i=0,j=0;
	char priority[7][7]={
		{'>','>','<','<','<','>','>'},
		{'>','>','<','<','<','>','>'},
		{'>','>','>','>','<','>','>'},
		{'>','>','>','>','<','>','>'},
		{'<','<','<','<','<','=',' '},
		{'>','>','>','>',' ','>','>'},
		{'<','<','<','<','<',' ','='},
	};
	while(op!=OPT[i]){
		i++;
	}
	while(c!=OPT[j]){
		j++;
	}
	return priority[i][j];
}
int EvaluateExpression(){
	char OP[]={'+','-','*','/','(',')','#'};
	char c,theta;
	char a=' ';
	char b=' ';
	char x;
	char e;

	stack OPRT,OPND;
	InitStack(&OPRT);	

	cin >> e;

	if( e=='#' ) {
		Push(&OPRT,e);
	} 
	else {
		exit(-1);
	}
	InitStack(&OPND);	

	c = getchar();

	while ( c!='#' || GetTop(&OPRT)!='#' ) {
		if ( !In(c,OP) ) {
			Push(&OPND,c);
			c = getchar();
		} 
		else { 
				switch( Precede(GetTop(&OPRT),c) ) {	
					case '<':
						Push(&OPRT,c);
						c=getchar();
						break;

					case '=':
						Pop(&OPRT,&x);
						c=getchar();
						break;

					case '>':
						Pop(&OPRT,&theta);
						Pop(&OPND,&b);
						Pop(&OPND,&a);
						Push(&OPND,Operate(a,theta,b));
						break;
			}
	    }
	}
	return GetTop(&OPND); 
}
int main(){
	int result;
	result = EvaluateExpression();
	cout << result;
	return 0;
} 
