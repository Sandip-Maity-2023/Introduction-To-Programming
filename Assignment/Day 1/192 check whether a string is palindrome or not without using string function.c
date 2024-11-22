//
// Created by 12san on 08-08-2024.
//
#include<stdio.h>

int  isPalindrome(char s[]){
    int start=0,end=0;
    while(s[end] !='\0'){   //find the length of a string
        end++;
    }
    end--;
    while(start<end){
        if(s[start] != s[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main(){
    char s[50];
    printf("Enter the string:\n");
    gets(s);
    if(isPalindrome(s)){
        printf("It is a palindrome.\n");
    }else{
        printf("It's not palindrome.\n");
    }
    return 0;
}