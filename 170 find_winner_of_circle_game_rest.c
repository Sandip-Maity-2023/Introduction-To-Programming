//
// Created by 12san on 13-07-2024.
//
#include<stdio.h>
int find_the_winner(int n,int k){
    int friends[n];
    for(int i=0;i<n;i++){
         friends[i]=i+1;
    }

int index=0;
int remaining= n;
while(remaining>1){
    index=(index+k-1)%remaining;
    for(int i=index;i<remaining-1;i++){
        friends[i]=friends[i+1];
    }
    remaining--;
}
 return (friends[0]);
}
int main(){
    printf("%d\n",find_the_winner(5,2));
    printf("%d\n",find_the_winner(4,1));
return 0;
}