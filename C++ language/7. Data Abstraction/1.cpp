#include <iostream>
using namespace std;

class Admin {
protected:
    static string company_name;
    double manager_salary;
    double employee_salary;
    int total_staff;
    double total_annual_revenue;
    bool can_terminate;

public:
    void myAccess(int manager_salary, int employee_salary, int total_staff, int total_annual_revenue, bool can_terminate) 
    {
        cout << "Company Name: " << company_name << endl;
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Total Annual Revenue: " << total_annual_revenue << endl;
        cout << "Can Terminate: " << can_terminate << endl;
    }
};

class Manager : public Admin {
public:
    void myAccess(int manager_salary, int employee_salary, int total_staff) {
        cout << "Company Name: " << company_name << endl;
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
    }
};

class Employee : public Manager {
    public:

        void myAccess(int employee_salary, int total_staff) 
        {
            cout << "Company Name: " << company_name << endl;
            cout << "Employee Salary: " << employee_salary << endl;
            cout << "Total Staff: " << total_staff << endl;
        }
};

string Admin::company_name = "MNC Limited";

int main() {

    Admin admin;
    admin.myAccess(300000,56000,67,34000000,true);
	cout << endl ;

    Manager manager;
    manager.myAccess(560000,45000,34);
	cout << endl ;

    Employee employee;
    employee.myAccess(780000,23);
	cout << endl ;

    return 0;
}



