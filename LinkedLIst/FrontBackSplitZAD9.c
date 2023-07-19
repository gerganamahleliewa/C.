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
//create node while enter '-1'
Node *createNode()
{
    Node *head = NULL;
    Node *newNode ;
    Node *temp;
    int choice;
    while(choice != -1) {

        newNode = malloc(sizeof(Node));
        printf("Enter number:");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        if (head == NULL) {
            temp = newNode;
            head = temp;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
        printf("Enter number or enter '-1' if you want to stop:");
        scanf("%d", &choice);
    }
    temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    return head;

}

void FrontBackSplit(Node** head,Node **front,Node **back)
{

    Node* current = *head;
    int length = 0;

//search length of node in linked list
    while( current != NULL)
    {
        current = current->next;
        length++;
    }
  //create another pointer to head
    Node *source = *head;

  //check if number of node is smallest of 2 to print only front 
    if(length < 2)
    {
        *front = source;
        *back = NULL;
        return;
    }


   int size = (length-1)/2;

  (*front) = source;
  
   while(size > 0)
   {

       source = source->next;

       (*back) = source->next;
       --size;
   }


    source->next = NULL;

}
//function to print list
void printList(Node* head)
{
    Node *current = head;
    while (current!= NULL) {
        printf("%d ",current->data);
        current = current->next;
    }
    printf("\n");

}

int main() {

    Node *p =createNode();

    Node *a,*b;
    FrontBackSplit(&p,&a,&b);
    printf("\nB:\n");
    printList(b);

    printf("\nA:\n");
    printList(a);


    return 0;
}
