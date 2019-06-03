/*
 * Array is a collection of variables of the same type. It uses a fixed size.
 * All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest
  address to the last element.
 * Array declaration: type arrayName [ arraySize ];
 * Initialization:
 * double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
 * double salary = balance[9];
 * While printing arrays, you can format the output by using the setw function.

 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void test_array(){
    int arr[10];
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};

    //initialize
    for(int i = 0; i<10; i++){
        arr[i] =0;
    }
    for(int i=0;i<10;i++){
        cout << setw(5) << i << setw(13) << arr[i] << endl;
    }
    return;
}

void multi_dim() {
    int a[3][4];
    cout<<"Multi dimentional array :\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++) {
            a[i][j] = 0;
            cout << setw(5) << i <<setw(2) << j << setw(7) << a[i][j] << endl;
        }

    }
    return;
}

void pointer_array(){
    double *p;
    double arr[5];
    p = arr;
    for(int i=0; i<5;i++){
        *(p+i) = i;
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return;
}

void test_string(){
    string str1 = "Hello";
    string str2 = " World!";

    cout << str1+str2 << endl;
    return;
}

int main(){
    test_array();

    multi_dim();

    pointer_array();

    test_string();
    return 0;


}