#include<iostream>
using namespace std;
class A{
	
	public :
		int a;
		
		A()
		{
			cout << "Enter the value :-  ";
			cin>>a;
		}
};

class Square:public A{
	public :
		getvalue()
		{
			cout << "the Square value is :- "<<(a*a)<<endl;
		}
};

class Cube:public A{
	public :
		getvalue()
		{
			cout << "the Cube value is :- "<<(a*a*a)<<endl;
		}
};
int main()
{
	Square s;
	Cube c;
	
	s.getvalue();
	c.getvalue();
	
	return 0;
}

