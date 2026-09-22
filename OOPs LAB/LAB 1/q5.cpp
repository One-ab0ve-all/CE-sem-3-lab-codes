// check a string is palindrome or not 
# include <iostream>
# include <string>
using namespace std;
int main(){
    string name;
    cout << "Enter a String : ";
    getline(cin,name);
    string reverse;
    for(int i = name.length()-1; i >= 0 ; i--){
        reverse += name[i];
    }
    if(name == reverse){
        cout << "Your String is Palindrome";
    }
    else{
        cout << "Your string is Not Palindrome";
    }
    return 0;
}