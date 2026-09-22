// Create a class Student with data members roll number , marks, name 
// and create a member function to accept student details and display
// student details

#include <iostream>
#include <string>
using namespace std;
class student{
    private :
        int roll_no;
        string name;
        int mark;
    public :
        void accept_student_detail(){
            cout << "Enter Name : ";
            getline(cin,name);
            cout << "Enter roll no : ";
            cin >> roll_no;
            cout << "Enter Mark : ";
            cin >> mark;
        }
        void display(){
            cout << "Name : "<< name;
            cout << "\nRoll no : " << roll_no;
            cout << "\nMark : " << mark;           
        }
};
int main(){
    student s1;
    s1.accept_student_detail();
    s1.display();
    return 0;
}