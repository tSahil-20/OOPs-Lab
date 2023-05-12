#include<iostream>
using namespace std;

class Complex{
    float real,imaginary;

    public:
    Complex(){} // Default constructor
    
    Complex(float r, float i){ // Argument constructor
        real = r;
        imaginary = i;
    }
    void add(Complex x, Complex y){
        real = x.real + y.real;
        imaginary = x.imaginary + y.imaginary;
        cout << "\nSum :" << real << " + " << imaginary << "i\n";
    }
    void multiply(Complex x, Complex y){
        real = (x.real * y.real) - (x.imaginary * y.imaginary);
        imaginary = (x.real * y.imaginary) + (y.real * x.imaginary);
        cout << "\nMultiply :" << real << " + " << imaginary << "i\n";
    }
    
    void diff(Complex x, Complex y){
    real = x.real - y.real;
    imaginary = x.imaginary - y.imaginary;
    cout << "\nDiffrence :" << real << " + " << imaginary << "i\n";
    }

};

int main(){
    Complex x,y,z;
    x = Complex(5,3);
    y = Complex(7,1);
    z.add(x,y);
    z.multiply(x,y);
    z.diff(x,y);
    return 0;
}
