#include<iostream>
using namespace std;
class house{
	
	public :
		int bed,fan,light,door,tebul;
	
	
};
int main()
{
	house r;
	
	cout << "Enter the your bed in your house :- ";
	cin >> r.bed;
	cout << "Enter the your Fan in your house :- ";
	cin >> r.fan;
	cout << "Enter the your Light in your house :- ";
	cin >> r.light;
	cout << "Enter the your Door in your house :- ";
	cin >> r.door;
	cout << "Enter the your Tebul in your house :- ";
	cin >> r.tebul;
	
	cout <<endl;
	
	cout << "your bed is :- " <<r.bed <<endl;
	cout << "your fan is :- " <<r.fan <<endl;
	cout << "your light is :- " <<r.light <<endl;
	cout << "your door is :- " <<r.door <<endl;
	cout << "your tebul is :- " <<r.tebul;
	
	return 0;
}

