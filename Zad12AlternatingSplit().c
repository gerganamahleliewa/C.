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

void Push(Node **head,Node *newNode)
{

    newNode->next = *head;
    *head  = newNode;

}

Node *Pop(Node **head)
{
  //poin to first element in list
   Node *temp = *head;
  
  //change head point to second elemet
   *head = temp->next;
  
   temp->next = NULL;

    return temp;
}

void MoveNode(Node **a,Node **b)
{
    Node *p = Pop(b);

    Push(a,p);

}

void AlternatingSplit(Node *head,Node **aRef,Node **bRef)
{

    *aRef  = NULL;
    *bRef = NULL;

    while(head != NULL ) {
//check if number is even or odd
        if(head->data % 2 == 0)
        {
            MoveNode(aRef,&head);
          
        }
        else{
            MoveNode(bRef,&head);
         
        }

    }


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


    Node *h = createNode();
    Node *a= NULL;
    Node *b =NULL;

    AlternatingSplit(h,&a,&b);

    printf("Even list:\n");
    printList(a);

    printf("\nOdd list:\n");
    printList(b);





    return 0;
}



