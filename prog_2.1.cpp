#include<iostream>
using namespace std;

// In OOP destructor is called afted main function ends.

class NewClass{
    public:
    NewClass(){ // Constructor
        cout << "Inside Constructor\n";
    }
    ~NewClass(){ // Destructor
        cout << "Inside Destructor\n";
    }
};

int main(){
    cout << "Inside main function.\n";
    NewClass n;
    cout << "Back to main function.\n";
    return 0;
}
