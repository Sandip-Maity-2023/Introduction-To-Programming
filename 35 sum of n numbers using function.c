#include<stdio.h>
int sum_n(int n,int sum){
    sum=sum+n;
    int i=n-1;
    if(n<1){
        return sum;
    }
    return sum_n(i,sum);
}
int main(){
    int sum=0, n;
    printf("ENTER THE VALUE OF N:\n");
    scanf("%d",&n);
    printf("THE SUM OF N NUMBER:%d",sum_n(n,sum));
}
