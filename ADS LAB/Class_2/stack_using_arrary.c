// Write a c program to create a stack using array and perfrom (i)push operation
//(ii)pop operation.

#include <stdio.h>
#define MAX 5
int stack[MAX];
int Top = -1;
void push(){
    int Value; 
    if(Top == MAX-1){
        printf("Stack is overflow\n");
        return;
    }
    printf("Enter the value you want to push : ");
    scanf("%d",&Value);
    Top++;
    stack[Top]=Value;
}
void pop(){
    if(Top == -1){
        printf("Stack is Underflow.\n");
        return;
    }
    printf("%d is pop out\n",stack[Top]);
    Top--;
}
int main(){
    int choice;
    printf("Stack interface.");
    printf("\n1.Push\n2.Pop\n3.Exit\n");
    while(1){
        printf("Enter the Number for operation you want perfrom : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                push();
                break;
            case 2 :
                pop();
                break;
            case 3 : 
                return 0;
        }
    }
    return 0;
}