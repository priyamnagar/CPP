/*
 *
 * Templates are the foudation of generic programming, it makes the code independent of any particular type.
 * 
 * 
 */

#include<iostream>
#include<string>
using namespace std;

template <typename T>
T func1(T x){
    return "Returning String";
}

template <typename V>
V func2(V x){
    return 0;
}

int main(){
    int x = 0;
    string y = "Hello";
    cout << func1(y) << endl << func2(x) << endl;
    return 0;
}