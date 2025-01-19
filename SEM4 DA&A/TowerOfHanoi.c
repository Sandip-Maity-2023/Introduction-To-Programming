//
// Created by 12san on 19-01-2025.
//
#include<stdio.h>
int tower(int n,char source,char destination,char intermediate){   //SDI
    if(n==1){
        printf("Move disk 1 from %c peg to %c peg\n",source,destination);
        return 0;
    }
    tower(n-1,source,intermediate,destination);  //SID
    printf("Move disk %d from %c peg to ped %c\n",n,source,destination);
    tower(n-1,intermediate,destination,source);    //IDS
}

int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    tower(n,'S','D','I');
}