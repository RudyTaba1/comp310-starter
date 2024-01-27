#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *head = NULL;

Node *addNode(int d){
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = d;
    new_node->next = NULL;
    return new_node;

}

void push(int new_data){
    Node *new_node = addNode(new_data);
    new_node->next = head;
    head = new_node;
}

void deleteNode(int key){
    Node *temp = head;
    Node *prev = NULL;

    if(temp != NULL && temp->data == key){
        head = temp->next;
        free(temp);
        return;
    }

    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL){
        return;
    }

    prev->next = temp->next;
}

void printList(){
    Node *tnode = head;
    while(tnode != NULL){
        printf("%d, ", tnode->data);
        tnode = tnode->next;
    }
}

int main(){
    
    push(7);
    push(1);
    push(2);
    push(3);

    //printf("Created Linked List: %d \n", printList());
    printf("Created Linked List: ");
    printList();
    printf("\n");

    deleteNode(1);

    printf("Linked List after Deletion of 1: ");
    printList();
    printf("\n");

    //printf("Linked List after Deletion of 1: %d \n", printList());

    return 0;
}