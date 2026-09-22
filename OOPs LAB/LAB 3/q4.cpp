// Create a class Student with data members roll number ,name , mark in three subject 
// and create a member function to accept student details, calculate total and
// average mark and display student details.

#include <iostream>
#include <string>
using namespace std;
class Student{
    private :
        int roll_no;
        string name;
        int subject_1;
        int subject_2;
        int subject_3;
    public :
        void accept_student_detail(){
            cout << "Enter Name : ";
            getline(cin,name);
            cout << "Enter roll no : ";
            cin >> roll_no;
            cout << "Enter Subject 1 Mark : ";
            cin >> subject_1;
            cout << "Enter Subject 2 Mark : ";
            cin >> subject_2;
            cout << "Enter Subject 3 Mark : ";
            cin >> subject_3;
        }
        int total(){
            return subject_1+subject_2+subject_3;
        }
        float average(){
            return (subject_1+subject_2+subject_3)/3.0;
        }
        void display_student_detail(){
            cout << "Name : "<< name << endl;
            cout << "Roll no : "<< roll_no << endl;
            cout << "Subject 1 Mark : " << subject_1 << endl;
            cout << "Subject 2 Mark : " << subject_2 << endl;
            cout << "Subject 3 Mark : " << subject_3 << endl;
        }
};
int main(){
    Student s1;
    s1.accept_student_detail();
    cout << "Total : " << s1.total() << endl;
    cout << "Average : " << s1.average() << endl;
    s1.display_student_detail();
    return 0;
}