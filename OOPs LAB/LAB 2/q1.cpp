// WAP in c++ to input an array of element and find the secod maximum 
// element of the array 

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector <int> arr;
    cout << "Enter the element of array : \n";
    int ele;
    for(int i=0;i<n;i++){
        cout << "arr[" << i << "]: ";
        cin >> ele;
        arr.push_back(ele);
    }
    int first_max = INT_MIN;
    int second_max = INT_MIN;
    for(int i = 0; i<n ; i++){
        if(arr[i] > first_max){
            second_max = first_max;
            first_max = arr[i];
        }
        else if(arr[i] > second_max){
            second_max = arr[i];
        }
    }
    cout << "Second Maximum element : " << second_max;
    return 0;
}