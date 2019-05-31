/* 
-> C++ is a middle level language( It comprises a combination of both high-level and low-level language features), that supports procedural, object-oriented, and generic programming.
-> C++ was developed by Bjarne Stroustrup starting in 1979 at Bell Labs. It was originally named C with classes but later   renamed as C++ in 1983.
-> C++ is a superset of C, so virtually any legal program in C can run in C++.
-> C++ is a statically typed, compiled, general-purpose, case-sensitive, free-form programming language.
-> A programming language is said to use static typing when type checking is performed during compile-time as opposed to run time.
-> Generic programming is a style of computer programming in which algorithms are written in terms of types to-be-specified- later that are then instantiated when needed for specific types provided as parameters. This style of programming is used    in Machine Learning.
*/

/*
-> When we consider a C++ program, it can be defined as a collection of objects that communicate via invoking each other's   methods.

->Object − Objects have states and behaviors. Example: A dog has states - color, name, breed as well as behaviors - wagging, barking, eating. An object is an instance of a class.

->Class − A class can be defined as a template/blueprint that describes the behaviors/states that object of its type support.

->Methods − A method is basically a behavior. A class can contain many methods. It is in methods where the logics are        written, data is manipulated and all the actions are executed.

->Instance Variables − Each object has its unique set of instance variables. An object's state is created by the values     assigned to these instance variables.
*/

//Printing Hello World

#include<iostream>
//standard namespace
using namespace std;

//main() is where the program execution begins
int main(){
    cout<< "Hello World!\n";
    
    return 0;
}



/*

-> Execute with g++ -o output 0.Overview.cpp and ./output

-> The C++ language defines several headers, which contain information that is either necessary or useful to your program. For this program, the header <iostream> is needed.

-> The line using namespace std; tells the compiler to use the std namespace. Namespaces are a relatively recent addition to C++. 
*/



