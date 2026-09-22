// WAP in C++ to create a structure named Student and 
// input the student's name, roll number, and marks.

#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int roll_no;
    int mark;
};

int main(){
    Student s1;
    cout << "Enter the details of student : " << endl;
    cout << "Name : ";
    getline(cin,s1.name);
    cout << "Roll No : ";
    cin >> s1.roll_no;
    cout << "Mark : ";
    cin >> s1.mark;
    return 0;
}