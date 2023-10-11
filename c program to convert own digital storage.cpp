#include<stdio.h>
int main(){
	float KB,MB,GB,TB;
	printf("ENTER THE SIZE in KB:");
	scanf("%f",&KB);
	MB=KB/1024;
	GB=MB/1024;
	TB=GB/1024;
	printf("size in MB=%f\n",MB);
	printf("size in GB=%f\n",GB);
	printf("size of TB=%f\n",TB);

}
