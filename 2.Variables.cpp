/*
-> A variable is a named storage that our program can manipulate. There are different types of variables that can store different type of data and a different storage size.

-> Some basic types are: int, char, float, double, void, bool, wchar_t.

-> To use a variable you have to first declare it as: type variable_list; 
ex: int a; Variables can be initialized in there declaration.

-> When you are using multiple files, you can use extern keyword during declaration,
so you can declare a variable multiple times, but ut can only be defined once in a file.

-> To acces a global variable, when a local variable is present with the same name, we use the scope resolution operator(::) as ::x.

-> There are two ways to define constants: #define preprocessor, const keyword.
*/


#include <iostream>

//constant
#define LENGTH 10
#define WIDTH 5

using namespace std;

    extern int a,b;
    int c;

int main(){

    int c;
    char d='\0';
    int *e=NULL;

    const char NEWLINE = '\n';

    cout<< LENGTH << WIDTH << NEWLINE;

    return 0;

}
