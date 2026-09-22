// WAP in c++ to input a string and find the no of 
// vowels in it.

# include <iostream>
# include <string>
using namespace std;
int main(){
    string name;
    cout << "Enter a string : ";
    getline(cin,name);
    int count = 0;
    for(int i=0 ; i < name.length() ; i++){
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || 
            name[i] == 'o' || name[i] == 'u'){
                count++;
        }
        else if(name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || 
            name[i] == 'O' || name[i] == 'U'){
                count++;
        }
    }
    cout << "No of Vowels : " << count;
    return 0;
}