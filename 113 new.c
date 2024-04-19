//
// Created by 12san on 19-04-2024.
//
/*
#include<stdio.h>
int main(){
    float k=0;
    for(k=0.5;k<3;k++)   //0.5+1 = 1.5  ,1.5+1.5 = 3
        printf("i love u \n");
}
*/

/*
#include<stdio.h>
int main(){
    int i=1;
    do{
        printf("while vs do-while\n");
    }while(i==1);
    printf("out of loop");
    return 0;
}
//print infinite times ...vs...
*/
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i,sum=0;
    for(i=1;i<N;i++){
        if(N%i==0)
            sum+=i;
    }
    if(sum==N)
        printf("\n%d is a perfect number",N);
    else
        printf("\nit is not a perfect number");
}