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

//create function sortred insert 
void SortedInsert(Node **head,int data)
{
    Node *current = *head;
    Node *prev = NULL;
//create new node in list
    Node *newNode = (Node *) malloc(sizeof (Node));
    newNode->data = data;
    newNode->next = NULL;

    if((*head) == NULL)//insert to head
    {
        printf("No have node!");
        return;
    }
//insert at beginning
    if(newNode->data <= (*head)->data)
    {
        *head = newNode;
        newNode->next = current;
        return;
    }
  //create fro loop for current 
    for(current = *head; current  !=NULL ;current = current->next ) {
//and insert element in sorted linked list
        if (newNode->data <= current->next->data) {
          
           newNode->next = current->next;
            current->next  = newNode;
            return;
        }
    }
    
}

void printlist(struct node* head)
{
    Node *current = head;
    while (current!= NULL) {
        printf("%d ",current->data);
        current = current->next;
    }

}

int main() {


    Node *p = createLinkedList();

    SortedInsert(&p,3);
    printlist(p);

    return 0;
}



