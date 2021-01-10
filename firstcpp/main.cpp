
//Employee List

#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;


int main(){
    
    cout << left;
    int emp_salary;
    string emp_name;

    fstream emp_file("/Users/cloud/Documents/cpp/emp.txt");
    if (!emp_file) {
        cout << "employee file not found" << endl;
        return -5;
        
    }
    
    cout << "\t\tEMPLOYEE LIST \n\n" ;
    cout << setw(25) << "EMPLOYEE NAME" << "EMPLOYEE SALARY" << endl;
    emp_file.ignore(255,'\n');
    emp_file.ignore(255, '\n');
    
    //pre-read
    
    getline(emp_file, emp_name, ',');
    emp_file >> emp_salary;

    while (!emp_file.eof()) {
        cout << setw(25) << emp_name << emp_salary <<endl;
        
    //post-read
    getline(emp_file, emp_name, ',');
    emp_file >> emp_salary;

    }
    
    
    
    
    return 0;
}
