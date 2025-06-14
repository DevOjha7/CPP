# include <iostream>
using namespace std;

class Employee{

    public:
    int emp_id;
    string emp_name;
    int emp_salary;

    void emp_details(){

        cout << "Employee ID : " << emp_id << endl;
        cout << "Employee Name : " << emp_name << endl;
        cout << "Employee Salary : " << emp_salary << endl;

    }    
};

int main() {

    Employee e1;

    e1.emp_id = 221;
    e1.emp_name = "Suresh Sharma";
    e1.emp_salary = 140000 ;

    e1.emp_details() ;

    return 0;

}