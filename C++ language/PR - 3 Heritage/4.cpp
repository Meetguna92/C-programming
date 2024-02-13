#include<iostream>
using namespace std;
class Employees1{
	public:
		int id,age,salary,experience;
};
class Employees2{
	public:
		string name,role,c_name;
};
class Employees3:public Employees1,public Employees2{
	
	public :
		setData()
		{
			cout << "Enter the your ID :-  ";
			cin>>id;
			cout << "Enter the your Name :-  ";
			cin>>name;
			cout << "Enter the your Age :-  ";
			cin>>age;
			cout << "Enter the your Salary :-  ";
			cin>>salary;
			cout << "Enter the your Experience :-  ";
			cin>>experience;
			cout << "Enter the your Role :-  ";
			cin>>role;
			cout << "Enter the your Company_Name :-  ";
			cin>>c_name;
			cout<<endl;
		}
		getData()
		{
			cout<< "your id is :- "<<id<<endl;
			cout << "your name is :- "<<name<<endl;
			cout << "your Age is :- "<<age<<endl;
			cout << "your Salary is :- "<<salary<<endl;
			cout << "your Experience is :- "<<experience<<endl;
			cout << "your role is :- "<<role<<endl;
			cout << "your Company_name is :- "<<c_name<<endl<<endl;
		}
	
};
int main()
{
	int n,m;
	
	cout << "Enter the number of Employees :- ";
	cin >>n;
	
	Employees3 e[n];
	
	for(m=0;m<n;m++)
	{
		e[m].setData();
		e[m].getData();
	}

	
	return 0;
}


