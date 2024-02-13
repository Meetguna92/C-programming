#include<iostream>
using namespace std;
class Shape {
	public:
	
    virtual void calculate() = 0;  

};

class Circle : public Shape {
	protected:
    	int radius;

	public:
    	Circle(int r) : radius(r) {}

    void calculate()  {
        int area = 3.14 * radius * radius;
        cout << "the Area of Circle: " << area <<endl;
    }
};

class Triangle : public Shape {
	protected:
    	int base, height;

	public:
    	Triangle(int b, int h) : base(b), height(h) {}

    void calculate()  {
        int area = 0.5 * base * height;
        cout << "the Area of Triangle: " << area <<endl;
    }
};

class Rectangle : public Shape {
	private:
    	int length, width;

	public:
    	Rectangle(int l, int w) : length(l), width(w) {}

    void calculate()  {
        int area = length * width;
        cout << "the Area of Rectangle: " << area <<endl;
    }
};

int main() {

    Shape* shapes[3];

    shapes[0] = new Circle(5);
    shapes[1] = new Triangle(4, 6);
    shapes[2] = new Rectangle(3, 7);

  	 int i;
    for( i = 0; i < 3; ++i)
	{
        shapes[i]->calculate();
    }

    return 0;
}

