#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define SIZE 10
char s[SIZE];
int top=-1;
bool isempty(){
    if(top == -1){
        return true;
    }
    return false;
}
void push(char ch){
    s[++top]=ch;
}
char pop(){
    if(isempty()){
        printf("Stack is empty");
    }
    return s[top--];
}
int prior(char op){
    if(op == '^'){
        return 3;
    }
    else if(op=='/' || op=='*'){
        return 2;
    }
    else if(op=='+'||op=='-'){
        return 1;
    }
}
void infixtopostfix(char exp[], char postfix[]){
    int k=0;
    for(int i=0;i<strlen(exp);i++){
        if(exp[i]=='('){
            push(exp[i]);
        }
        else if(isalnum(exp[i])){
            postfix[k++]=exp[i];
        }
        else if(exp[i]==')'){
            while(exp[top]!='('){
                postfix[k++]=pop();
            }
        }
        else{
            while(prior(exp[top])>=prior(exp[i])&&!isempty()){
                postfix[k++]=pop();
            }
            push(exp[i]);
        }
        while(!isempty()){
            postfix[k++]=pop();
        }
    }
}
int main(){
    char infix[10],postfix[10];
    printf("Please enter the infix expression\n");
    scanf("%s",infix);
    infixtopostfix(infix,postfix);
    printf("Postfix Expression is %s",postfix);
    return 0;
}