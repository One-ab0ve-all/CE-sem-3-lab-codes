// Write a program to implement a sparse matrix.

#include <stdio.h>
int main(){
    int m,n;
    printf("Enter the row : ");
    scanf("%d",&m);
    printf("Enter the column : ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the element : \n");
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n ;j++){
            printf("arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your Matrix is : \n");
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n ;j++){
            printf("%d     ",arr[i][j]);
        }
        printf("\n");
    }
    int count = 0;
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n ;j++){
            if(arr[i][j]!=0){
                count++;
            }
        }
    }
    int sparse[3][count];
    int l = 0;
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n ;j++){
            if(arr[i][j]!=0){
                sparse[0][l]=i+1;
                sparse[1][l]=j+1;
                sparse[2][l++]=arr[i][j];
            }
        }
    }
    printf("Rows cloumn value\n");
    for(int i = 0; i<l ;i++){
        for(int j = 0; j<3 ;j++){
            printf("%d     ",sparse[j][i]);
        }
        printf("\n");
    }
    return 0;
}