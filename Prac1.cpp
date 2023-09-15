#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    string address;

    // Get user input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    // Clear the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter your address: ";
    getline(cin, address);

    // Print personal details
    cout << "\nPersonal Details\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;

    return 0;
}
