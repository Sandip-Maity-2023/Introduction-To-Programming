#include<stdio.h>
#include<stdlib.h>
int fun(int n){
if(n==0){
	exit(0);
}	else{
	printf("%d",n);
	return fun(n-1);
}
}
int main(){
	fun(5);
}
