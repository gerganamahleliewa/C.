#include <stdio.h>

int main()
{
  int number;
  
  printf("Enter hexadecimal number:");
  
  //input from the user will be hexadecima, that is why is %x
  scanf("%x",&number);
  
  //print in decimal, that is why is with %d
  printf("%d",number);
  
  return 0;
}
