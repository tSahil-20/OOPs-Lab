// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

class Student{
    private:
        int roll,marks;
        string name;
        
    public:
        float avg(){
            return marks/5;
        }
        void setDetails(int r,int m,string n){
            roll = r;
            marks = m;
            name = n;
        }
        int getRoll(){
            return roll;
        }
        int getMarks(){
            return marks;
        }
        string getName(){
            return name;
        }
};

int main() {
    // Write C++ code here
    int r,m,n;
    string name;
    cout << "Enter number of Students\n";
    cin >> n;
    Student s[n];
   // int allMarks[n];
    
    for(int i=0;i<n;i++){
        cout <<"Enter details of student: "<<i+1 <<"\n";
        
        cout <<"Roll number: ";
        cin >> r;
        cout <<"Name: ";
        cin >> name;
        cout <<"Marks: ";
        cin >> m;
        
        s[i].setDetails(r,m,name);
    }
    cout <<"\nDetails of Each student: \n";

    for(int i=0;i<n;i++){
        cout <<"\n\nStudent: "<<i+1 <<"\n";
        cout <<"\nName: "<<s[i].getName();
        cout <<"\nRoll no: "<<s[i].getRoll();
        cout <<"\nmarks: "<<s[i].getMarks();
        cout <<"\nAvg: "<<s[i].avg();
    }
    
    int topper_index=0;
    int topper = 0;
    topper = s[0].getMarks();
    for(int i=0;i<n-1;i++){
        if(topper<s[i+1].getMarks()){
            topper = s[i+1].getMarks();
            topper_index = i+1;
        }
    }
    cout <<"\n\nTopper marks is: "<<topper;
    cout <<"\n\nTopper name is: "<<s[topper_index].getName();
    

    return 0;
}