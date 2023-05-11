// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Circle{
    private:
        int radius;
    public:
        public:
        float area(){
            return 2*(3.14)*radius*radius;
        }
        float perimeter(){
            return 2*3.14*radius;
        }
        void setRadius(int r){
            radius = r;
        }
};

int main() {
    // Write C++ code here
    Circle c;
    c.setRadius(5);
    cout << "\nArea of circle: "<< c.area();
    cout << "\nPerimeter of circle: "<< c.perimeter() <<"\n\n";

    return 0;
}