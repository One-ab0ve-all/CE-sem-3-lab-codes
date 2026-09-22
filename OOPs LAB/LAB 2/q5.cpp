// WAP in C++ to input a square matrix and find the 
// difference between the sums of its diagonals.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter Order of Square Matrix : ";
    cin >> n;
    int arr[n][n];
    cout << "Enter element in array :" << endl;
    for(int i=0; i<n ; i++){
        for(int j=0; j<n ; j++){
            cout << "arr[" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    }
    int sum_prime_dia = 0;
    int sum_second_dia = 0;
    for(int i=0; i<n ; i++){
        sum_prime_dia += arr[i][i];
        sum_second_dia += arr[i][n-1-i];
    }
    cout <<  "Difference between the sums of its diagonals : "
         <<  sum_prime_dia - sum_second_dia; 
    return 0;
}