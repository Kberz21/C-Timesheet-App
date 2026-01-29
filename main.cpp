#include <iostream>
using namespace std;

class employee{
    private:
        int id;
        int salary;
    public:
        employee(){
            id = 0;
            salary = 0;
        }
        employee(int empId, int empSalary){
            id = empId;
            salary = empSalary;
        }
        void displayInfo(){
            cout << "Employee ID: " << id << ", Salary: " << salary << endl;
        }
};

int main() {
    int option =0;
    while(option==0){
        int id, salary;
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Salary: ";
        cin >> salary;

        employee emp(id, salary);
        emp.displayInfo();

        cout << "Do you want to add another employee? (0 for Yes / 1 for No): ";
        cin >> option;

        cout<<"Bye bye!"<<endl;
        cout<<"-----------------"<<endl;
    }
    return 0;
}