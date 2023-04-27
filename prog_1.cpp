#include <iostream>
#include <string>
using namespace std;

class Room{
    private:
        int length,breathe;
    public:
        int area(){
            return length*breathe;
        }
        int perimeter(){
            return 2*(length+breathe);
        }
        void setLenBre(int len, int bre){
            length = len;
            breathe = bre;
        }
};




int main() {
    int n,l,b,area=0,peri=0;
    cout << "Enter number of rooms\n";
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
    cout <<"\nArea and Perimeter of all the rooms is";
    for(int i=0;i<n;i++){
        area = area + r[i].area();
        peri = peri + r[i].perimeter();
    }
    cout <<"\nTotal Area: "<<area;
    cout <<"\nTotal Perimeter: "<<peri;
    return 0;
}


















