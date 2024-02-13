#include<iostream>
using namespace std;
class Hotel{
	
		private :
			int id,rating,e_year;
			string name,type,s_quantity,r_quantity;
			static string location;
			
		public :
			setData()
			{
				cout << "Enter your Hotel_Id :- ";
				cin >> id;
				cout << "Enter your Hotel_Name :- ";
				cin >> name;
				cout << "Enter your Hotel_Type :- ";
				cin >> type;
				cout << "Enter your Hotel_Rating :- ";
				cin >> rating;
				cout << "Enter your Hotel_Establish_year :- ";
				cin >> e_year;
				cout << "Enter your Hotel_Staff_Quantity :- ";
				cin >> s_quantity;
				cout << "Enter your Hotel_Room_qusntity :- ";
				cin >> r_quantity;
				cout << endl;
					
			}
		
			getData()
			{
				cout << "your Hotel_Id :-  " << id <<endl;
				cout << "your Hotel_Name :-  " << name <<endl;
				cout << "your Hotel_Type :-  " << type <<endl;
				cout << "your Hotel_Rating :-  " << rating <<endl;
				cout << "your Hotel_Establish_year :-  " << e_year <<endl;
				cout << "your Hotel_Staff_Quantity :-  " << s_quantity <<endl;
				cout << "your Hotel_Room_qusntity :-  " << r_quantity <<endl;
				
			}
			
			static getlocation()
			{
				cout << "your Hotel_Location :- "<<location << endl ;
			}
	
};

string Hotel::location = "Rajkot";
int main()
{
	Hotel h[50];
	int m,n;
	
	cout<< "Enter the Number of Hotel Information :- ";
	cin >> n;
	
	for(m=0;m<n;m++)
	{
		h[m].setData();
	}
	
	for(m=0;m<n;m++)
	{
		h[m].getData();
		h[m].getlocation();
	}
	
	
	
	
	
	return 0;
}

