/*
 *
 * Reference is an alias for another existing variable.
 * You cannot have NULL references.
 * References are immutable.
 * They must be initialized.
 * 
*/

#include<iostream>
using namespace std;


int create(){
    int i = 10;
    int& j = i;
    cout << "Value of i: " << i << endl;
    cout << "Value of its reference: " << j << endl;
    return 0;
}



int main(){
    cout << "Creating reference : " << endl;
    create();
    return 0;
}