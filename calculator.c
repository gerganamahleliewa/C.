#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int number1, number2;

printf("Enter number:");
scanf_s("%d", &number1);

printf("Enter number:");
scanf_s("%d", &number2);

char operation;
printf("Enter +, -, /, :");
scanf_s("%c", &operation);

switch (operation)
{
     case '+':
	     printf("Sum=%d", number1 + number2);
	      break;
    case '-':
	      printf("Submition=%d", number1 - number2);
	    break;
    case '*':
	   printf("Multi=%d", number1 * number2);
	   break;
     case '/':
      	printf("Del=%d", number1 / number2);
	    break;
     default:
	   printf("Error input!\nTry again!");
	   break;
}

return 0;
}
