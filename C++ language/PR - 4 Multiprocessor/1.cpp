#include<iostream>
using namespace std;
class Message{
	
	private :
		
		string message;
	
	public :
		
		Message(string message)
		{
			this->message = message;
			
		}
		
		void Print()
		{
			cout << "first message :-  "<<message<<endl<<endl;
		}
		
		void Print(string message2)
		{
			cout<< "The sum of two message...."<<endl<<endl;
			cout << "first message :-  "<<message<<endl;
			cout << "second message :-  "<<message2<<endl;
			
		}	
	
};
int main()
{
	Message m("one message");
	
	m.Print();
	m.Print("two message");
	
	return 0;
	
}

