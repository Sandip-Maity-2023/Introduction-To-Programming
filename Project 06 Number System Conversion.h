//
// Created by 12san on 27-07-2024.
//

#ifndef INTRODUCTION_TO_PROGRAMMING_PROJECT_06_NUMBER_SYSTEM_CONVERSION_H
#define INTRODUCTION_TO_PROGRAMMING_PROJECT_06_NUMBER_SYSTEM_CONVERSION_H

#endif //INTRODUCTION_TO_PROGRAMMING_PROJECT_06_NUMBER_SYSTEM_CONVERSION_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//function to reverse a string
void str_rev(char* str){          //character to pointer
    int i=0;
    int j=strlen(str)-1;
    while(i<j){
        char c = str[i];
        str[i]=str[j];
        str[j]=c;
        i++;
        j--;
    }
}

//function to convert decimal to binary and return as a string
char* decimal_to_binary(int decimal){
    int i=0;

    char* binary=(char*) malloc(33);  //memory allocation for 32 bit binary string

    while(decimal){
        binary[i++]='0'+(decimal & 1);  //AND operation done ,decimal is in binary
        decimal>>=1;   //divide by 2
    }
    binary[i]='\0';  /* check last all digit operation is successful or not */
    str_rev(binary);
    return binary;
 }

//function to change binary to decimal
int binaryToDecimal(char binary[]){
 char decimal=0;
 int length=strlen(binary);
 for(int i=0;i<length;i++){
 decimal=decimal*2 + (binary[i]-'0');
 }
 return decimal;
}

//function to convert decimal to octal
char* decimalToOctal(int decimal){
    char* octal=(char*)malloc(12);  //allocates space for octal number
    if(octal==NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }
    //convert decimal to octal
    sprintf(octal,"%o",decimal);
    return octal;
}


//function to convert octal to decimal and return as an integer
int OctalToDecimal(char octal[]){
    int decimal=0;
    int length=strlen(octal);
    for(int i=0;i<length;i++){
        decimal=decimal*8+(octal[i]-'0');
    }
    return decimal;
}

//function to convert hexadecimal to binary and return as a string
char* hexadecimalToBinary(char hex[]){
    unsigned int hexNum;
    sscanf(hex,"%x",&hexNum);
    //string to store binary number
char binary[33]="";
//converting to hexadecimal
int i=0;
while(hexNum){
    binary[i++]='0'+hexNum%2;
    hexNum/=2;
}
binary[i]='\0';
    str_rev(binary);
    return strdup(binary);
}

//function to convert

