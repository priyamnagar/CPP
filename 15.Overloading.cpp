/*
 *
 * Defining more than one function or operator with same name inside the same scope is called function overloading and operator overloading respectively.
 * Both definition or declaration should have different arguments.
 * The process of selecting the most appropriate function or operator is called overload resolution.
 * 
 */

#include<iostream>
#include<string>
using namespace std;

class PrintData{
    int x=20, y=30;
    public:
        //Function overloading
        void print(int a){
            cout << a << endl;
        }

        void print(string a){
            cout << a << endl;
        }

        void print(double a){
            cout << a << endl;
        }

        //Operator overloading
        PrintData operator+(const PrintData& p){
            PrintData p1;
            p1.x = p.x + this -> x;
            p1.y = p.y + this -> y;
            cout << "Operator overloaded" << endl;
            return p1;
        }

};

int main(){
    PrintData p1, p2, p3;
    p1.print(4);
    p1.print("hello");
    p1.print(1.2);
    p3 = p1+p2;
    return 0;
}