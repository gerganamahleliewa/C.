#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>


typedef struct node
{
    int data;
    struct node* next;
}Node;

Node *createNode()
{
   Node *head;
   Node *one = NULL;
   Node *two = NULL;
   Node *three = NULL;

    one =(Node *)malloc(sizeof (Node *));
    two =(Node *) malloc(sizeof (Node *));
   three =(Node *)malloc(sizeof (Node *));

    printf("Enter number:");
    scanf("%d",&one->data);

    printf("Enter number:");
    scanf("%d",&two->data);

    printf("Enter number:");
    scanf("%d",&three->data);

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one ;

    return head;
}

void Reverse(Node **head)
{
  
    Node *current = *head;
    Node *prev = NULL;
    Node *next = *head;

    while(next != NULL)
    {
        next = next->next;
      
      //first point head to zero
        current->next = prev;
      
      //move prev to current position
        prev = current;
      
      //move current to next position
        current = next;
    }
  
  //head is point to final element in list
    *head = prev;
}



void printList(Node *head)
{
    Node * current = head;

    while (current != NULL)
    {
        printf("%d ",current->data);
        current = current->next;
    }
}



int main() {
  
    Node *a= createNode();

    Reverse(&a);
    printList(a);

    return 0;
}



