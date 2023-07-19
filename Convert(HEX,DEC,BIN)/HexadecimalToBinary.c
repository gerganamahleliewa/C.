#include <stdio.h>
#include <math.h>
int main() {
// create string
   char hexadecimal[30];

   printf("Enter hexadecimal number:");
   scanf("%s",hexadecimal);
  //index of string
   int i=0;
  
//loop for end of string
while(hexadecimal[i]!='\0') {

    switch (hexadecimal[i]) {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'A':
        case 'a':
            printf("1010");
            break;
        case 'B':
        case 'b':
            printf("1011");
            break;
        case 'C':
        case 'c':
            printf("1100");
            break;
        case 'D':
        case 'd':
            printf("1101");
            break;
        case 'E':
        case 'e':
            printf("1110");
            break;
        case 'F':
        case 'f':
            printf("1111");
            break;
        default:
            printf("\nSomething wrong!\n");
             break;
    }
  //increment index with 1 
    i++;

}
    return 0;
}
