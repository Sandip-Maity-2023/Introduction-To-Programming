//
// Created by 12san on 14-05-2024.
//
#include<stdio.h>
void sort(int n,int *a);
int main() {
    int n, a[20];
    printf("Enter the size:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sort(n, a);
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
    void sort(int n,int *a){
        int temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                if(*(a+j)>=*(a+j+1)){
                    temp=*(a+j);
                    *(a+j)=*(a+j+1);
                    *(a+j+1)=temp;
                }
            }
        }
    }
