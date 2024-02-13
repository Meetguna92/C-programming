#include<iostream>
using namespace std;
class Railway{
	private :
		int t_number,n;
		string t_name;
		string t_source;
		string t_time;
		string t_destination;
	
	public :
		
		setData()
		{
			
			cout << "Enter the train number :- ";
			cin >>t_number;
			cout << "Enter the train name :- ";
			cin >>t_name;
			cout << "Enter the train source :- ";
			cin >>t_source;
			cout << "Enter the train time :- ";
			cin >>t_time;
			cout << "Enter the train destination :- ";
			cin >>t_destination;
			cout << endl;
			
		}
		
		getData()
		{
			cout << "Enter the train number in search :- ";
			cin >>n;
			
			if(n==t_number)
			{	
				cout << "your Train number :- "<<t_number <<endl;
				cout << "your Train name :- "<<t_name<<endl;
				cout << "your Train source :- "<<t_source<<endl;
				cout << "your Train time :- "<<t_time<<endl;
				cout << "your Train destination :- "<<t_destination<<endl;
				
			}
			
		}

};
int main()
{
	Railway r[50];
	int n,p,m;
	
	cout<< "Enter the number of train :- ";
	cin >>n;
	
	
	
	for(m=0;m<n;m++)
	{
		if(n>=3)
		{
			 r[n].setData();
		}
	}
	
	 r[n].getData();
	
	

	return 0;
	
}

