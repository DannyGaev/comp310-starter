#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void push(int new_data)
{
    struct Node *new_node = malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void deleteNode(int key)
{
    struct Node *temp = head;
    struct Node *prev = malloc(sizeof(struct Node));

    if (temp != NULL && temp->data == key)
    {
        head = temp->next;
        return;
    }

    while(temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return;
    }

    prev->next = temp->next;
}

void printList() {
    struct Node *tnode = head;
    while (tnode != NULL) {
        printf("%d ",tnode->data);
        tnode = tnode->next;
    }
}

int main(int argc, char *argv[])
{
    head = malloc(sizeof(struct Node));
    push(1);
    push(3);
    push(2);

    printf("\nCreated Linked list is: ");
    printList();

    deleteNode(1);

    printf("\nLinked List after Deletion of 1: ");
    printList();
    printf("\n");
    return EXIT_SUCCESS;

}

