#include<stdio.h>
int friendlypair(int num1,int num2) {
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 1; i < num1; i++) {
        if (num1 % i == 0) {
            sum1 += i;
        }
    }
    for (int i = 1; i < num2; i++) {
        if (num2 % i == 0) {
            sum2 += i;
        }
    }
    return (sum1 / num1 == sum2 / num2);
}
int main(){
    int num1,num2;
    printf("ENTER THE NUMBER:");
    scanf("%d %d",&num1,&num2);
    if(friendlypair(num1,num2)){
        printf("%d and %d are a friendly pair\n",num1,num2);
    }else{
        printf("%d and %d are not a friendly pair\n",&num1,&num2);
    }return 0;
}
