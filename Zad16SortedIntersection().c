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


void printList(Node *head)
{
    Node * current = head;

    while (current != NULL)
    {
        printf("%d ",current->data);
        current = current->next;
    }
}


Node* SortedIntersection(Node *a,Node *b)
{
  // if 'a' and 'b' are empty to return zero
    if( a == NULL || b == NULL)
        return 0;
  
    Node *new;
  //Example: 'a'= 1,2,3; 'b'= 2,3,5 => 1 < 2 => 2 < 2
        if (a->data < b->data)
            return SortedIntersection(a->next,b);
// 2 is not bigger than 2 
        else if(a->data > b->data)
            return SortedIntersection(a,b->next);
        else{
            new = (Node*) malloc(sizeof (Node));
            new->data = a->data; // so new->data is equal to 2
            new->next = SortedIntersection(a->next,b->next);
        }


    return new;
}

int main() {

    Node *a= createNode();
    Node *b =createNode();

    Node *p = SortedIntersection(a,b);
    printList(p);


    return 0;
}



