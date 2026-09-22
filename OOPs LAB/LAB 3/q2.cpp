// Create a class Rectangle with data members length and breadth
// and implement member function area and perimeter.

#include <iostream>
using namespace std;
class Rectangle{
    private :
        int length;
        int breadth;
    public :
        void accept_rectangle_detail(){
            cout << "Enter Length : ";
            cin >> length;
            cout << "Enter Breadth : ";
            cin >> breadth;
        }
        void area(){
            cout << "Area = "<< length*breadth << endl;          
        }
        void perimeter(){
            cout << "primeter = "<< 2*(length+breadth) << endl;          
        }
};
int main(){
    Rectangle r1;
    r1.accept_rectangle_detail();
    r1.area();
    r1.perimeter();
    return 0;
}