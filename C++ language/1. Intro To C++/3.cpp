#include<iostream>
using namespace std;
int main()
{
	int m[500],h,t=0,p;
	
	for(h=2020;h<=3030;h++)
	{
		if(h%4==0)
		{
			
				m[t++] = h;		
		}
		
	}
	
	for(p=0;p<t;p++)
	{
		cout << " " <<m[p] ;
	}
	
	return 0;
}

