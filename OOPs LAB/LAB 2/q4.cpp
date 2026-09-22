// WAP in C++ to create a structure named 
// Complex and use it to add two complex numbers.

#include <iostream>
using namespace std;

struct Complex{
    int real;
    int imag;
};

int main(){
    Complex c1;
    cout << "Enter 1st Complex real and imaginary Part : ";
    cin >> c1.real >> c1.imag;
    Complex c2;
    cout << "Enter 2nd Complex real and imaginary Part : ";
    cin >> c2.real >> c2.imag;
    Complex c3 = {c1.real + c2.real , c1.imag + c2.imag};
    cout << "Addition = ";
    cout << c3.real << "+" << c3.imag << "i";
    return 0;
}