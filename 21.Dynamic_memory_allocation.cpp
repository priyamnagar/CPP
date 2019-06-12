/*
 *
 * Memory in c++ is of two types: Stack and heap.
 * Stack is used by the variables during compile time.
 * heap is a heap od memory which is used for dynamic memory allocation.
 * Dynamic memory is allocated using the "new" operator.It returns the address after allocation.
 * You can use delete operator to de-allocate the memory.
 * malloc() function is still available in c++ but t is recommended not to use it.
 * 
 */

#include<iostream>
using namespace std;

int main(){
    //Variable allocation
    int *p1 = new int;

    //Array allocation
    int *p2 = new int[20];

    //Initialization
    *p1 = 30;
    for(int i=0; i<20;i++){
        *(p2+i) = 0;
    }

    //Memory access
    cout << "Dynamically allocated integer value: " << *p1 << endl;
    cout << "Array: " << endl;
    for(int i=0; i<20;i++){
        cout << *(p2+i) << " ";
    }
    cout << endl;

    //variable deallocation
    delete p1;

    //Array deallocationsss
    delete [] p2;
    return 0;
}