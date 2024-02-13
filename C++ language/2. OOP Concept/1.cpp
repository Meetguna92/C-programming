#include<iostream>
using namespace std;

class Student{
	
	private :
		int id,age;
		string name,course,email,city,college;
		
	
	public :
		setData()
		{
			cout << "Enter your ID :-  ";
			cin >> this->id;
			cout << "Enter your Name :-  ";
			cin >> this->name;
			cout << "Enter your Age :-  ";
			cin >> this->age;
			cout << "Enter your Course :-  ";
			cin >> this->course;
			cout << "Enter your Email :-  ";
			cin >> this->email;
			cout << "Enter your City :-  ";
			cin >> this->city;
			cout << "Enter your College :-  ";
			cin >> college;
				
		}
		
		getData()
		{
			cout << "your ID is :- " << this->id <<endl;
			cout << "your Name is :- " << this->name <<endl;
			cout << "your Age is :- " << this->age <<endl;
			cout << "your Course is :- " << this->course <<endl;
			cout << "your Email is :- " << this->email <<endl;
			cout << "your City is :- " << this->city <<endl;
			cout << "your College is :- " << this->college <<endl <<endl;	
			
		}
	
};
int main()
{
	Student s[5];
	int m;
	
	s[0].setData();
	s[1].setData();
	s[2].setData();
	s[3].setData();
	s[4].setData();
	
	for(m=0;m<5;m++)
	{
		s[m].getData();
	}
	
	
	return 0;
}

