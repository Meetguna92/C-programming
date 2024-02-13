#include<iostream>
using namespace std;
class student{
	
	private :
		int id;
		string name;
		
};
int main()
{
	student s1;
	
	cout << "Enter the your ID :- ";
	cin >>s1.id;
	cout << "Enter the your Name :- ";
	cin >>s1.name;
	
	cout <<endl <<"your id is :- " <<s1.id <<endl;
	cout <<"your name is :- " <<s1.name;
	
	return 0;
}

