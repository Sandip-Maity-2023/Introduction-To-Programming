//
// Created by 12san on 13-07-2024.
//
#include<stdio.h>
#include<stdbool.h>
bool isValid(char *s){
    char stack[100];
    int top=-1;
    for(int i=0;s[i] !='\0';i++){
        char c=s[i];
        if(c=='(' || c=='{' ||c=='['){
            stack[++top]=c;
        }else{
            if(top==-1)
                return false;
            char topChar=stack[top--];
            if((c==')' && topChar !='(') ||
               (c=='}' && topChar !='{') ||
               (c==']' && topChar !='[')) {
                return false;
            }
            }
        }
    return top==-1;
    }
    int main(){
    printf("%s\n",isValid("()") ?"true":"false");
    printf("%s\n",isValid("(){}[]") ?"true":"false");
    printf("%s\n",isValid("(]") ? "true":"false");
    return 0;
}