#include<iostream>
#include<math.h>
using namespace std;

class Triangle{
    int height=0, base=0;
    float side;

    public:
    Triangle(){ // Default constructor
        //cout << "Inside Default constructor\n";
    } 

    Triangle(int h, int b){ // Argument constructor 
        height = h;
        base = b;
    }
    float area(){
        return (0.5*height*base);
    }
    float perimeter(){
        side = pow((pow(height,2) + pow(base,2)),0.5);
        return (side + height + base);
    }
    ~Triangle(){ // Default destructor
        //cout << "Inside Default destructor\n";
    }
};

int main(){
    //cout << "\nInside main fn\n";
    Triangle t;
    t = Triangle(10,50);
    cout<< "\narea = " <<t.area();
    cout<< "\nperimeter = " <<t.perimeter();
    //cout << "\nEnd of main fn\n";


    cout << "\n";
}
