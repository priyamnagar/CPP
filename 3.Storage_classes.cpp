/*
-> A storage class defines the scope and life-time of variables. There are following
storage classes: auto, register, static, extern, mutable.

-> auto storage class is the default storage class for all local variables. It can only be used within functions i.e. local variables.

-> register storage class is used to define local variables that should be stored in a register instead of RAM.The variable has a maximum size equal to the register size.

-> The static storage class instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating and destroying it each time it comes into and goes out of scope. Therefore, making local variables static allows them to maintain their values between function calls.

-> When you have multiple files and you define a global variable or function, which will be used in other files also, then extern will be used in another file to give reference of defined variable or function. 
The extern modifier is most commonly used when there are two or more files sharing the same global variables or functions.

-> The mutable specifier applies only to class objects.
It allows a member of an object to override const member function.


*/



#include<iostream>
#include "3.Storage_classes2.cpp"
using namespace std;

int z = 900;
int test(){
    static int a = 10;
    std::cout<<a;
    a=a+10;
    return 0;
}

int main(){
    auto k = 20;
    register int a=10;
    
    int out;
    test();
    test();
    out = test_fn();
    printf("%d",out);
    return 0;
}

