/*
 *
 * <ctime> library provides date and time functionality in c++.
 * There are four time-related types: clock_t, time_t, size_t, and tm.
 * 
 */

#include<iostream>
using namespace std;


int datetime(){
    time_t now_temp = time(0);
    char* now = ctime(&now_temp);
    cout << "Current date and time: " << now << endl;

    cout << "Formatting: "<< endl;

    tm *format = localtime(&now_temp);

    cout <<"Date: " << format->tm_mday << "-" << 1+format->tm_mon << "-" << 1900+format->tm_year << endl;
    cout <<"Time: " << format->tm_hour << ":" << format->tm_min << ":" << format->tm_sec << endl;
    return 0;
}

int main(){
    datetime();
    return 0;
}