//
// Created by 12san on 28-11-2024.
//
//
// Created by 12san on 27-11-2024.
//
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *start = NULL;

struct node *create_l1(struct node *);
struct node *display(struct node *);

struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);

struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);

struct node *sort_list(struct node *);

int main(int argc, char *argv[]) {
    int i;
    printf("Number of arguments: %d\n", argc);
    for (i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    int option;
    do {
        printf("\n------Main Menu-------\n");
        printf("1. Create a list\n");
        printf("2. Display the list\n");
        printf("3. Add a node in the beginning\n");
        printf("4. Add a node at the end\n");
        printf("5. Add a node before a given node\n");
        printf("6. Add a node after a given node\n");
        printf("7. Delete a node in the beginning\n");
        printf("8. Delete a node at the end\n");
        printf("9. Delete a given node\n");
        printf("10. Delete a node after a given node\n");
        printf("11. Delete the entire list\n");
        printf("12. Sort the list\n");
        printf("13. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                start = create_l1(start);
                printf("Linked list created.\n");
                break;
            case 2:
                start = display(start);
                break;
            case 3:
                start = insert_beg(start);
                break;
            case 4:
                start = insert_end(start);
                break;
            case 5:
                start = insert_before(start);
                break;
            case 6:
                start = insert_after(start);
                break;
            case 7:
                start = delete_beg(start);
                break;
            case 8:
                start = delete_end(start);
                break;
            case 9:
                start = delete_node(start);
                break;
            case 10:
                start = delete_after(start);
                break;
            case 11:
                start = delete_list(start);
                printf("Linked list deleted.\n");
                break;
            case 12:
                start = sort_list(start);
                printf("Linked list sorted.\n");
                break;
            case 13:
                exit(0);
            default:
                printf("Invalid Choice.\n");
        }
    } while (option != 13);

    return 0;
}

struct node *create_l1(struct node *start) {
    struct node *new_node, *ptr;
    int num;
    printf("Enter -1 to end\n");
    printf("Enter the data: ");
    scanf("%d", &num);
    while (num != -1) {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        new_node->next = NULL;

        if (start == NULL) {
            start = new_node;
        } else {
            ptr = start;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = new_node;
        }
        printf("Enter the data: ");
        scanf("%d", &num);
    }
    return start;
}

struct node *display(struct node *start) {
    struct node *ptr = start;
    if (ptr == NULL) {
        printf("List is empty.\n");
    } else {
        printf("List elements: ");
        while (ptr != NULL) {
            printf("%d -> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
    return start;
}

struct node *insert_beg(struct node *start) {
    struct node *new_node;
    int num;
    printf("Enter the data: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = start;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start) {
    struct node *new_node, *ptr;
    int num;
    printf("Enter the data: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = NULL;

    if (start == NULL) {
        start = new_node;
    } else {
        ptr = start;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
    return start;
}

struct node *insert_before(struct node *start) {
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("Enter the data to insert: ");
    scanf("%d", &num);
    printf("Enter the value before which to insert: ");
    scanf("%d", &val);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;

    if (start == NULL) {
        printf("List is empty.\n");
        return start;
    }

    if (start->data == val) {
        new_node->next = start;
        start = new_node;
        return start;
    }

    ptr = start;
    while (ptr != NULL && ptr->data != val) {
        preptr = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Value not found in the list.\n");
    } else {
        preptr->next = new_node;
        new_node->next = ptr;
    }
    return start;
}

struct node *insert_after(struct node *start) {
    struct node *new_node, *ptr;
    int num, val;
    printf("Enter the data to insert: ");
    scanf("%d", &num);
    printf("Enter the value after which to insert: ");
    scanf("%d", &val);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;

    ptr = start;
    while (ptr != NULL && ptr->data != val) {
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Value not found in the list.\n");
    } else {
        new_node->next = ptr->next;
        ptr->next = new_node;
    }
    return start;
}

struct node *delete_beg(struct node *start) {
    struct node *ptr;
    if (start == NULL) {
        printf("List is empty.\n");
    } else {
        ptr = start;
        start = start->next;
        free(ptr);
        printf("Node deleted from the beginning.\n");
    }
    return start;
}

struct node *delete_end(struct node *start) {
    struct node *ptr, *preptr;
    if (start == NULL) {
        printf("List is empty.\n");
    } else if (start->next == NULL) {
        free(start);
        start = NULL;
    } else {
        ptr = start;
        while (ptr->next != NULL) {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = NULL;
        free(ptr);
    }
    return start;
}

struct node *delete_node(struct node *start) {
    struct node *ptr, *preptr;
    int num;
    printf("Enter the value of the node to delete: ");
    scanf("%d", &num);

    if (start == NULL) {
        printf("List is empty.\n");
        return start;
    }

    if (start->data == num) {
        start = delete_beg(start);
        return start;
    }

    ptr = start;
    while (ptr != NULL && ptr->data != num) {
        preptr = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Value not found in the list.\n");
    } else {
        preptr->next = ptr->next;
        free(ptr);
    }
    return start;
}

struct node *delete_after(struct node *start) {
    struct node *ptr, *temp;
    int num;
    printf("Enter the value after which to delete: ");
    scanf("%d", &num);

    ptr = start;
    while (ptr != NULL && ptr->data != num) {
        ptr = ptr->next;
    }

    if (ptr == NULL || ptr->next == NULL) {
        printf("No node found to delete after the given value.\n");
    } else {
        temp = ptr->next;
        ptr->next = temp->next;
        free(temp);
    }
    return start;
}

struct node *delete_list(struct node *start) {
    struct node *ptr;
    while (start != NULL) {
        ptr = start;
        printf("Deleting node with value %d.\n", ptr->data);
        start = start->next;
        free(ptr);
    }
    return start;
}

struct node *sort_list(struct node *start) {
    struct node *ptr1, *ptr2;
    int temp;
    if (start == NULL) {
        printf("List is empty.\n");
        return start;
    }

    for (ptr1 = start; ptr1->next != NULL; ptr1 = ptr1->next) {
        for (ptr2 = ptr1->next; ptr2 != NULL; ptr2 = ptr2->next) {
            if (ptr1->data > ptr2->data) {
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
        }
    }
    return start;
}
