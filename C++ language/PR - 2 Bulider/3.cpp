#include<iostream>
using namespace std;
class Banksystem{
    public:
        string aName = "meet";
        string aPassword = "meetpatel";
        string aId = "678";
        int aBalance = 500000;

        string name ;
        string pass ;
        string id;
        int balance;
};
int main()
{
    Banksystem b[1];
	char temp,w;

    
    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\........Welcome to the Bank System......."<<endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;
    system("pause");
    
    cout << "the submit for this login page..."<<endl;
    
    b[0].name = "Raj";
    b[0].id = "555";
    b[0].pass = "raj34";
    b[0].balance = 50000;

	system("cls");
 
    cout << "Press m for  Administrator... "<<endl<<"Press p For  Public... "<<endl;
	cout <<"Enter the Your Choice :- " ; 
    cin >> temp;

    switch(temp)   
    {
        case 'm' :
            cout << "Administrator Successfully login.." << endl;
            char id[20],pass[20];

            cout << "Enter the your Admin ID :- " ;
            cin >> id;
            cout << "Enter the your Admin Password : " ;
            cin >> pass;
            system("cls");
            if(id==b[0].aId && pass==b[0].aPassword)
            {
                cout << "Press 1 For Show the Users Accounts" << endl;
				cout << "Press 2 For Show the Users Account Balance " << endl;
				cout << "Enter the your choice : ";
                int r;
                cin >> r;
                system("cls");
                switch (r)
                {
                    case 1 :
                        cout << "You choice is Succesfully login... " << endl << endl;
                        for (w= 0;w<1;w++)
                        {
                            cout << "-----------------------------------------------------------------------------------------------" << endl;
                            cout << "\t\t\tPeople : " << w  << endl;
                            cout << "------------------------------------------------------------------------------------------------" << endl;
                            cout << "\tName : " << b[w].name << endl;
                            cout << "\tID : " << b[w].id << endl;
                            cout << "\tBalance : " << b[w].balance << endl << endl;
                        }
                        break;
                        
                    case 2 :
                        cout << "You choice  Successfully login.." << endl;
                        for (w=0;w<1;w++)
                        {
                            cout << "-----------------------------------------------------------------------------------------------" << endl;
                            cout << "\t\t\tPeople : " << w  << endl;
                            cout << "------------------------------------------------------------------------------------------------" << endl;
                            cout << "\tName : " << b[w].name << endl;
                            cout << "\tBalance : " << b[w].balance << endl << endl;
                        }
                        break;
                    
                    default:
                        cout << "Enter Valid Operation Please Try Again Later " << endl;
                        break;
                }
            }
            else
            {
                cout << "No User Found Sorry" << endl;
            }

            break;

        case 'p' :
            cout << "You Choosed Public Mode Successfully" << endl;
            
            string id2,password2;
            
			cout << "Enter the Id : " ;
            cin >>id2;
            cout << "Enter the Password : " ;
            cin >> password2;
            system("cls");
            for(w=0;w<1;w++)
            {
                if(b[w].id == id2 && b[w].pass == password2)
                {
                    cout << "-----------------------------------------------------------------------------------------------" << endl;
                    cout << "\t\t\t | Welcome " << b[w].name << " |" << endl;
                    cout << "-----------------------------------------------------------------------------------------------" << endl;
                    cout << "Press 1 For Deposit Money in your Accounts" << endl;
					cout << "Press 2 For Withdraw Money in  Your Account "<<endl;
					cout << "Press 3 For Show the your Balance " << endl;
					cout<< "Enter your choice : ";
                    int s;
                    cin >> s;
                    system("cls");
                    switch(s)
                    {
                        case 1 :
                            cout << "-----------------------------------------------------------------------------------------------" << endl;
                            cout << "\tYour Deposit Money choice  is Succesfully login... " << endl ;
                            cout << "-----------------------------------------------------------------------------------------------" << endl;
                            cout << "\tEnter the Deposit Amount :- ";
                            int am;
                            cin >> am;
                            b[w].balance += am;
                            cout << "\t your Total Balance Is :- " << b[w].balance << endl << endl;
                            break;
                        
                        case 2 :
                            cout << "-----------------------------------------------------------------------------------------------" << endl;
                            cout << "\tYour Withdraw Money choice is Succesfully login... "  << endl;
                            cout << "-----------------------------------------------------------------------------------------------" << endl;
                            cout << "\tEnter Amount To Withdraw : ";
                            int a;
                            cin >> a;
                            b[w].balance -= a;
                            cout << "\t your Total Balance Is :-: " << b[w].balance << endl << endl;
                            break;

                        case 3 :
                            cout << "-----------------------------------------------------------------------------------------------" << endl;
                            cout << "\tYour  choice Succesfully login... "  << endl;
                            cout << "-----------------------------------------------------------------------------------------------" << endl;

                            cout << "\tName : " << b[w].name << endl;
                            cout << "\tID : " << b[w].id << endl;
                            cout << "\tPassword : " << b[w].pass << endl;
                            cout << "\tBalance : " << b[w].balance << endl << endl;
                            break;
                        default:
                            cout << "\t press the Valid Operation " << endl ;
                            break;
                    }
                }
            }
    }

    return 0;
}

