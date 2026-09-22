// WAP in c++ to enter array of element using Bubble sort.

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the Number of element : ";
    cin >> n;
    vector <int> arr(n);
    cout << "Enter the elements : \n";
    for(int i=0; i<n ; i++){
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
    }
    for(int i = n-1; i > 0 ; i--){
        for(int j=0;j < i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Ascending Order : ";
    for(int i=0; i<n ;i++){
        cout << arr[i] << ",";
    }
    return 0;
}