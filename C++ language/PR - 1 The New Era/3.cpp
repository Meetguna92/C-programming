#include<iostream>
using namespace std;
class time{

	public :
		int h,m,s;
		
	 
};		

int main()
{
	time t1,t3;
	
	cout << "Enter the seconds :- ";
	cin >> t1.s;	
 	
 	t3.h = (t1.s/3600) % 24;
 	
 	t3.m = (t1.s/60) % 60;
 	
 	t3.s =  t1.s % 60;
	
	cout <<t3.h << ": " <<t3.m <<" : " <<t3.s;
	
	return 0;
}

