#include<iostream>
using namespace std;
class Division{
	
	public :
		int a,b,sum;
		
		Division()
		{
			cout << "Enter the number of A :  ";
			cin >>a;
			cout << "Enter the numberx of B :  ";
			cin >>b;
		
			try{
				
				if(b == 0)
				{
					throw b;	
				}
				sum = a / b;
				cout << "the Division is :  "<<sum;
				
			}catch(int m){
				
				cout << "the can not Divsied by  :  "<<m;
			}
		
		}	
	
};
class Vote{
	
	public :
		int age;
		
		Vote()
		{
			cout <<endl<< "Enter the your Age : ";
			cin >>age; 
			try{
				
				if(age < 18)
				{
					throw age;	
				}
				cout << " you can vote.... ";
				
			}catch(int m){
				
				cout << "you can not vote this Age  :  "<<m;
			}
		}
	
};
class Password{
	public :
		string password,id;
		
		Password()
		{
			cout << "\nEnter the ID :  ";
			cin >>id;
			cout << "\nEnter the Password :  ";
			cin >>password;
			
			try
			{
				
				if(password[0]>='A' && password[0]<='Z')
				{
					cout<<"your id is a login ";
				}
				else
				{
					throw password ;
				}

			}catch (...)
	        {
	            cout << "Error: ";
	        }
				
			
		}
		
		
	
};
int main()
{
	Division d;
	Vote v;
	Password p;

	
	return 0;
	
}


