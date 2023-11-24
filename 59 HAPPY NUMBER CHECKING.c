
#include <stdio.h>

int isHappyNumber(int num) {
    // Calculate the sum of squares of digits of the number.
    int sum = 0;int rem=0;
    while (num > 0) {
         rem = num % 10;
        sum += rem * rem;
        num /= 10;
    }

    // If the sum is 1, the number is happy.
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result=num;
    while(result !=1 && result !=4){
        result=isHappyNumber(result);
    }


    // Check if the number is happy.
    if (result==1) {
        printf("%d is a happy number.\n", num);
    } else if(result==4) {
        printf("%d is not a happy number.\n", num);
    }

    return 0;
}
