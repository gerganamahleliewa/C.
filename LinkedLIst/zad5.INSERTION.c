
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

//create node struct
typedef struct node
{
    int data;
    struct node* next;
}Node;

//create function for input numbers in linked list
Node *createLinkedList()
{
    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;

//allocated memory for each of them
    one = (Node*) malloc(sizeof (Node));
    two = (Node*) malloc(sizeof (Node));
    three = (Node*) malloc(sizeof (Node));

    //Enter elements
    printf("Enter number:");
    scanf("%d",&one->data);

    printf("Enter number:");
    scanf("%d",&two->data);

    printf("Enter number:");
    scanf("%d",&three->data);

//find next
    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    return head;
}


//
void InsertNth(Node **head, int index,int data)
{
    Node *current = *head;

    if((*head) == NULL)//insert to head
    {
        printf("No have node!");
        return;
    }

    Node *prev = NULL;

    Node *newNode = (Node *) malloc(sizeof (Node));
    newNode->data = data;
    newNode->next = NULL;

    if(index == 0)
    {
        newNode->next = current;
        *head = newNode;
        return;
    }

   int count = 0;

    prev = current;

   while(prev != NULL )
   {
       if(count  ==  index)
       {
           newNode->next = current;
           prev->next = newNode;
           return;
       }

       prev = current;
       current = current->next;
       count++;
   }

}
//create function to print linked list
void printLinkedList(Node *head)
{
    Node *current = head;

    while (current != NULL)
    {
        printf("%d ",current->data);
        current = current->next;
    }
}


int main() {


    Node *p = createLinkedList();


    InsertNth(&p,0,4);
    InsertNth(&p,1,7);
    InsertNth(&p,2,3);



    printLinkedList(p);

    return 0;
}
