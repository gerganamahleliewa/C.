include <stdio.h>
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

//create function pop and return her data
int  Pop(Node** headR){

    Node* current = *headR;
//stores head->data
    int data = (*headR)->data;

    *headR = (*headR)->next;
  //deallocated memory
    free(current);
    return data;
}


int main() {


    Node *p=createLinkedList();

    printf("%d",Pop(&p));//delete and return first element
    printf("\n%d",Pop(&p));//delete and return second element
    printf("\n%d",Pop(&p));//delete and return third element
    
    return 0;
}
