#include<stdio.h>
int main(){
    float side1,side2;
    printf("ENTER THE VALUE OF THE FIRST SIDE:");
    scanf("%f",&side1);
    printf("ENTER THE VALUE OF SECOND SIDE:");
    scanf("%f",&side2);
    float area=(side1 * side2);
    printf("AREA OF THE QUADRANGLE:%f square units\n",area);
    if(side1==side2){
        printf("IT'S A SQUARE");
    }else{
        printf("IT'S A RECTANGLE");
            }
    return 0;
}
