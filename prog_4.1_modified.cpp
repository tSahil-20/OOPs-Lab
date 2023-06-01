#include<iostream>
using namespace std;

class Distance{
    float feet, inch;
    public:
    Distance(){}
    Distance(float f, float i){
        feet = f;
        inch = i;
    }
    Distance(Distance &ref){
        cout << "Calling Copy constuctor"<<endl;
        feet = ref.feet;
        inch = ref.inch;
        result(feet, inch);
    }
    void sum(Distance &p, Distance &q){
        feet = p.feet + q.feet;
        inch = p.inch + q.inch;
    }
    void result(float f, float i){
        cout <<f<<" feet and "<<i<<" inch"<<endl;
    }
    
};

int main(){

    Distance p(10,20), q(30,40), r;
    r.sum(p,q);
    Distance s = r;

    cout << '\n';
    return 0;
}