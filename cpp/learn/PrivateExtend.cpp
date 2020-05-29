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

class B : private A
{
	public:
		int a;
		int a1;

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
// 			cout << a3 << endl;
		}
};

int main(int argc, const char *argv[])
{
	B b(10);
	cout << b.a  << endl;
//     cout << b.a1 << endl;
//     cout << b.a2 << endl;
//     cout << b.a3 << endl;

	return 0;
}
