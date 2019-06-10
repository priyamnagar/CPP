/*
 *
 * Constructor is a special member function that is executed when the object of the class is created. It has the same name as the class.
 * It does not have any return type.
 * It is used for setting initial values.
 * A default constructor do not have any parameters but you can pass some parameters if you want.
 * 
 * Destructor is a special member function that is executed when the object goes out of scope or is deleted.
 * It has the same name as the class prefixed with a tilde(~).
 * 
 */


#include<iostream>
using namespace std;

class Box{
    private:
        double height;
        double width;
        double length;


    public:
        // Constructor
        Box(double h, double w, double l){
            this->height = h;
            this->width = w;
            this->length = l;
            cout << "Constructor executed" << endl;;
        }

        // Copy Constructor
        Box(const Box &obj){
            this->height = obj.height;
            this->width = obj.width;
            this->length = obj.length;
            cout << "Copy Constructor executed" << endl;
        }

        // Area of Box
        double area(){
            return 2 * (this->width * this->length + this->width * this->height + this->height * this->length);
        }

        // Volume of Box
        double volume(){
            return this->height * this->width * this->length;
        }

        // Destructor
        ~Box(){
            cout << "Deleted all the objects" << endl;
        }
};


int main(){
    Box b1(12.5, 13.6, 100.2);

    cout << "Area: " << b1.area() << endl;
    cout << "Volume: " << b1.volume() << endl;

    Box b2 = b1;

    return 0;
}