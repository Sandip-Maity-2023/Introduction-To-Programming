//
// Created by 12san on 25-08-2024.
//
#include<stdio.h>
void concatenate(char *str1,char *str2){
    while(*str1 != '\0'){
        *str1++;
    }
    while(*str2 !='\0'){
        *str1=*str2;
        *str1++;
        *str2++;
    }
    *str1='\0';
}

int compare(char *str1,char *str2){
    while(*str1 !='\0' && *str2 !='\0'){
        if(*str1 != *str2){
            return (*str1 - *str2);
        }
        str1++;
        str2++;
    }
    if(*str1=='\0' && *str2=='\0'){
        return 0;
    }else{
        return (*str1-*str2);
    }
}

int main(){
    char str1[100],str2[100];
    int choice,result;
    printf("Enter 1st string:\n");
    gets(str1);
    printf("Enter 2nd string:\n");
    gets(str2);
    printf("Choose the option:\n");
    printf("1. Concatenate strings\n");
    printf("2. Compare strings\n");
    scanf("%d",&choice);
    if(choice==1){
        concatenate(str1,str2);
        printf("Concatenated strings:%s\n",str1);
    }else if(choice==2){
        result= compare(str1,str2);
        if(result==0){
            printf("The strings are equal.\n");
        }else if(result>0){
            printf("The first string is greater than the second string.\n");
        }else {
            printf("The string is less than the second string.\n");
        }
    }else{
        printf("Invalid choice.\n");
    }
    return 0;
}