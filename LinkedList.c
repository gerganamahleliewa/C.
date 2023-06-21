#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//struct for linked list
typedef struct node
{
    int data;
    struct node *next;
};
//create function of type struct for create node
struct node* createNode(int data)
{
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}
//function to print linked List
void printList(struct node* head)
{
    struct node* current = head;
    while(current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
}

int main() {

    struct node* h = createNode(1);
    struct node* h1 = createNode(2);
    struct node *h2= createNode(5);

    h->next = h1;
    h1->next = h2;
    h2->next = NULL;



    printList(h);

    return 0;
}



