/*
 * Every variable is a memory location and every memory location has its address defined which can be accessed using
 * ampersand (&) operator which denotes an address in memory.
 *
 * A pointer is a variable whose value is the address of another variable.
 *
 * A pointer that is assigned NULL is called a null pointer.
 *
 * There are four arithmetic operators that can be used on pointers: ++, --, +, and -.
 *
 * A pointer that points to the beginning of an array can access that array by using either pointer arithmetic or
 * array-style indexing.
 *
 * You can create an array of pointers in which each element in an array contains pointers to some variable.
 *
 * A pointer to a pointer is a form of multiple indirection or a chain of pointers.the first pointer contains
 * the address of the second pointer, which points to the location that contains the actual value.
 *
 */

#include <iostream>
using namespace std;

#define MAX 5

int* null_pointers(){
    int* ptr = NULL;
    return ptr;
}

int pointer_arithmetic(){
    int a[MAX];
    int* p;
    p=a;

    *p =9;
    p++;
    *p = 5;
    p++;
    *p = 6;
    p++;
    *p = 3;
    p++;
    *p = 2;
    for(int i=0 ; i<MAX; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}

int ptr_to_ptr(){
    int var = 3000;
    int *ptr1;
    int ** ptr2;

    ptr1 = &var;

    ptr2 = &ptr1;

    cout << "Value from variable: "<< var << endl;
    cout << "Value from pointer: "<< *ptr1 << endl;
    cout << "Value from pointer to pointer: " << **ptr2 << endl;

    return 0;
}

int ptr_to_fun(int* ptr){
    cout << "Value passed: " << *ptr << endl;
    return 0;
}

int* return_ptr(int *var){
    int* ptr;
    ptr = var;
    cout << "Address sent : " << ptr;
    cout << "\nValue sent : " << *ptr;
    return ptr;
}

int main(){
    cout<<"\nNULL pointer value: " << null_pointers();

    cout<<"\nArray using pointer: ";
    pointer_arithmetic();

    cout << "\nPointer to pointers: " << endl;
    ptr_to_ptr();

    cout << "\nPointer to function: " <<endl;
    int* ptr;
    int var = 9000;
    ptr = &var;
    ptr_to_fun(ptr);

    cout << "\nReturn Pointer: " << endl;
    ptr = return_ptr(&var);
    cout << "\nAddress recieved : " << ptr;
    cout << "\nValue returned: " << *ptr;
    cout << endl;
    return 0;
}


