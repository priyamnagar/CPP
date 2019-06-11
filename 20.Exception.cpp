/*
 *
 * An exception is an abnormal condition that a program encounters during runtime.
 * C++ uses 3 keywords for exception handling: try, catch, throw.
 * throw: This keyword is used to throw an exception.
 * catch: It catches an exception and act u-pon it.
 * try: It identifies a block of code where particular exceptions will be activated.
 * 
 * 
*/

#include<iostream>
using namespace std;

double except(int a, int b){
    if(b==0){
        throw "Divide by zero";
    }
    return a/b;
}

int main(){
    int a = 1;
    int b = 0;
    int c;

    try{
        c = except(a,b);
    } catch(...){
        cerr << "Error caught" << endl;
    }
    cout << "Exception Handled" << endl;
    return 0;
}