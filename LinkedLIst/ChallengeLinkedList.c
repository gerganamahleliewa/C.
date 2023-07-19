#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//#define NDEBUG
#include <assert.h>
//#include <complex.h>
//#include <setjmp.h>
//#include <stdarg.h>
//#include <stdnoreturn.h>
#include <time.h>

typedef struct node {
    int data;
    struct node* next;
}Node;

Node* createLinkedList()
{
    Node *head;
    Node *one;
    Node *two;
    Node *three;

    one = (Node *) malloc(sizeof (Node));
    two = (Node *) malloc(sizeof (Node));
    three = (Node *) malloc(sizeof (Node));

    printf("Enter number:");
    scanf("%d",&one->data);

    printf("Enter number:");
    scanf("%d",&two->data);

    printf("Enter number:");
    scanf("%d",&three->data);

    one->next = two;
    two->next = three;
    three->next = NULL;

    head =one;

    return head;

}
//insert node in begging
Node* InsertAtBeg(Node *head,int data)
{
    Node *newNode;
    newNode = (Node *) malloc(sizeof (Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}
void InsertAtEnd(Node *head,int data)
{
    Node *current =head;
    Node *newNode;
    newNode = (Node *) malloc(sizeof (Node));
    newNode->data = data;

    while(current != NULL) {
         if (current->next == NULL) {
            current->next = newNode;
            newNode->next = NULL;
         }
         current = current->next;
    }
}
//insert node in position
void InsertAtPosition(Node **head,int data, int index)
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
//function that delete elemnt in any position
void deleteFromAnyPosition(Node *head,int index)
{
    Node *current = head;

    if (index == 0) {
        printf("\nElement deleted is : %d\n", current->data);
        head = head->next; // Advancing the head pointer
        current->next = NULL;
        free(current); // Node is deleted
    }
    else{
        for(int i = 0;i<index -1;++i)
        {
            current = current->next;
        }
        Node *del;
        del = current->next;
        current->next = current->next->next;
        printf("\nElement deleted is : %d\n", del->data);
        del->next = NULL;
        free(del);
    }

}

void printList(Node *head)
{
    Node *current = head;

    while(current != NULL)
    {
        printf("%d ",current->data);
        current = current->next;
    }
}

int main(){

    Node *p =createLinkedList();
    printList(p);

    printf("\n");
    Node* i = InsertAtBeg(p,5);
    printList(i);

    printf("\n");
    InsertAtEnd(p,6);
    printList(p);

    printf("\nInsert at position:\n");
    InsertAtPosition(&p,10,2);
    printList(p);

    printf("\nDelete at position:\n");
    deleteFromAnyPosition(p,2);
    printList(p);

    return 0;
}
