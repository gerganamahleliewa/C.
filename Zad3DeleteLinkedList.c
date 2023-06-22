#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

//create struct node for node in linked list
typedef struct node
{
    int data;
    struct node* next;
}Node;

//create function to enter elements in linked list
Node *createLinkedList()
{
    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;

    one = (Node*) malloc(sizeof (Node));
    two = (Node*) malloc(sizeof (Node));
    three = (Node*) malloc(sizeof (Node));

    printf("Enter number:");//enter elements in list
    scanf("%d",&one->data);

    printf("Enter number:");
    scanf("%d",&two->data);

    printf("Enter number:");
    scanf("%d",&three->data);

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    return head;
}

//create function to delete linked list
void Delete(Node *head )
{
    Node *current = head;

    while(current != NULL)
    {
      //free memory
        free(current);
        printf("Linked List deleted!");
        current = current->next;
    }
}


int main() {
  
    Node *p=createLinkedList();
  
    Delete(p);
  
    return 0;
}



