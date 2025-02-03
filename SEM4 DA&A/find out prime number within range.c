//
// Created by 12san on 29-01-2025.
//root_over(37)=6.08 i=2,3,4,5,6

#include<stdio.h>
int is_prime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void print_prime(int s,int e){
    printf("Prime numbers between %d and %d are: ",s,e);
    for(int i=s;i<=e;i++){
        if(is_prime(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
}
int main(){
    int n,m;
    printf("Enter start & end range:\n");
    scanf("%d %d",&n,&m);
    print_prime(n,m);

    return 0;
}