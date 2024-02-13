#include<iostream>
using namespace std;

class Customers{
	
	private :
		int id,age;
		string name,telecome_name,city,m_number,sim_validity;
		
	
	public :
		setData()
		{
			cout << "Enter your ID :-  ";
			cin >> this->id;
			cout << "Enter your Name :-  ";
			cin >> this->name;
			cout << "Enter your Age :-  ";
			cin >> this->age;
			cout << "Enter your Telecome_Name :-  ";
			cin >> this->telecome_name;
			cout << "Enter your Mobile_Number :-  ";
			cin >> this->m_number;
			cout << "Enter your City :-  ";
			cin >> this->city;
			cout << "Enter your Simcard_Validity :-  ";
			cin >> this->sim_validity;
			cout << endl;
		}
		
		getData()
		{
			cout << "your ID is :- " << this->id <<endl;
			cout << "your Name is :- " << this->name <<endl;
			cout << "your Age is :- " << this->age <<endl;
			cout << "your Telecome_Name is :- " << this->telecome_name <<endl;
			cout << "your Mobile_Number is :- " << this->m_number <<endl;
			cout << "your City is :- " << this->city <<endl;
			cout << "your Simcard_Number is :- " << this->sim_validity <<endl <<endl;	
			
		}
	
};


int main()
{
	Customers c[5];
	int m;
	
	c[0].setData();
	c[1].setData();
	c[2].setData();
	c[3].setData();
	c[4].setData();
	
	for(m=0;m<5;m++)
	{
		c[m].getData();
	}
	
	
	return 0;
}

