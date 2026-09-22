// Write a C program that uses stack operation to perform following.
// (i) Converting infix epression to postfix expression.

#include <stdio.h>
#define Max 30
char stack[Max];
int top = -1;
void push(char x){
    if(top == Max -1){
        printf("Stack is overflow.");
        return;
    }
    top++;
    stack[top] = x;
}
void pop(){
    if(top == -1){
        printf("Stack is underflow.");
        return;
    }
    if(stack[top] == '('){
        top--;
        return;
    }
    printf("%c",stack[top]);
    top--;
}
int priority(char y){
    if( y == '^' ){
        return 3;
    }
    if( y == '*' ||  y == '/'){
        return 2;
    }
    if( y == '+' || y == '-'){
        return 1;
    }
    return 0;
}
int main(){
    char infix[30];
    printf("Enter your Expression : ");
    scanf("%s",infix);
    int i=0;
    while(infix[i] != '\0'){
        if(infix[i] == '('){
            push(infix[i]);
            i++;
            continue;
        }
        if(infix[i] == ')'){
            while(stack[top] != '('){
                pop();
            }
            pop();
            i++;
            continue;
        }
        if(priority(infix[i]) == 0){
            printf("%c",infix[i]);
            i++;
        }
        else if(top == -1){
            push(infix[i]);
            i++;
        }
        else if(priority(stack[top]) < priority(infix[i]) || priority(infix[i]) == 3){
            push(infix[i]);
            i++;
        }
        else{
            pop();
        }
    }
    while(top != -1){
        pop();
    }
    return 0;
}