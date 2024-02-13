#include<iostream>
using namespace std;
 class Diamond{
 	private :
 		int id,s_quantity,revenue,i_r_diamonds,e_diamonds;
 		string name,ceo;
 		
 		public :
 			Diamond(int id,string name,int s_quantity,int revenue,int i_r_diamonds,int e_diamonds,string ceo)
 			{
 				this-> id = id;
 				this-> name = name;
 				this-> s_quantity = s_quantity;
 				this-> revenue = revenue;
 				this-> i_r_diamonds = i_r_diamonds;
 				this-> e_diamonds = e_diamonds;
 				this-> ceo = ceo;
			}
			getData()
			{
				cout << "your id :- "<<this-> id<<endl;
				cout << "your name :- "<<this-> name<<endl;
				cout << "your s_quantity :- "<<this-> s_quantity<<endl;
				cout << "your revenue :- "<<this-> revenue<<endl;
				cout << "your i_r_diamonds :- "<<this-> i_r_diamonds<<endl;
				cout << "your e_diamonds :- "<<this-> e_diamonds<<endl;
				cout << "your ceo :- "<<this-> ceo<<endl <<endl;
				
			}
 };
 int main()
 {
 	
 	
		Diamond	d1(221,"diam",50,300000,4000,6000,"het"),
			 	d2(256,"shreediamond",80,600000,5000,10000,"pal"),
			 	d3(2,"shreediamond3",20,60000,900,4000,"heet"),
			 	d4(245,"shreediamond5",30,50000,2000,5000,"prince"),
			 	d5(267,"shreediamond7",100,900000,9000,9000,"raj");
			 	
 	
 	
 	d1.getData();
 	d2.getData();
 	d3.getData();
 	d4.getData();
 	d5.getData();
 	
 	return 0;
 }

