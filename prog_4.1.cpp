#include<iostream>
using namespace std;

class Distance{
    private:
    int feet, inch;

    public:
    Distance(){} 
    Distance(int f, int i){
        feet = f;
        inch = i;
    }

    Distance(Distance &obj){
        cout << "Calling Copy Constructor!" << endl;
        feet = obj.feet;
        inch = obj.inch;
        // result(obj.feet_add, obj.inch_add, obj.feet_sub, obj.inch_sub);
        result();
    }

// We are using reference (&a) in add and subtract function bcoz if we pass it from main it justs copy everything i.e (from main) Distance x = Distance a (from class)

    void add(Distance a, Distance b){  
        feet = a.feet + b.feet;
        inch = a.inch + b.inch;
    }

    void subtract(Distance a, Distance b){
        feet = a.feet - b.feet;
        inch = a.inch - b.inch;
    }
    void result(){
        // cout << this->feet<< "ft " << this-> inch << "inch" << endl;
    }

};

int main(){
    
    Distance x,y,a,s;
    x = Distance(2,5);
    y = Distance(4,6);

    cout << "Addition :";
    a.add(x, y);
    Distance p = a;

    cout << "Substraction :";
    s.subtract(x, y);
    Distance q = s;


    
    cout << '\n';
    return 0;
}