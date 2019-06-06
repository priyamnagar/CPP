/*
 *
 * Structure is a user defined data type which allows you to combine items of different kind.
 * It is used to represent a record.
 * 
 */


#include<iostream>
#include<cstring>
using namespace std;

struct Employee{
    int employee_id;
    char name[20];
    int age;
    char designation[50];
}emp;

struct Employee struct_access(){
    emp.employee_id = 369694;
    strcpy(emp.name,"Priyam Nagar");
    emp.age = 25;
    strcpy(emp.designation,"Machine Learning Engineer");
    return emp;

}

void ptr_struct(){
    struct Employee *emp1;
    emp1 = &emp;
    cout << "Data from pointer: " << endl;
    cout << emp1->name << endl << emp1-> designation << endl;
}

int main(){
    cout << "Employee object: " << endl;
    struct Employee e1;
    e1 = struct_access();
    cout << e1.name << endl;

    cout << "\nStruct pointer: " << endl;
    ptr_struct();
    return 0;
}

