#include<iostream>
using namespace std;
class P{
	
	public :
		float temp;

};

class Q : public P{
	
	public :
			fehrenheit()
			{
					cout << "Enter the temperature :- ";
					cin >>temp;
					cout <<"the temperature convert  by fehrenheit :- "<<(temp *9/5) + 32 <<endl;
			}
		
};                             
class R : public Q{
	
		public :
		
			kelvin()
			{
				cout <<"the temperature convert  by kelvin :- "<<( temp -32 )*5/9+273.15;
			}
			
	
	
};
int main()
{
	R r1;
	r1.fehrenheit();
	r1.kelvin();
	
	
	return 0;
}

