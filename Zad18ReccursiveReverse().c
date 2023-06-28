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

void RecursiveReverse(Node **head)
{
    Node *current = *head;
    Node *next = current->next;

  //search for last element in list
    if(next == NULL)
        return;
       RecursiveReverse(&next);
  
//head point to laast element
    *head = next;

    current->next->next = current;
    current->next = NULL;
}



void printList(Node *head)
{
    Node * current = head;

    while (current!= NULL)
    {
        printf("%d ",current->data);
        current = current->next;
    }
}



int main() {



    Node *a= createNode();

    RecursiveReverse(&a);
    printList(a);



    return 0;
}



