//
// Created by 12san on 25-08-2024.
//
#include<stdio.h>
#include<ctype.h>

int main(){
    char str[100];
    int vowels=0;
    int consonants=0;

    printf("Enter the word:\n");
    //scanf("%s",&str[100]);
    fgets(str,sizeof(str),stdin);

    for(int i=0;str[i] !='\0';i++){

        char ch=tolower(str[i]);

        if(isalpha(ch)){
            switch(ch) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowels++;
                    break;
                default:
                    consonants++;
                    break;
            }
            }
        }
    printf(" %d vowels &  %d consonants",vowels,consonants);
    return 0;
    }