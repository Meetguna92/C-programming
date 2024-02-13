#include<iostream>
using namespace std;
class Shape{
	
	public :
		float width,height;
		 Shape()
		{
			cout << "Enter The Width :- ";
			cin >> width;
			cout << "Enter The Height :- ";
			cin >> height;
			
		}
	
};

class Triangle:public Shape{
	
	public :
		
		area()
		{
			cout << "The Triangle Area is :- "<< ((0.5)*(width*height))<<endl;
		}
	
};

class Rectangle:public Shape{
	
	public :
		
		area()
		{
			cout << "The Rectangle Area is :- "<<(width*height)<<endl;
		}
	
};
int main()
{
	Triangle t1;
	Rectangle r1;
	
	t1.area();
	r1.area();
	
	return 0;
}

