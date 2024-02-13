#include<iostream>
using namespace std;
class A{
	public :
		int id,salary,experience;
		string name,role,comp_name,address,email,contact;
		
		A()
		{
			cout << "Enter the id :- ";
			cin>>id;
			cout << "Enter the name :- ";
			cin>>name;
			cout<< "Enter the role :- ";
			cin>>role;
		}
};
class B :public A{
	
	public :
		B()
		{
			cout<<"Enter the salary :- ";
			cin>>salary;
			cout<<"Enter the Experience :- ";
			cin>>experience;
		}
};
class C:public B{
	
	public :
		C()
		{
			cout<<"Enter the company_name :- ";
			cin>>comp_name;
			cout<<"Enter the Address :-  :- ";
			cin>>address;
		}
};
class D:public C{
	
	public :
		D()
		{
			cout<<"Enter the Email  :- ";
			cin>>email;
			cout<<"Enter the Contact :- ";
			cin>>contact;
			cout<<endl;
		}
		getData()
		{
			cout << "your id is :- "<<id<<endl;
			cout << "your name is :- "<<name<<endl;
			cout << "your role is :- "<<role<<endl;
			cout << "your salary is :- "<<salary<<endl;
			cout << "your Experience is :- "<<experience<<endl;
			cout << "your company_name is :- "<<comp_name<<endl;
			cout << "your address is :- "<<address<<endl;
			cout<<"your Contact is :- "<<contact<<endl;
		}
};
int main()
{
	D d;
	
	d.getData();
	
	return 0;
}
