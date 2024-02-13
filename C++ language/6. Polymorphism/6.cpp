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
		
	    operator++()
		{
			Number num;
			
		  num.m = this->m++;
		  
		}
		getData()
		{
			
			cout << "the value is :-  "<<this->m;
			
		}
	
};


int main()
{
	Number n1;
	
	n1.setData(67);

	++n1;
	
	n1.getData();
	
	return 0;
}


