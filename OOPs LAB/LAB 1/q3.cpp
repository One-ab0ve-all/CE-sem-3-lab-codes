// WAP to check whether given number is armstrong number.

#include <iostream>
using namespace std;
int fact(int x,int y){
    int result = 1;
    for(int i=0;i<y;i++){
        result *= x; 
    }
    return result;
}
int main(){
    int num;
    cout << "Enter your Number : ";
    cin >> num;
    int orginal = num;
    int orginal2 = num;
    int count = 0;
    while(num != 0){
        count++;
        num /= 10;
    }
    int armst = 0;
    while(orginal != 0){
        armst += fact((orginal%10),count) ;
        orginal /= 10;
    }
    if(armst == orginal2){
        cout << "Your Number is a Armstrong Number.";
    }
    else{
        cout << "Your Number is Not a Armstrong Number.";
    }
    return 0;
} 