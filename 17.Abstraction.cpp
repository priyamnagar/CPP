/*
 *
 * Abstraction means providing only essential details and hiding background details.
 * 
 */

#include<iostream>
#include<string>
using namespace std;

class Person{
    protected:
        string name;
        string address;
        double height;
        double weight;
    public:

        Person(string name,string address,double height,double weight){
            this -> name = name;
            this -> address = address;
            this -> height = height;
            this -> weight = weight;    
        }

        //Interface to the outside world, hiding the inner details.
        void characterstics(){
            std::cout << name << endl << address << endl << height <<endl << weight << endl;
        }
};


int main(){
    Person p1("Ram", "Home", 7.3, 90);
    //Calling without knowing the inner details.
    p1.characterstics();
    return 0;
}