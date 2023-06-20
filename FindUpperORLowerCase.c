#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>



int main() {


    int count[52]={0},i;
    char arr[8]={'C','C','C','C','C','A','Z','t'};
    int max=0;

   for( i = 0 ; i < 8 ;++i)
   {
       //for uppercase
       if(arr[i] >= 65 && arr[i] <= 90)
       {
           count[arr[i] - 65]++;
           for(i = 1; i < 52 ;++i) {

               if (count[i] > count[max] ) {
                     max = i;
                }

            }
         //print uppercase letter
           printf("%c",max+65);
       }
       //for lowercase
       if(arr[i] >= 97 && arr[i] <=122)
       {
           count[arr[i] - 97]++;
           for(i = 1; i < 52 ;++i) {

               if (count[i] > count[max] ) {
                   max = i;
               }
           }
         //print lowercase letter
           printf("%c\n",max+97);
       }

   }



