#include<iostream>
using namespace std;

class Shape{
    float side1,side2;
    public:
    Shape(){}
    float virtual area() = 0;
    float virtual perimeter() = 0;
    virtual ~Shape(){ cout<<"Destructor of Shape"<<endl; }
};

class Rectangle: public Shape{
    float side1, side2;
    public:
    Rectangle(){}
    Rectangle(float s1, float s2){
        side1 = s1;
        side2 = s2;
    }
    float area(){
        return side1*side2;
    }
    float perimeter(){
        return 2*(side1+side2);
    }
    ~Rectangle(){ cout<<"Destructor of Rectangle"<<endl; }
};

class Circle: public Shape{
    float rad;
    public:
    Circle(){}
    Circle(float r){
        rad = r;
    }
    float area(){
        return 2*rad*rad*3.141;
    }
    float perimeter(){
        return 2*rad*3.141;
    }
    ~Circle(){ cout<<"Destructor of Circle"<<endl; }
};

int main(){
    
    Shape *ptr1 = new Rectangle(10,5);
    Shape *ptr2 = new Circle(5);

    cout<<"Rectangle Area :" << ptr1->area()<<endl;
    cout<<"Rectangle Perimeter :" << ptr1->perimeter()<<endl;

    cout<<"Circle Area :" << ptr2->area()<<endl;
    cout<<"Circle Perimeter :" << ptr2->perimeter()<<endl;

    delete ptr1;
    delete ptr2;
    cout << '\n';
    return 0;
}