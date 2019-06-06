/*
 *
 * Classes combines data representation and methods for manipulating those data into one package. These are called the members of the class.
 * Classes define a blueprint for an object.
 * 
 */


#include<iostream>
using namespace std;

class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
      double area;
};

void out_area(){
    Box b1;
    //defining data
    b1.length = 20;
    b1.breadth = 30;
    b1.height = 40;
    b1.area = 2*( (b1.breadth*b1.length) + (b1.height * b1.length) + (b1.height* b1.breadth) );
    cout << "Area is: " << b1.area << endl;

}

/*
 *
 * Member function has its definition inside the class.
 * You can define the same function outside the class using the scope resolution operator(::) - double Box::area().
 * 
 */

class Cube{
    public:
    double edge;
    double area(){
        double a;
        a = 6 * edge * edge;
        cout << "Area: " << a;
        return a;
    }
};

void in_area(){
    Cube c1;
    c1.edge = 8;
    c1.area();
}



int main(){
    cout << "Surface area without member function: ";
    out_area();

    cout << "\nSurface area with member function: ";
    in_area();
    cout << endl;
    return 0;
}