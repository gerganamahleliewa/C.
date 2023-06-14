#include <stdio.h>
#include <math.h>
int main() {

   int num;
   printf("Enter number:");
   scanf("%d",&num);
   
  
  for(int j=1;j<=num;++j) {
    for (int i = 1; i <= j; ++i) {
        printf("%d", i);
    }
    printf("\n");
}
    return 0;
}
