#include<iostream>
using namespace std;
int main()
{
	int m[100],n,h;
	
	cout << "Enter the size of Array ";
	cin >> n;
	
	for(h=0;h<n;h++)
	{
		cout << "m = ";
		cin >> m[h];
		
	}
	
	for(h=0;h<n;h++)
	{
		if(m[h] %2==0)
		{
			cout << " "<< m[h];
		}
		
	}
}

