/*
 *
 * Polymorphism means having many forms.ex: A person at the same time has many characterstic. A man can be a husband, a child, a brother etc.
 * It is of two types - Compile time and Runtime polymorphism.
 * Compile time polymorphism is achieved by function or operator overloading.
 * Runtime polymorphism is achieved by function overriding.
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

        void characterstics(){
            std::cout << name << endl << address << endl << height <<endl << weight << endl;
        }
};

class Husband: Person{
    private:
        string wife_name;
    public:

        Husband(string wife_name, string name,string address,double height,double weight): Person(name,address,height,weight){
            this->wife_name = wife_name;
        }
        void characterstics(){
            std::cout << name << endl << address << endl << height <<endl << weight << endl;
            std::cout << wife_name << endl;
        }

};


int main(){
    cout << "Husband:\n" << endl;
    Husband h1("Sita", "Ram", "Home", 7.3, 90);
    h1.characterstics();

    cout << "\nPerson:\n" << endl;
    Person p1("Ram", "Home", 7.3, 90);
    p1.characterstics();
    return 0;
}