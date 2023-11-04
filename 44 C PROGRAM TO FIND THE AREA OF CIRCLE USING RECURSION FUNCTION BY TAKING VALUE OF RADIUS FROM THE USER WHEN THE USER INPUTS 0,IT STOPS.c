#include<stdio.h>
float areaofcircle(float radius){
    if(radius==0){
        return 0;
    }else{
        return (3.14*radius*radius+areaofcircle(radius-1));
    }
}
int main(){
    float radius;
    printf("ENTER THE RADIUS OF THE CIRCLE:");
    scanf("%d",&radius);
    float area=areaofcircle(radius);
    while(radius!=0){
        printf("THE AREA OF CIRCLE:%f\n",area);
        printf("ENTER THE AREA OF the NEXT CIRCLE(0 to stop):\n");
        scanf("%d",&radius);
        area=areaofcircle(radius);
    }
    return 0;
}
