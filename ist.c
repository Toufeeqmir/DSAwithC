#include <stdio.h>
#include <stdlib.h>

// Define a structure for a linked list node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to insert a new node at the end of the list
void insert(Node** head, int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
    } else {
        Node* last_node = *head;
        while (last_node->next) {
            last_node = last_node->next;
        }
        last_node->next = new_node;
    }
}

// Function to find the maximu
void find_max_min(Node* head, int* max, int* min) {
    *max = head->data;
    *min = head->data;

    while (head) {
        if (head->data > *max) {
            *max = head->data;
        } else if (head->data < *min) {
            *min = head->data;
        }
        head = head->next;
    }
}

int main() {
    Node* head = NULL;

    // Insert nodes into the list
    insert(&head, 5);
    insert(&head, 2);
    insert(&head, 8);
    insert(&head, 3);
    insert(&head, 1);
    insert(&head, 9);

    int max, min;
    find_max_min(head, &max, &min);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}