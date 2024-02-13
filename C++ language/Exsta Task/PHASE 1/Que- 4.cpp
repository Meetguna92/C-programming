#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3;

	cout << "Enter the First seat number  :  ";
	cin >>s1;
	cout << "Enter the Second seat number  :  ";
	cin >>s2;
	
	s3 = s1;
	s1 = s2;
	s2 = s3;
	
	cout << "the First seat number is a :  "<<s1<<endl;
	cout << "the second seat number is a :  "<<s2;
	
	
	return 0;
	
}
