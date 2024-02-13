#include<iostream>
using namespace std;
int main() 
{
	int a=56,b=0;
	
	try
	{
		if (b == 0)
		{
			throw b;
		}
		cout << "the Division of this value :  " <<a/b<< endl;
		
	}catch (...){
		cout << "Can not division by 0..."<< endl;
	}
	
	
	return 0;
	
}

