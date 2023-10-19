#include <stdio.h>

int main()
{
char name[1024];
printf("What is your name?\n");
scanf("%s", name);
printf("\nWelcome to programming World, %s!\n", name);
return 0;
}
