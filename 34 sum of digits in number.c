#include <stdio.h>
int main(){
    int n,sum=0,m;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0){     //n=156,n=15,n=1
        m=n%10;    // 156%10=6,m=15%10=5,m=1%10=
        sum=sum+m;   //sum=0+6=6,sum=6+5=11,sum=11+
        n=n/10;      //n=156/10=15,15/10=1
    }
    printf("sum is=%d",sum);
    return 0;
}
