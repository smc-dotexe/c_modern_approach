// building a linked list 

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *add_to_start(struct node *list, int n) {
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = n;
    new_node->next = list;

    return new_node;
}

struct node *search_list(struct node *list, int n) {
    struct node *p;

    for (p = list; p != NULL; p = p->next) {
        if (p->value == n) {
            return p;
        }
    }

    return NULL;
}

void print_list(struct node *list) {
    struct node *current = list;

    while(current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

struct node *delete_from_list(struct node *list, int n) {
    struct node *curr, *prev;
    for (curr = list, prev = NULL;
        curr != NULL && curr->value != n;
        prev = curr, curr = curr->next);

    // if n was not found
    if (curr == NULL) {
        return list;
    }

    // if n was the first node
    if (prev == NULL) {
        list = list->next;
    } else {
        // if n was on another node
        prev->next = curr->next;
    }

    free(curr);
    return list;
}


int main() {
    struct node *linked_list = NULL;
    linked_list = add_to_start(linked_list, 10);
    linked_list = add_to_start(linked_list, 20);
    linked_list = add_to_start(linked_list, 30);

    print_list(linked_list);

    linked_list = delete_from_list(linked_list, 20);

    print_list(linked_list);

    

    return 0;
}