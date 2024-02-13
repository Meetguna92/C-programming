#include<iostream>
using namespace std;
class X{
	
	public :
		int a,b,c;
	
		
};
class Y :public X{
	
		public :
						
				setData()
				{
					cout << "Enter the value of A :- ";
					cin >>a;
					cout << "Enter the value of B :- ";
					cin >>b;
					cout << "Enter the value of C :- ";
					cin >>c;
							
				
				}
				
				getData()
				{
					cout << "the sum of All cubes value :-  "<<((a*a*a)+(b*b*b)+(c*c*c));
				
				}
			
	
	
};
int main()
{
	Y y1;
		y1.setData();
		y1.getData();
		
	return 0;
	
}

