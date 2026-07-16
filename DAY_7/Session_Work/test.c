#include <stdio.h>
#include <stdlib.h>

#include "std_types.h"

typedef struct Node node;

struct Node {
    u32 value;
    node* next;
};

node *create_node(int value);

int main() {
    int option;
    node* head = NULL;
    node *current = NULL;
    int value;

    do {

        printf("=================================\n");
        printf("1. Add a new node\n");
        printf("2. Print the nodes\n");
        printf("3. Terminate\n");
        printf("=================================\n");
        scanf("%d", &option);

        if (option == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            if (head == NULL) {
                head = create_node(value);
                current = head;
            } else {
                current->next = create_node(value);
                current = current->next;
            }
        } else if (option == 2) {
            current = head;
            printf("==================\n");
            while (current != NULL) {
                printf("%d\n", current->value);
                current = current->next;
            }
            printf("=================\n");
        }

     } while (option != 3);

    return 0;
}


node *create_node(int value) {
    node* new_node = (node*) malloc(sizeof(node));

    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    new_node->value = value;
    new_node->next = NULL;

    return new_node;
}