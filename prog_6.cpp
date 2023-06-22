#include<iostream>
using namespace std;

class MathOperation{

    public:
    MathOperation(){}

    int addition(int a, int b){ return  a+b; }    
    float addition(float a, float b){ return  a+b; }
    float addition(int a, float b){ return  a+b; }
    float addition(float a, int b){ return  a+b; }

    int subtraction(int a, int b){ return a-b; }
    float subtraction(float a, float b){ return a-b; }
    float subtraction(int a, float b){ return a-b; }
    float subtraction(float a, int b){ return a-b; }

    int multiplication(int a, int b){ return a*b; }
    float multiplication(float a, float b){ return a*b; }
    float multiplication(int a, float b){ return a*b; }
    float multiplication(float a, int b){ return a*b; }

    int division(int a, int b){ return a/b; }
    float division(float a, float b){ return a/b; }
    float division(int a, float b){ return a/b; }
    float division(float a, int b){ return a/b; }
};

int main(){
    
    MathOperation m;

    cout<<endl << "integer 10 and integer 20: "<<endl;
    cout<<"Addition: "<< m.addition(10, 20)<<endl;
    cout<<"Subtration: "<< m.subtraction(10, 20)<<endl;
    cout<<"Multilpication : "<< m.multiplication(10, 20)<<endl;
    cout<<"Division : "<< m.division(10, 20)<<endl;

    cout<<endl << "float 1.5 and float 2.5: "<<endl;
    cout<<"Addition: "<< m.addition(1.5f, 2.5f)<<endl;
    cout<<"Subtration: "<< m.subtraction(1.5f, 2.5f)<<endl;
    cout<<"Multilpication : "<< m.multiplication(1.5f, 2.5f)<<endl;
    cout<<"Division : "<< m.division(1.5f, 2.5f)<<endl;

    cout<<endl << "float 1.5 and integer 2: "<<endl;
    cout<<"Addition: "<< m.addition(1.5f, 2)<<endl;
    cout<<"Subtration: "<< m.subtraction(1.5f, 2)<<endl;
    cout<<"Multilpication : "<< m.multiplication(1.5f, 2)<<endl;
    cout<<"Division : "<< m.division(1.5f, 2)<<endl;

    cout<<endl << "integer 5 and float 1.5: "<<endl;
    cout<<"Addition: "<< m.addition(5, 1.5f)<<endl;
    cout<<"Subtration: "<< m.subtraction(5, 1.5f)<<endl;
    cout<<"Multilpication : "<< m.multiplication(5, 1.5f)<<endl;
    cout<<"Division : "<< m.division(5, 1.5f)<<endl;

    cout << '\n';
    return 0;
}