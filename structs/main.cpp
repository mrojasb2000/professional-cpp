// main.cpp

#include <iostream>
#include "employeestruct.h"

using namespace std;

int main(int argc, char** argv){
    // Create and populate an employee
    EmployeeT anEmployee;

    anEmployee.firstInitial = 'M';
    anEmployee.middleInitial = 'R';
    anEmployee.lastInitial = 'G';
    anEmployee.employeeNumber = 42;
    anEmployee.salary = 80000;

    // Output the values of an employee.
    cout << "Employee: " << anEmployee.firstInitial << anEmployee.middleInitial << anEmployee.lastInitial << endl;
    cout << "Number  : " << anEmployee.employeeNumber << endl;
    cout << "Salary  : $" << anEmployee.salary << endl;

    EmployeeT* myEmployee = getEmployee();

    cout << "Employee: " << myEmployee->firstInitial << myEmployee->middleInitial << myEmployee->lastInitial << endl;
    cout << "Number  : " << myEmployee->employeeNumber << endl;
    cout << "Salary  : $" << myEmployee->salary << endl;

    return 0;
}