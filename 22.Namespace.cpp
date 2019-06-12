/*
 *
 * A namespace is used to overcome the difficulty of having variables or functions with same name in different libraries.
 * It defines a scope.
 * To call the namespace available version of the variable, we use the scope resolution operator(::).
 *   
 * 
 */

#include<iostream>
using namespace std;

namespace n1{
    void func1(){
        cout << "Using namespace n1" << endl;
    }
    namespace n1_1{
        void func1(){
            cout << "Using nested namespace in n1" << endl;
        }
        
    }
}

namespace n2{
    void func1(){
        cout << "Using namespace n2" << endl;
    }
}
using namespace n1;
using namespace n2;
using namespace n1::n1_1;
int main(){
    // Ambiguity (Error)
    //func1();

    //n1 namespace
    n1::func1();

    //n2 namespace
    n2::func1();

    //n1 nested namespace
    n1::n1_1::func1();
    
    return 0;
}