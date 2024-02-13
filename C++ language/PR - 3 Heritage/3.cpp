#include<iostream>
using namespace std;
class Animal{	
	protected :
		string name;
		int age;
	public:
		set_value(string name,int age)
		{
			
			this ->name=name;
			this ->age=age;
		}	
				
};
class Zebra:public Animal{
	public :
		getZebre()
		{
			cout << "your Name is :- "<<name<<endl;
			cout << "your Age is  :- "<<age<<endl<<endl ;
		}
	
	
};

class Dolphin:public Animal{
	public :
		getDolphin()
		{
			cout << "your Name is :- "<<name<<endl;
			cout << "your Age is  :- "<<age<<endl ;
		}
	
};

int main()
{
	Dolphin d;
	Zebra z;
	
	z.set_value("zebra",8);
	d.set_value("dolphin",5);
	z.getZebre();
	d.getDolphin();
	
	
	return 0;
}


