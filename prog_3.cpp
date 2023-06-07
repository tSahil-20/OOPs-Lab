#include<iostream>
using namespace std;

class DB;
class DM{
    private:
    float cm;
    float m;

    public:
    DM(){}
    DM(float cm, float m){
        this->cm = cm;
        this->m = m;
    }
    float getcm(){
        return cm;
    }

    float getm(){
        return m;
    }
    void display(){
        cout << cm << "cm and " << m <<"m";
    }

    friend DM add(DM a, DB b);
};

class DB{
    private:
    float feet; 
    float inch;

    public:
    DB(){}
    DB(float feet, float inch){
        this->feet = feet;
        this->inch = inch;
    }
    float getfeet(){
        return feet;
    }
    float getinch(){
        return inch;
    }
    friend DM add(DM a, DB b);

};

DM add(DM a, DB b){
    float newcm = a.getcm() + b.getfeet()*30.48;
    float newm = a.getm() + b.getinch()*0.0254;
    DM c(newcm, newm);
    return c;
}

int main(){
    
    DM a(10, 20);
    DB b(30, 40);
    DM sum = add(a, b);
    sum.display();

    cout << '\n';
    return 0;
}