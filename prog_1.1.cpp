#include <iostream>
#include <string>
using namespace std;

class Room{
    private:
        int length,breadth;
    public:
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
        void setLenBre(int len, int bre){
            length = len;
            breadth = bre;
        }
};




int main() {
    int n,l,b,area=0,peri=0;
    cout << "\n\nEnter number of rooms: ";
    cin >> n;
    Room r[n];
    for(int i=0;i<n;i++){
        cout <<"Enter details of room(length and breathe in m): "<<i+1 <<"\n";
        cout <<"Length: ";
        cin >> l;
        cout <<"Breathe: ";
        cin >> b;
        r[i].setLenBre(l,b);
    }
    cout <<"\nArea and Perimeter of Each room is";
    for(int i=0;i<n;i++){
        cout <<"\nRoom " <<i+1;
        cout <<"\nArea: "<<r[i].area();
        cout <<"\nPerimeter: "<<r[i].perimeter();
    }
    cout <<"\nSum of Area and Perimeter of all the rooms is: ";
    for(int i=0;i<n;i++){
        area = area + r[i].area();
        peri = peri + r[i].perimeter();
    }
    cout <<"\nTotal Area: "<<area;
    cout <<"\nTotal Perimeter: "<<peri <<"\n\n\n\n\n";
    return 0;
}


















