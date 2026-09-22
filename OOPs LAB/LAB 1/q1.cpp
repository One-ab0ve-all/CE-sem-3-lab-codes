// WAP to calculate the radius and area of circle
#include<iostream>
using namespace std;
int main(){
    int r;
    cout << "Enter the radius of the circle : ";
    cin >> r;
    cout << "Area = " << r*3.14*r;
    cout << "\nPerimeter = " << 2*3.14*r;
    return 0;
}