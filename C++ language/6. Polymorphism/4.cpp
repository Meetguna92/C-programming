#include<iostream>
using namespace std;
class Number{
	
	private :
		int m;
		
	public :
		
		void setData(int n)
		{
			
			this->m = n;

		}
		
	    operator==(Number p)
		{
			Number num;
			
		  num.m = this->m == p.m;
		  
		}
	
};


int main()
{
	Number n1,n2;
	
	n1.setData(67);
	n2.setData(67);
	
	
	if(n1 == n2)
	{
		
		cout << "The N1 And N2 Are Same...";
		
	}
	
	
	return 0;
}

