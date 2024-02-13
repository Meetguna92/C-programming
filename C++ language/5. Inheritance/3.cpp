#include<iostream>
using namespace std;

class RBI {
	public:
	    int a;
	
	     Rate() 
		 {
	        cout << "Enter the Amount :- ";
	        cin >> a;
	    }
};

class SBI : public RBI {
		 public :
			float r1;
		     getRate1() 
			 {
			 	 cout << "Enter the Rate of SBI :- ";
		         cin >> r1;
		         cout << "Your TOTAL Amount in SBI :- " << (((a * r1) / 100) + a)<<endl;
		     }
};

class BOB : public RBI {
	  public:
	  	float r2;
	     getRate2() 
		 {
		 	cout << "Enter the Rate of BOB :- ";
	        cin >> r2;
	        cout << "Your TOTAL Amount in BOB :- " << (((a * r2) / 100) + a)<<endl;
	     }
};

class ICICI : public SBI,public BOB {
	 public:
		float r3;
	     getRate3() 
		 {
		 	cout << "Enter the Rate of ICICI :- ";
		    cin >> r3;
	        cout << "Your TOTAL Amount in ICICI :- " << (((SBI::a *r3) / 100) + SBI::a)<<endl;
	     }
};

int main() {
    ICICI i1;
    i1.SBI::Rate();
    i1.getRate1();
    i1.getRate2();
    i1.getRate3();

    return 0;
}
