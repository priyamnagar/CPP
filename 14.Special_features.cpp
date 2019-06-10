/*
 *
 * Friend functions:
 * You can declare a friend function for a class. I can be defined anywhere outside, but it can access private and protected members of that class.
 * friend keyword is used to define a friend function. I should be declared inside the class.
 * 
 * Inline functions:
 * inline keyword is used in front of a function to reduce the overhead of function call.
 * inline is not a command but a request to the compiler. In some cases the compiler ignores the request.
 * 
 * this pointer:
 * This pointer is use to pointer to itself. It is a pointer.
 * 
 * 
 * Pointer to class:
 * You can declare a pointer to a class. To access member function, instead of using the '.' operator, you have to use the member access
 * operator ( -> ).
 * 
 * Static class members:
 * When we declare attribute of a class as static, the no matter how many objects you create , there is only one copy of that for all objects.
 * Declaring member function of a class as static, the function becomes independent of any object. You can access the function using class name.
 * Class_name::function_name();
 * 
 */


#include<iostream>
using namespace std;

class Line{
    private:
        float length;
    public:

        //friend function
        friend void friend_fun();

        //inline function
        inline void inline_fun(){
            std::cout << "Inline function is called" << endl;
        }

        void print_function();

        static void static_func(){
            std::cout <<  "Static function is called" << endl;
        }

};


void friend_fun(){
    Line line;
    line.length = 32;
    std::cout << "Private members are accessible in this function: " << line.length << endl; 
}


void Line::print_function(){
    std::cout << "Print function has been called using a class pointer." << endl;
}

int main(){
    Line line;
    friend_fun();
    line.inline_fun();

    Line *l1;
    l1 -> print_function();

    //static fucntion
    Line::static_func();




    return 0;
}