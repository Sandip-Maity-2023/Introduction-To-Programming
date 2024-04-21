//
// Created by 12san on 21-04-2024.
//
#include<stdio.h>
int main(){
        char ch[100];
    printf("Enter the text:");
    scanf("%[^\n]",&ch);
    int i=0;
    int upper=0,lower=0;
    while(ch[i] !='\0'){        //In memory, this string is stored as 'H' 'e' 'l' 'l' 'o' '\0'.
                             // Here, '\0' marks the end of the string.
        if(ch[i]>='A' && ch[i]<='Z')
            upper++;       //When you create a string in C, it's actually an array of characters terminated by '\0'.
        if(ch[i]>='a' && ch[i]<='z')
             lower++;
        i++;          // This null character indicates to the compiler that the string ends at that point.
                       // So, when functions like strlen() encounter '\0', they stop counting characters,
                      // as they interpret it as the end of the string.
    }
    printf("Upper letters:%d\n",upper);
    printf("lower letter: %d\n",lower);
    return (0);
}
