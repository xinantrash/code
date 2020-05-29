#include <iostream>
#include <assert.h>

using namespace std;

class A
{
	public:
		int a;
		int a1;

		A()
		{
			a1 = 1;
			a2 = 2;
			a3 = 3;
			a  = 4;
		}

		void fun()
		{
			cout << a  << endl;    
    		cout << a1 << endl;   
    		cout << a2 << endl;   
    		cout << a3 << endl;
		}

	protected:
		int a2;

	private:
		int a3;
};

class B : protected A 
{
	public:
		int a;
		
		B(int i)
		{
			A();
			a = i;
		}

		void fun()
		{
			cout << a  << endl;
            cout << a1 << endl;
            cout << a2 << endl;
		}
};

int main()
{
  B b(10);
  cout << b.a << endl;       	//正确。public成员
//   cout << b.a1 << endl;      //错误，protected成员不能在类外访问。
//   cout << b.a2 << endl;      //错误，protected成员不能在类外访问。
//   cout << b.a3 << endl;      //错误，private成员不能在类外访问。
  return 0;
}
