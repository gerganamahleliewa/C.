#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <time.h>
#define MAX_WORDS 100

typedef struct {
    char *word;
} Create;

// Global variables
int count = 0;
Create *words,*words2;
int count2 = 0;

// Function to open File and load it to RAM
void OpenFile(char *filepath) {
    FILE *fp;
    fp = fopen(filepath, "r");
    clock_t start = clock();

    if (fp == NULL) {
        printf("Opening Error..");
        exit(2);
    }
    //move file pointer to the end of file
    fseek( fp, 0, SEEK_END );
    //get file size
    int capacity = ftell(fp);
    //move file pointer to the beginning
   fseek( fp, 0, SEEK_SET );


    words = (Create *)malloc(capacity * sizeof(Create));

    char word1[50];

    while (count < capacity && fscanf(fp, "%s", word1) == 1) {

        // Allocate memory for the new word and copy it into the structure
        words[count].word = (char *)malloc(strlen(word1) + 1);
        strcpy(words[count].word, word1);
        count++;
    }

    fclose(fp);
    clock_t end = clock();
    double total = (double)(end - start) / CLOCKS_PER_SEC;
}

int SearchForWord(char *word)
{
    int flag = 0;
    for(int i = 0;i < count ;++i){
        //if word from RAM is same as word from input , world exists in RAM
        if (strcasecmp(words[i].word, word) == 0) {
            flag= 1;
            printf("The word exists..\n");
        }
    }
    if(flag != 1)
    {
        printf("The word not exist..\n");
    }
    return 0;
}

void addWord(char *word)
{
    clock_t start = clock();

    // Allocate memory for the new word and copy it into the structure
    words[count].word = (char *)malloc(strlen(word) + 1);

    //add word in end
    strcpy(words[count].word, word);
    count++;
    printf("Word is successfully added..\n");

    clock_t end = clock();
    double total = (double)(end - start) / CLOCKS_PER_SEC;

}

void delete(char *str)
{
    int found = 0,i;

    for( i = 0; i < count;++i)
    {
        // if word exists
        if(strcasecmp(words[i].word,str) == 0)
        {
            for(int j = i ; j < (count - 1); ++j )
            {
                strcpy(words[j].word,words[j+1].word);
                found = 1;
            }
            count--;
        }

    }
    if(found != 0)
    {
        printf("Word was delete..\n");
    }
    else{
        printf("Word was not found..\n");
    }

}
//to find time
void Time(clock_t start_time)
{
    clock_t end_time = clock();
    double total = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Total time = %f\n",total);
}
//to print info
void printWords()
{
      for(int i = 0 ;i < count;++i)
    {
        printf("%s\n",words[i].word);
    }
}
//check for duplicates words in two files and print without them
void is_duplicate()
{
    OpenFile("dict1.txt");
    OpenFile("dict2.txt");

    int duplicate[1000] = {0};


    for(int i = 0; i < count; ++i)
    {
        for(int j= i+1 ;j < count2; ++j)
        {
            if(strcmp(words[i].word,words2[j].word) == 0) {
                duplicate[i] = 1;
            }
        }
    }
//print first file without dupicates
    for(int i = 0;i < count;++i)
    {
        if(duplicate[i] != 1)
        {
            printf("%s\n",words[i].word);
        }
    }
//print duplicates
    for(int i = 0 ;i < count;++i)
    {
        if(duplicate[i] == 1)
        {
            printf("%s\n",words[i].word);
        }
    }
//print file2 without duplicates
    for(int j = 0;j < count2; ++j)
    {
        if(duplicate[j] !=1)
        {
            printf("%s\n",words2[j].word);
        }
    }

}


int main() {

    //  is_duplicate();

    clock_t  start;
    int options;
    printf("1.Load File.\n");
    printf("2.Add new word:\n");
    printf("3.Delete word.\n");
    printf("4.Search for word.\n");
    printf("Enter your choice:");
    scanf("%d",&options);


    switch (options) {
        case 1:
            start = clock();
            OpenFile("dict1.txt");
            Time(start);
            printWords();
            break;
        case 2:
            OpenFile("dict1.txt");
            addWord("HEY");
            printWords();
            break;
        case 3:
            OpenFile("dict1.txt");
            delete("apple");
            printWords();
            break;
        case 4:
            OpenFile("dict1.txt");
            SearchForWord("apple");
            printWords();
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    for(int i =0; i<count;++i){
        free(words[i].word);
    }


    return 0;
}
