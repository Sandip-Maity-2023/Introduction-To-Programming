//
// Created by 12san on 26-04-2024.
//
#include<stdio.h>
#include<string.h>
void reverse(char str1[],int index,int size){
    char temp;
    temp=str1[index];
    str1[index]=str1[size-index];
    str1[size-index]=temp;
    if(index==size/2)
    {
        return;
    }
    reverse(str1,index+1,size);
}
int main(){
    int size;
    char str1[100];
    printf("Enter any word to see the reverse result:\n");
    scanf("%s",str1);
    size=strlen(str1);
    reverse(str1,0,size-1);
    printf("The string after reversing is:%s",str1);
}