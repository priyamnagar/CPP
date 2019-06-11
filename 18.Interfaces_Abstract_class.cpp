/*
 *
 * An interface describes the behaviour or capablities of a c++ class without actually implementing it.
 * Interfaces are implemented using abstract classes.
 * A classis made abstract by declaring atleast one function as pure virtual function.
 * A pure virtual function is the one which is declared by placing equal to 0 in the end.
 * These functions can be implemented by inheriting and overriding the function.
 * 
 */

#include<iostream>
using namespace std;

//Interface declaration
class AbstractClass
{
    public:
        virtual int add(int a, int b) = 0;

};


//Interface definition
class Derived
{
    public:
        int add(int a, int b){
            return a+b;
        }
};

int main(){
    Derived d;
    std::cout << d.add(12,56) << endl;
    return 0;
}

