/*
 -> If a function is to use arguments, it must declare variables that accept the values of the arguments.
 These variables are called the formal parameters of the function.

 -> While calling a function there are 3 ways you can pass parameters: Call by value, call by pointer, call by reference.

 -> The call by value method of passing arguments to a function copies the actual value of an argument into the formal parameter of the function.
Changes made to the parameter inside the function have no effect on the argument.

 -> The call by pointer method of passing arguments to a function copies the address of an argument into the formal parameter.
 This means that changes made to the parameter affect the passed argument.

 -> The call by reference method of passing arguments to a function copies the reference of an argument into the formal parameter.
 Changes made to the parameter affect the passed argument. References are generally implemented using pointers. A reference is same object,
 just with a different name and reference must refer to an object. Since references can’t be NULL, they are safer to use.

 */


#include<iostream>
using namespace std;

//call by value
void by_value(int a=10){
    a=100;
    return;
}

//call by pointer
void by_pointer(int *a){
    *a = 200;
    return;
}

//call by reference
void by_reference(int &a){
    a=300;
    return;
}


int main(){
    int a = 10;

    by_value(a);
    cout<<"By value: "<< a<<endl;

    by_pointer(&a);
    cout << "By Pointer: " << a <<endl;

    by_reference(a);
    cout << "By reference: " << a << endl;

    return 0;
}