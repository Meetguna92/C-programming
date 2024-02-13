#include<iostream>
using namespace std;
class Mother{
	public :
	 void Display()
		{
			cout<<"you Are a Mother..."<<endl;
		}
};
class Daughter:public Mother{
	public :
	 void Display1()
		{
			cout<<"you Are a Daughter...";
		}
};
int main()
{
	Daughter d;
	
	d.Display();
	d.Display1();
		
	return 0;
}

