#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int Empnumber;
    string Empname;

public:
    void getdata() {
        cout << "Enter Employee Number: ";
        cin >> Empnumber;
        cin.ignore(); // Clear the newline character from the input buffer
        cout << "Enter Employee Name: ";
        getline(cin, Empname);
    }

    void display() {
        cout << "Employee Number: " << Empnumber << endl;
        cout << "Employee Name: " << Empname << endl;
    }
};

int main() {
    const int numEmployees = 6; // Change this to the number of employees you want to input

    Employee employees[numEmployees];

    // Input data for each employee
    for (int i = 0; i < numEmployees; ++i) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        employees[i].getdata();
    }

    // Display the details of all employees
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < numEmployees; ++i) {
        cout << "\nDetails for Employee " << i + 1 << ":\n";
        employees[i].display();
    }

    return 0;
}
