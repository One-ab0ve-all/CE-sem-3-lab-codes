// WAP to check whether a given number is palindrome.

#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter your Number : ";
    cin >> num;
    int orginal = num;
    int reverse = 0;
    while(num != 0){
        reverse = num % 10  + reverse * 10;
        num /= 10;
    }
    if(reverse == orginal){
        cout << "Your number is palindrome";
    }
    else {
        cout << "Your number is not palindrome";
    }
    return 0;
}