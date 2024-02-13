#include<iostream>
using namespace std;

class Number {

	private :
		int m;

	public:
	  
	
	    void setData(int n) 
		{
	        this->m = n;
	    }
	
	    Number operator*( Number p)  
		 {
		 	Number sum;
		 	
	        sum.m = this->m * p.m;
	        
	        return sum;
	     }
	     
	     getData()
	     {
	     	cout << "the multiplication of both value :-  "<< this->m;
		 }
    
};

int main() 
{
    Number n1,n2,n3;

    n1.setData(34);
    n2.setData(45);
    
    
    n3 = n1 * n2;
    
    n3.getData();
    

  
    return 0;
}

