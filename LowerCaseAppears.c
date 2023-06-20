#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>



int main() {

//26 alpha
    int count[26]={0},i;
    char arr[8 ]={'k','i','b','r','c','k','z','m'};
    int max=count[0];

   for(int i = 0 ;i < 8 ;++i)
   {
   //0 - 97 => 'a' is on index 0 and so on.... to 'z'
       count[arr[i]-97]++;
   }
    printf("%d",count[2]);


   for(i = 1; i < 26;++i)
   {
       if(count[i] > max)
       {
           max=i;
       }
   }
printf("Character with max appears is %c",max+97);
    return 0;
}

