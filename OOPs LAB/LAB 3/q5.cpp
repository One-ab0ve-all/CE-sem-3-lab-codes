// Create a class Complex with data members real and imaginary
// and implement member function to read a complex number, display , add
// and subtract a complex number.

#include <iostream>
using namespace std;
class Complex{
    private :
        int real;
        int imaginary;
    public :
        void read_complex_no(){
            cout << "Enter Real Part : ";
            cin >> real;
            cout << "Enter Imaginary Part : ";
            cin >> imaginary;
        }
        void display(){
            if(imaginary < 0){
                cout << real << imaginary << "i" << endl;
            }
            else{
               cout << real << "+" << imaginary << "i" << endl; 
            }
        }
        Complex  add(Complex y){
            Complex z;
            z.real = this->real + y.real;
            z.imaginary = this->imaginary + y.imaginary;
            return z;          
        }
        Complex  subtract(Complex y){
            Complex z;
            z.real = this->real - y.real;
            z.imaginary = this->imaginary - y.imaginary;
            return z;          
        }
};
    int main(){
    Complex c1,c2,c3;
    c1.read_complex_no();
    c2.read_complex_no();
    c3 = c1.add(c2);
    cout << "Addition =" ;
    c3.display();
    c3 = c1.subtract(c2);
    cout << "Subtraction =";
    c3.display();
    return 0;
}