//
// Created by 12san on 05-01-2024.
//
#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("File name is %s\n",__FILE__);
    printf("Today's date is %s\n",__DATE__);
    printf("line no is %d\n",__LINE__);
    printf("ANSI: %d\n",__STDC__);
    return 0;
}