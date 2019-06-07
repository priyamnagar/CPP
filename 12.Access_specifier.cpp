/*
 *
 * Data hiding allows classes to restrict access of class members.
 * You can apply restrictions using labels, private, protected, public. These are called access specifier.
 * public members are accessible anywhere in the program.
 * private members are not accessible anywhere outside, these can only be accessed inside by class members.
 * protected members are private members but can be accessed by derived classes.
 * By default all the members would be private unless explicitly specified.
 * 
 */

#include<iostream>
using namespace std;

class Employee{
    private:
        char account_num[20];

        string bank_private(){
            return "HDFC( in private )";
        }

    protected:
        char employee_id[20];

        string bank_protected(){
            return "HDFC( in protected )";
        }
    public:
        char employee_name[20];

        string bank_public(){
            return "HDFC( in public )";
        }
};

class Priyam:Employee{
    private:
        void access_private_private(){
            // bank_private()
            cout << "Private member is accessible in private of inherited class";
        }

        void access_protected_private(){
            string a = bank_protected();
            cout << "Protected member is accessible in private of inherited class: " << a << endl;
        }
    protected:
        void access_private_protected(){
            // bank_private();
            cout << "Private member is accessible in protected of inherited class";
        }

        void access_protected_protected(){
            string a = bank_protected();
            cout << "Protected member is accessible in protected of inherited class: " << a << endl;
        }
    public:
        void access_private_public(){
            // bank_private();
            cout << "Private member is accessible in public of inherited class";
        }

        void access_protected_public(){
            string a = bank_protected();
            cout << "Protected member is accessible in public of inherited class: " << a << endl;
        }

        void access_private_private1(){
            access_private_private();
            
        }

        void access_protected_private1(){
            access_protected_private();
            }

        void access_private_protected1(){
            access_private_protected();
        }

        void access_protected_protected1(){
            access_protected_protected();
        }
};


int main(){
    Employee e1;
    // Cannot access private members using class objects
    // e1.bank_private();

    //cannot access protected members using class objects
    // e1.bank_protected();
    cout << "Super Class: " << endl;
    cout << "Only public members are accessible using objects: " << e1.bank_public() << endl;

    Priyam p1;
    cout << "Sub class: " << endl;

    //cannot access private members of super class from private section of subclass
    // p1.access_private_private1();

    //cannot access private members of super class from protected section of subclass
    // p1.access_private_protected1();

    //cannot access private members of super class from public section of subclass
    // p1.access_private_public();

    cout << "Private members of super class are not accessible in sub class" << endl;

    //Accessing protected members of super class
    //from private
    p1.access_protected_private1();

    //from protected
    p1.access_protected_protected1();

    //from public
    p1.access_protected_public();

    return 0;
}