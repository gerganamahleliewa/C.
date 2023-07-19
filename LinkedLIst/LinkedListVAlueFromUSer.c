#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//create struct for node
typedef struct node{
    int data;
    struct node *next;
}Node;

//create function of type node for create Linked list 
Node *createLinkedList()
{
    Node *head;
    Node* one = NULL;
    struct node* two = NULL;
    Node *three = NULL;

  
    one= malloc(sizeof(Node));
    two= malloc(sizeof(Node));
    three= malloc(sizeof(Node));

//enter first elemnt in linked list
    printf("Enter number:");
    scanf("%d",&one->data);

  //second element
    printf("Enter number:");
    scanf("%d",&two->data);

  //third element
    printf("Enter number:");
    scanf("%d",&three->data);

    one->next=two;
    two->next = three;
    three->next = NULL;

    head = one;

    return head;


}

//create function to print linked list
void printLinkedList(Node *head)
{

    Node *current = head;
    while(current != NULL)
    {
        printf("%d ",current->data);
        current = current->next;
    }
}

int main() {

//call function
    Node *p =createLinkedList();
    printLinkedList(p);

    return 0;
}
