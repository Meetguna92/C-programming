#include<iostream>
using namespace std;

class Cricket{
	
	public :
		
		getOvers()
		{
			cout<<"    The Rulace of Match  "<<endl; 
		}
	
};

class T20match :public Cricket {
	
	public :
		
		getOvers()
		{
			return 20;
		}
	
};
class Testmatch :public Cricket {
	
	public :
		
		getOvers()
		{
			return 50;
		}
	
};

int main()
{
	Cricket c;
	T20match t20;
	Testmatch test;
	
	c.getOvers();
	cout << "The Total Overs in a T20 Match :- "<< t20.getOvers()<<endl;
	cout << "The Total Overs in a Test Match :- "<< test.getOvers()<<endl;
	
	
	return 0;
}
