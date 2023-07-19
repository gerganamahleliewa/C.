#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <time.h>
#define MAXLENGTH 1000
#define MAX_WORDS 1000

//global varibales
char words[MAXLENGTH][MAX_WORDS];
int count = 0;
char words2[MAXLENGTH][MAX_WORDS];
int count2 = 0;

//function to open File and charge it to RAM
void OpenFile(char *filepath,char word[MAXLENGTH][MAX_WORDS],int *c)
{
        FILE *fp;
        fp = fopen(filepath, "r");
        clock_t start = clock();

        if (fp == NULL) {
            printf("Opening Error..");
            exit(2);
        }
//counter
        *c = 0;

        while (*c < MAX_WORDS && fscanf(fp, "%s", word[*c]) == 1) {
            (*c)++;
        }

        fclose(fp);
        clock_t end = clock();
        double total = (double) (end - start) / CLOCKS_PER_SEC;

}

int SearchForWord(char *word)
{
    for(int i = 0;i <= count ;++i){
      //if word from RAM is same as word from input , world exists in RAM
        if (strcasecmp(words[i], word) == 0) {
            printf("The word exists..\n");
        }
        else{
            printf("The word not exist");
        }
    }
    return 0;
}

void addWord(char *word)
{
    clock_t start =clock();
  //add word in end
    strcpy(words[count], word);
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
        if(strcasecmp(words[i],str) == 0)
        {   
            for(int j = i ; j < (count - 1); ++j )
              {
                strcpy(words[j],words[j+1]);
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
    for(int i =0;i<count;++i)
    {
        printf("%s\n",words[i]);
    }
}
//check for duplicates words in two files and print without them
void is_duplicate()
{
    OpenFile("dict1.txt",words,&count);
    OpenFile("dict2.txt",words2,&count2);

    int duplicate[MAXLENGTH] = {0};


    for(int i = 0; i < count; ++i)
    {
        for(int j= i+1 ;j < count2; ++j)
        {
            if(strcmp(words[i],words2[j]) == 0) {
                duplicate[i] = 1;
            }
        }
    }
//print first file without dupicates
    for(int i = 0;i < count;++i)
    {
        if(duplicate[i] != 1)
        {
            printf("%s\n",words[i]);
        }
    }
//print duplicates
    for(int i = 0 ;i < count;++i)
    {
        if(duplicate[i] == 1)
        {
            printf("%s\n",words[i]);
        }
    }
//print file2 without duplicates
    for(int j = 0;j < count2; ++j)
    {
        if(duplicate[j] !=1)
        {
            printf("%s\n",words2[j]);
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
            OpenFile("dict1.txt",words,&count);
            Time(start);
            printWords();
            break;
        case 2:
            OpenFile("dict1.txt",words,&count);
            addWord("apple");
            printWords();
            break;
        case 3:
            OpenFile("dict1.txt",words,&count);
            delete("apple");
            printWords();
            break;
        case 4:
            OpenFile("dict1.txt",words,&count);
            SearchForWord("apple");
            printWords();
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
