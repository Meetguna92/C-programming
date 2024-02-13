#include<iostream>
using namespace std;
class A{
	
	public :
		getA()
		{
			cout << "this is a parent class..."<<endl<<endl;
			
			}	

};
class B : public  A{
	
	public :
		getB()
		{
			
			cout << "this is a first Child class... "<<endl<<endl;
			
		}
};
class C : public  A{
	
	public :
		getC()
		{
			
			cout << "this is a second Child class... "<<endl<<endl;
			
		}
};
class D : public B,public C{
	
	public :
		getD()
		{
			
			cout << "this is a third Child class... ";
			
		}
};
int main()
{
	
	D d;
	
	d.B::getA();
	d.getB();
	d.getC();
	d.getD();
	
	
	return 0;
	
}

