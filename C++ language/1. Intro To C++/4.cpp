#include <iostream>
using namespace std;
int main() 
{
    int n,m[100],h,p,f;

    cout << "Enter the size of array: ";
    cin >> n;
    for (h=0;h<n;h++) 
	{
		cout << "m = ";
        cin >> m[h];
    }
    
    for (h=0;h<n;h++)
	 {
	 f = 1; 	
        for (p=1;p<=m[h];p++) 
		{
            f = f * p;
        }
        cout << "Factorial of number is :- " << f << endl;
    }
    return 0;
}

