#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <assert.h>
//#include <complex.h>

typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}Node;

Node* CreateDoubleLinkedList()
{
    Node *head = NULL;
    Node* one,*two,*three;

    one = (Node *) malloc(sizeof(Node));
    two = (Node *) malloc(sizeof(Node));
    three = (Node *) malloc(sizeof(Node));

    printf("Enter number:");
    scanf("%d",&one->data);

    printf("Enter number:");
    scanf("%d",&two->data);

    printf("Enter number:");
    scanf("%d",&three->data);

    one->next = two;
    one->prev = NULL;

    two->next = three;
    two->prev = one;

    three->next = NULL;
    three->prev  =two;

    head = one;

    return head;

}

void addBeg(Node** head, int data)
{

    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data = data;

    newNode->next = *head;
    newNode->prev = NULL;

    *head = newNode;

}

void addEnd(Node *head,int data)
{
    Node *current  =head;

    Node *newNode = (Node*) malloc(sizeof(Node));

    while(current)
    {
        if(current->next == NULL)
        {
            newNode->data = data;
            current->next = newNode;
            newNode->next = NULL;
            newNode->prev = current;

        }
        current = current->next;
    }

}

void addPos(Node **head,int data, int pos)
{
    Node *current = *head;
    int count = 0;
    Node *prev = NULL;
    Node* newNode = (Node *) malloc(sizeof(Node));
    newNode->data = data;

    if(pos == 0)
    {
        addBeg(head,data);
        return;
    }

    prev = current;
    while(current )
    {

        if(count == pos)
        {
           prev->next = newNode;
           newNode->prev = prev;
           newNode->next = current;
           current->prev = newNode;
           return;
        }else if(current->next == NULL)
        {
            addEnd(current,data);
            return;
        }
        prev = current;
        count++;
        current = current->next;
    }

}
void display(Node* head)
{
    Node* current = head;

    while(current != NULL){

        printf("%d ",current->data);
        current = current->next;
    }
}

int main() {

   Node* h  =CreateDoubleLinkedList();
  /*  addBeg(&h,9);
    addEnd(h,1);*/
    addPos(&h,3,3);
    display(h);


   return 0;
}

