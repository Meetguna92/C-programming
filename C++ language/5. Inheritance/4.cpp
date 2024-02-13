#include<iostream>
using namespace std;
class A{
	public :
		int a;
		
		getA()
		{
			cout << "Enter the value of A :- ";
			cin >>a;
		}
};
class B:public A{
	public :
		int b;
		
		getB()
		{
			cout << "Enter the value of B :- ";
			cin >>b;
		}
};
class C:public A{
	public :
		int c;
		
		getC()
		{
			cout << "Enter the value of C :- ";
			cin >>c;
		}
};
class D:public B,public C{
	public :
		
		getD()
		{
			cout << "your Sum is :- "<<B::a+b+c;
		}
};
int main()
{
	D d1;
	
	d1.B::getA();
	d1.getB();
	d1.getC();
	d1.getD();
	
	
	return 0;
	
}

