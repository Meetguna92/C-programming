#include<iostream>
using namespace std;
class time{

	public :
		int h,m,s,se;
		float sum;
		
	 
};		

int main()
{
	time i1,i2,i3;
	
	cout << "Enter the seconds :- ";
	cin >>i1.s;
	cout << "Enter the minute :- ";
	cin >> i1.m;
	cout << "Enter the hour :- ";
	cin >> i1.h;
	
	cout <<endl;
	
	cout << "Enter the seconds :- ";
	cin >>i2.s;
	cout << "Enter the minute :- ";
	cin >> i2.m;
	cout << "Enter the hour :- ";
	cin >> i2.h;
	
	i1.sum = i1.s + i2.s; 
	
	i2.sum = i1.m + i2.m;
	
	i3.sum = i1.h + i2.h;
	
	i3.se = (i1.s +  i2.s) + ((i1.m +  i2.m)*60) + ((i1.h + i2.h)*3600);
	

	i3.h = (i3.se/3600) %24;
	
	i3.m = (i3.se/60) %60;
	
	i3.s = (i3.se) %60;
	
	cout  << "your hours :- "<<i3.h << " your minutes  :- " << i3.m << " your seconds  :- " <<i3.s;

	return 0;
}

