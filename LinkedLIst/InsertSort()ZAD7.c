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

//create sort function
void SortInsert(Node *head) {
  //create to pointer, one for current position, and other for previously position
   Node *i,*j;
  //variable for swap numbers
   int temp;

   for(i = head; i!= NULL;i = i->next)
   {

       for(j = i->next ; j!= NULL;j = j->next)
       {
         // Linked List = 5,2,4 => (5 > 2) => temp = 5; 5 = 2; 2 = temp and print at beginning 2
           if(i->data > j->data)
           {
               temp= i->data;
               i->data = j->data;
               j->data = temp;
           }
       }
   }
}

//function to print linked list
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
    SortInsert(p);
    printlist(p);


    return 0;
}
