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
//while you not enter '-1', will enter node 
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
  //print Linked list
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    return head;

}

void RemoveDuplicates(Node *head)
{
    Node *current = head;
  //new poinet to stores next,next data
    Node *next = NULL;

    while(current != NULL) {
      //check if current data and next current data are equal
        if (current->data == current->next->data) {

            next = current->next->next;
          //delete duplicates
            free(current->next);
        
            current->next = next;
            return;
        }
        current = current->next;
    }

}
//function to print linked list
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

    Node *p =createNode();
    RemoveDuplicates(p);
    printf("\n");
    printList(p);
    RemoveDuplicates(p);
    printList(p);
    
   






    return 0;
}



