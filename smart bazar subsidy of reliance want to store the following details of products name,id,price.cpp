#include<stdio.h>
int main() {
    struct product_details {
        char name[12];
        int price;
        long int id;
    };
    struct product_details pd[5];
    for (int i = 0; i < 5; i++) {
        printf("# HELP RELIANCE TO STORE PRODUCTS.................\n");
        printf("ENTER THE  PRODUCT NAME:\n");
        gets(pd[i].name);
        printf("ENTER THE PRICE:\n");
        scanf("%d", &pd[i].price);
        printf("ENTER THE ID:\n");
        scanf("%ld", &pd[i].id);
        getchar();
    }
    for (int i = 0; i <= 5; i++) {
        printf("NAME:%s\n", pd[i].name);
        printf("PRICE:%d\n", pd[i].price);
        printf("ID:%ld\n", pd[i].id);
        printf("\n");
    }
    return 0;
}
