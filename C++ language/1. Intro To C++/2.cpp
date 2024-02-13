#include<iostream>
using namespace std;

int main()
{
	char m[100];
	int h;
	
	cout << "Enter the string :- ";
	cin >> m;
	
	for(h=0;m[h]!='\0';h++)
	{
		if(m[h] >= 'A' && m[h] <= 'Z')
		{
			m[h] = m[h] +32;
		}
		else if(m[h] >= 'a' && m[h] <= 'z')
		{
				m[h] = m[h] -32;
		}
	}
	
	cout << m;
	
	return 0;
	
}

