#include <iostream>
#include <string>
#define size 70
using namespace std;

class Student{
private:
    int roll, marks;
    string name;

public:
    float avg(){
        return marks / 5;
    }
    void setDetails(int r, int m, string n){
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

int main(){
    // Write C++ code here
    int r, m, n, flag = 0, i = 0, topper_index = 0, topper = 0,cond=1;
    string name;
    Student s[size];
    while (cond){
        cout <<"\n1.Enter Details.\n2.Get Details of Each student.\n3.To get topper of class.\n4.To exit the code.\n";
        cout <<"Enter Choice: ";
        cin >> flag;
        
        switch (flag){
        case 1: // Enter details
            cout << "\nEnter details of student: " << i + 1 << "\n";
            cout << "Roll number: ";
            cin >> r;
            cout << "Name: ";
            cin >> name;
            cout << "Marks: ";
            cin >> m;
            s[i].setDetails(r, m, name);
            i++;
            break;

        case 2: // Details of Each student
            if (i == 0){
                cout << "\nNo details are stored \n";
                break;
            }
            else{
                cout << "\nDetails of Each student: \n";
                for (int temp = 0; temp < i; temp++){
                    cout << "\n\nStudent: " << temp + 1 << "\n";
                    cout << "\nName: " << s[temp].getName();
                    cout << "\nRoll no: " << s[temp].getRoll();
                    cout << "\nmarks: " << s[temp].getMarks();
                    cout << "\nAvg: " << s[temp].avg();
                }
            }
            break;

        case 3: // Topper of class
            if (i == 0){
                cout << "\nNo details are stored \n";
                break;
            }
            else{

                for (int temp = 0; temp < i - 1; temp++){
                    topper = s[temp].getMarks();
                    if ( topper < s[temp + 1].getMarks() ){
                        topper = s[temp + 1].getMarks();
                        topper_index = temp + 1;
                    }
                }
            }
            cout << "\n\nTopper marks is: " << topper;
            cout << "\n\nTopper name is: " << s[topper_index].getName();
            break;
        
        case 4:
            cond = 0;
            cout << "\nBye Bro!!\n\n";
            break;

        default:
            cout << "\nEnter Correct Option.\n";
            break;
        }
    }

    return 0;
}