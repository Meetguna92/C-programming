#include<iostream>
using namespace std;

class Calculater{
	
	public :
		getCalculater(float a,float b)
		{
			cout << "The Division of a Value :- "<<(a/b)<<endl;
		}
		
		getCalculater(int a,int b,int c)
		{
			cout << "The Subtraction of a Value :- "<<(a-b-c)<<endl;
		}
		
		getCalculater(int a,int b,int c,int d)
		{
			cout << "The Multipliction of a Value :- "<<(a*b*c*d)<<endl;
		}
		
		getCalculater(int a,int b,int c,int d,int e)
		{
			cout << "The Addition of a Value :- "<<(a+b+c+d+e)<<endl;
		}
	
};

int main()
{
	Calculater cal;
	
	cal.getCalculater(45,8);
	cal.getCalculater(67,45,8);
	cal.getCalculater(3,7,8,4);
	cal.getCalculater(9,7,5,8,2);
	
	return 0;
}

