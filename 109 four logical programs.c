//
// Created by 12san on 18-04-2024.
//
/* #include<stdio.h>
int main(){
    int a=5,b=10;
    a+=a<=b;
    printf("%d",a);
}

 */
//a += a <= b;: This is the statement where the action happens.
//a <= b: This is a comparison operation which evaluates to 1 if a is less than or equal to b, and 0 otherwise.
//a += ...: This is a shorthand for a = a + .... So, depending on the result of the comparison:
//If a is less than or equal to b (a <= b evaluates to 1), then a will be incremented by 1.
//If a is greater than b (a <= b evaluates to 0), then a remains unchanged.

/*
#include<stdio.h>
int main(){
    int x=5,y=3;
    printf("%d",x>y?x++:y++);
}
*/
//In this case:
//condition is x > y, which evaluates to 5 > 3, so it's true.
//Therefore, expression1 is x++, which means x will be incremented after this operation.
//expression2 is y++, which means y will be incremented after this operation.
//Since the condition is true, x++ is evaluated, so x (which is 5) is printed, and then x is incremented to 6.
//So, t
//

/*
 #include<stdio.h>
int main() {

    int a = 10;
    while (a-- > 10) {
        printf("%d", a);
    }
}
*/

//while (a-- > 10) { ... }: This is a while loop that will continue to execute as long as the condition a-- > 10 is true.
//a--: This is a post-decrement operator, which means that the value of a will first be used in the expression, and then decremented by 1.
//a-- > 10: This condition checks if the current value of a is greater than 10. Since a starts with 10, this condition is initially false, because 10 > 10 is false.
//printf("%d", a);: This line prints the value of a using the printf() function with a format specifier %d.
//Since the condition a-- > 10 is initially false, the loop body is never executed. Therefore, the program does not print anything, and it simply terminates after the while loop. The final output of the program is an empty output.

#include<stdio.h>
int main(){
 int x=1,y=2;
 printf("%d",x<y?x:y,x>y?y:x);
}

//For the first ternary operator (x < y ? x : y):
//x < y is true (1 < 2), so x is selected. Therefore, x (which is 1) will be printed.
//For the second ternary operator (x > y ? y : x):
//x > y is false (1 > 2 is false), so y is selected. Therefore, y (which is 2) will be printed.
//So, the output of the program will be 12. The printf function will print 1 first, and then 2. The additional 2 comes from the second expression in the printf function, which is evaluated but not printed.