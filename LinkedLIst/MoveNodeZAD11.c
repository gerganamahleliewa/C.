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
//create Linked List
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

void Push(Node **head,Node *newNode)
{

    newNode->next = *head;
    *head  = newNode;

}

Node *Pop(Node **head)
{
  //temp is point to head
   Node *temp = *head;
   *head = temp->next;//head is point o next element in list
   temp->next = NULL;

    return temp;
}

void MoveNode(Node **a,Node **b)
{
    Node *p = Pop(b);
  
    Push(a,p);

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


    Node *a = createNode();
    Node *b = createNode();

    MoveNode(&a,&b);
    printf("\nFirst Linked list:\n");
    printList(a);

    printf("\nSecond Linked list:\n");
    printList(b);




    return 0;
}
