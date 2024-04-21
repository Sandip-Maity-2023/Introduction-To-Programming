#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char line[61];
    int n,lower_count=0,upper_count=0;
    printf("Enter the text mixing the uppercase and lowercase letters:\n");
    scanf("%[^\n]",&line);
    n=strlen(line);
    for(int i=0;i<n;i++){
        if(islower(line[i]))
            lower_count++;
        else if(isupper(line[i]))
            upper_count++;
    }
    printf("The upper and lower case characters in the string %s is %d and %d",line,upper_count,lower_count);
}