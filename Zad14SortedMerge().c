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

Node *SortedMerge(Node *a, Node *b)
{
    if(a == NULL) {
        return b;
    }
    if(b == NULL) {
        return a;
    }
    Node *res= NULL;

//A =1,2,3 B= 4,5,6 / example: 1 <= 4 => res = 1 => 2 <=4 => res = 1,2 ....
     if(a->data <= b->data)
     {
         res = a;
         a->next = SortedMerge(a->next,b);
     }
     else
     {
         res = b;
         b->next = SortedMerge(a,b->next);
     }

    return res;
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


    Node *p = SortedMerge(a,b);
    printList(p);

    return 0;
}



