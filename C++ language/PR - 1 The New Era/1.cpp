#include<iostream>
using namespace std;
class m{

	public :
		int feet;
		int inch;
	 
};		

int main()
{
	m i1,i2,i3;
	
	cout << "Enter the Feet :- ";
	cin >>i1.feet;
	cout << "Enter the Inch :- ";
	cin >> i1.inch;
	
	cout <<endl;
	
	cout << "Enter the Feet :- ";
	cin >>i2.feet;
	cout << "Enter the Inch:- ";
	cin >> i2.inch;

	i3.feet = i1.feet +i2.feet + (i1.inch + i2.inch)/12;
	
	i3.inch = (i1.inch + i2.inch) %12;
	
	cout << "your feet is :- "<< i3.feet << endl << "your inch is :- " << i3.inch; 

	return 0;
}

