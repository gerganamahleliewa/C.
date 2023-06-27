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


Node *ShuffleMerge(Node *a, Node *b)
{
  //if a or b are empty 
    if( a == NULL)
    {
        return b;
    }

    if( b == NULL)
    {
        return a;
    }
//recursion to find next
    Node *rec = ShuffleMerge(a->next,b->next);
 
       a->next = b;
       b->next = rec;//b->next is a->next->next

    return a;

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
    Node *b =createNode();

    Node *p = ShuffleMerge(a,b);
    printList(p);

    return 0;
}



