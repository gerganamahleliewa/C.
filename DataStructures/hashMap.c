#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <inttypes.h>

typedef struct node{
    char *key;
    char *value;
    struct node* next;
}Node;

typedef struct hashMap{
    int numOfElements;
    int capacity;
    struct ndoe** arr;
}hashMap;


void setNode(Node *node,char* key, char* value)
{
    node->key = key;
    node->value = value;
    node->next = NULL;
    return;
}

void init_HashMap(hashMap* map)
{
    map->capacity = 50;
    map->numOfElements = 0;

    map->arr = (Node**) malloc(sizeof(Node*)*map->capacity);
    return;
}

int hashFunction(hashMap *map, char* key)
{
    int bucket;
    int sum = 0;

    for(int i = 0; i < strlen(key);i++){

        sum %= strlen(key);
    }
    bucket = sum;
    return bucket;
}

void add(hashMap* map,char* key, char* value)
{

    int bucket = hashFunction(map,key);

    Node * newNode  = (Node*) malloc(sizeof(Node));

    setNode(newNode,key,value);

    if(!map->arr[bucket])
    {
        map->arr[bucket] = newNode;
    }
    else{
        newNode->next = map->arr[bucket];
        map->arr[bucket] = newNode;
    }
    return;
}

char *search(hashMap *map,char* key)
{
    int bucket = hashFunction(map,key);

    Node *head = map->arr[bucket];

    while(head != NULL)
    {
        if(head->key == key)
        {
            return head->value;
        }
        head = head->next;
    }
    char* error = "Ops, not found..";
    return error;
}
