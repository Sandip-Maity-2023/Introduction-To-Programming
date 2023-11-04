#include<stdio.h>
int SumOfNaturalNumbers(int n){
    if(n==0){
        return 0;
    }else{
        return n+SumOfNaturalNumbers(n-1);
    }
}
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int sum=SumOfNaturalNumbers(n);
    printf("THE SUM OF FIRST %d natural numbers is %d\n",n,sum);
    return 0;
}
