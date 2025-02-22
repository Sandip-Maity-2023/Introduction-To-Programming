/*
123
456
789
---->123698745
*/
#include<stdio.h>
#define c 3
#define r 3
int main(){
		int arr[r][c];
	int top=0,bottom=r-1,left=0,right=c-1;	

printf("Enter the elements of A:\n");
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
        printf("Element No. [%d][%d]: ",i,j);
		scanf("%d",&arr[i][j]);
	}
}

for(int i=left;i<right;i++){
		printf("%d",arr[top][i]);
	}

for(int i=top;i<bottom;i++){
	printf("%d",arr[right][i]);
}	

for(int i=left;i<right;i--){
	printf("%d",arr[bottom][i]);
}
for(int i=bottom;i<top;i--){
	printf("%d",arr[i][left]);
}

}