#include<iostream>
using namespace std;

int sum(int m,int h)
{
	return m+h;
	
}
int sub(int m,int h)
{
	return m-h;
}
int mul(int m,int h)
{
	return m*h;
	
}
int div(int m,int h)
{
	return m/h;
	
}
int mod(int m,int h)
{
	return m%h;
}
int main()
{
	int a,b,opt,n=0;
	
	for(n=opt;n<=0;opt++)
	{
		cout << "\n press 1 for sum \n press 2 for sub \n press 3  for mul \n press 4   for div \n press 5 for mod\nEnter your choice  :- ";


		cin >> opt;
		
		if(opt == 0)
		{
			break;
		}
		else if (opt>=6)
		{
			cout << " this chioce is  invalid";
			break;
		}
		cout << "Enter the value of A :- ";
		cin >> a;
		cout << "Enter the value of B :- ";
		cin >> b;
	
		switch(opt)
		{
			case 1 :
				cout << "the sum of value :- " << sum(a,b);
				break;
			case 2 :
				cout << "the sub of value :- " << sub(a,b);
				break;
			case 3 :
				cout << "the mul of value :- " << mul(a,b);
				break;
			case 4 :
				cout << "the div of value :- " << div(a,b);
				break;
			case 5 :
				cout << "the mod of value :- " << mod(a,b);
				break;
		}
		
	}
	
}

