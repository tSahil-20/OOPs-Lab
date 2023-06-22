#include<iostream>
using namespace std;

class Shape{
    float side1,side2;
    public:
    Shape(){}
    // Shape(int s1, int s2 = 0){
    //     side1 = s1;
    //     side2 = s2;
    // }
    float virtual area(){
        // cout<<"Base class area"<<endl;
        // if(side2 == 0){
        //     return side1*side1;
        // } else{
        // return 0.5*side1*side2;  
        // }
        return 0;
    }
    float virtual perimeter(){
        // cout<<"Base class perimeter"<<endl;
        // if(side2 ==0){ return 4*(side1); }
        // float hypo = 1.414*((side1*side1) + (side2*side2));
        // return side1 + side2 + hypo;
        return 0;
    }
};

class Triangle: public Shape{
    float side1, side2;
    public:
    Triangle(){}
    Triangle(int s1, int s2){
        side1 = s1;
        side2 = s2;
    }
    float area(){
        cout<<"Triangle class area"<<endl;
        return 0.5*side1*side2;
    }
    float perimeter(){
        cout<<"Triangle class perimeter"<<endl;
        float hypo = 1.414*((side1*side1) + (side2*side2));
        return side1 + side2 + hypo;
    }
};

class Square: public Shape{
    float side1;
    public:
    Square(){}
    Square(int s1){
        side1 = s1;
    }
    float area(){
        cout<<"Square class area"<<endl;
        return side1*side1;
    }
    float perimeter(){
        cout<<"Square class perimeter"<<endl;
        return 4*side1;
    }
};

int main(){
    
    Square s(10);
    Triangle t(10,10);
    Shape *ptr1 = &s;
    Shape *ptr2 = &t;

    cout<<"Area :" << ptr1->area()<<endl;
    cout<<"Perimeter :" << ptr1->perimeter()<<endl;

    cout<<"Area :" << ptr2->area()<<endl;
    cout<<"Perimeter :" << ptr2->perimeter()<<endl;

    cout<<endl;
    return 0;
}