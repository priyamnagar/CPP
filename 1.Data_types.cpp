/*
-> Variables are nothing but reserved memory locations to store values. This means that when you create a variable you reserve some space in memory.

-> There are 7 built-in data types in C++, Boolean(bool), Character(char), Integer(int), Floating point(float), Double
floating point(double), Valueless(void), Wide character(wchar_t)

-> Basic data types can be modified using some type  modifiers : signed, unsigned, short, long.

-> It provides various other types of variable, Enumeration, Pointer, Array, Reference, Data structures, and Classes.
*/

#include<iostream>
using namespace std;

int main(){
    //Variable declaration
    int i;
    char c;
    float f;
    double d;
    
    
    cout<< "Size of int is: " << sizeof(int) << " bytes" << endl;
    
    //typedef - You can use a different name for a data type
    typedef int integer;
    
    cout<< "Size of integer is: " << sizeof(integer) << " bytes" << endl;
    
    //enum declares an optional type name and assigns an integer value to all the values the type can take
    
    enum color {red, green, blue};
    
    color z;
    z=green;
    
    cout<< z <<endl;
    
    
    return 0;
}



