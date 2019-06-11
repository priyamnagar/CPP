/*
 *
 * To work with files we use fstream header file.
 * This header file gives ofstream and ifstream with are used to write and read from files respoectively.
 * 
 */


#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main(){
    string data;
    ofstream out;
    ifstream in;

    std::cout << "Writing data to file: Test data in the file" << endl;
    out.open("test.txt");
    out << "Test data in the file" << endl;
    out.close();
    std::cout << "Data Written" << endl;


    cout << "Reading data from file" << endl;;
    in.open("test.txt");
    cout << "Data read from file: ";
    while (getline(in,data))
    {
        cout << data << endl;
    }
    cout << endl;
    
    in.close();

     
    return 0;
}