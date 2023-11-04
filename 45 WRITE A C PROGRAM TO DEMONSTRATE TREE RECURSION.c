#include<stdio.h>
void treerecursion(int n){
if(n==0){
    return;
}else{
    treerecursion(n-1);
    printf("%d\n",n);
    treerecursion(n-1);
}
}
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    treerecursion(n);
    return 0;
}
