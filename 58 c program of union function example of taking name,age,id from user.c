#include <stdio.h>

struct user_data {
    char name[20];
    int age;
    union {
        long int voter_id;
        long int adhaar_id;
        long int pan_id;
    } id;
    int option;
};

int main() {
    struct user_data ud;

    printf("Enter the name:\n");
    scanf("%s", ud.name);

    printf("Enter the age:\n");
    scanf("%d", &ud.age);

    printf("Enter the option of ID: 1-VOTER, 2-PAN, 3-ADHAAR\n");
    scanf("%d", &ud.option);

    switch (ud.option) {
        case 1:
            printf("Enter the voter id:\n");
            scanf("%ld", &ud.id.voter_id);
            break;
        case 2:
            printf("Enter the pan id:\n");
            scanf("%ld", &ud.id.pan_id);
            break;
        case 3:
            printf("Enter the Adhaar id:\n");
            scanf("%ld", &ud.id.adhaar_id);
            break;
        default:
            printf("Invalid option\n");
            return 1;
    }

    printf("Name: %s\n", ud.name);
    printf("Age: %d\n", ud.age);
    printf("ID Card:\n");

    switch (ud.option) {
        case 1:
            printf("Voter ID: %ld\n", ud.id.voter_id);
            break;
        case 2:
            printf("PAN ID: %ld\n", ud.id.pan_id);
            break;
        case 3:
            printf("Adhaar ID: %ld\n", ud.id.adhaar_id);
            break;
    }

    return 0;
}
