#include<iostream>
using namespace std;
class Size{
	
	private :
		int feet;
		int inch;

	public :
		setData()
		{
			cout << "Enter the Feet :-  ";
			cin >>feet;
			cout << "Enter the Inch :-  ";
			cin >>inch;
			
		}
		Size operator+(Size p)
		{
			Size m;
			
			m.feet = this->feet + p.feet + ((this->inch + p.inch) /12);
			m.inch = (this->inch + p.inch/12)%12;
			
							
			return m;
			
		}
		
		getData()
		{
			
			cout << "your feet is :- "<< this->feet << endl ;
			cout << "your inch is :- " << this->inch<<endl; 
			
		}
	 
};		

int main()
{
	Size s1,s2,s3;
	
	
	s1.setData();
	s2.setData();
	

	s3 = s1 + s2 ;
	
	
	s3.getData();
	

	return 0;
}

