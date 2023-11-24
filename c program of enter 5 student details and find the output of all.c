#include<stdio.h>
int main() {
    struct stu_details {
        char name[15];
        int age;
        long int ph_no;
    };
    struct stu_details sd[5];
    for (int i = 0; i < 5; i++) {
        printf("ENTER THE NAME:\n");
        gets(sd[i].name);
        printf("ENTER THE AGE:\n");
        scanf("%d", &sd[i].age);
        printf("ENTER THE PHONE NUMBER:\n");
        scanf("%ld", &sd[i].ph_no);
        getchar();
    }
    for (int i = 0; i <= 5; i++) {
        printf("NAME:%s\n", sd[i].name);
        printf("AGE:%d\n", sd[i].age);
        printf("PHONE NO:%ld\n", sd[i].ph_no);
    }
}
