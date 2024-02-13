#include<iostream>
using namespace std;
class Supermarket{
	
	private :
		int quantity,price,discount;
		string name,number;
		string id = "meetpatel92@gmail.com";
		string password = "meetpatel2345";
		
	public :
		
		setData(string id,string password)
        {
            if(this->id == id && this->password == password)
            {
                cout << "Enter product Name :- " ;
                cin >> this->name ;
                cout << "Enter product Number :- " ;
                cin >> this->number ;
                cout << "Enter product Quantity :- " ;
                cin >> this->quantity ;
                cout << "Enter product Price :- " ;
                cin >> this->price ;
                cout << "Enter product Discount :- " ;
                cin >> this->discount ;
                cout << endl ;
               
            }
        }
        
        getData(string id,string password)
        {
        	
        	if(this->id == id && this->password == password)
            {
            	
            	 cout << " your Bill is  :- " << ((this-> price * this->quantity )-(((this->price*this->quantity)*discount)/100));
            	
			}
        	
        	
		}

	
};
int main()
{
	string id ,password ;

    cout << "Enter the Email Id :- " ;
    cin >> id ;
    cout << "Enter the Email Password :- " ;
    cin >> password ;

	
	Supermarket s1;
	
	s1.setData(id,password);
	s1.getData(id,password);
	
	
	return 0;
	
	
}


