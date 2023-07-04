#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


union student{
    char letterGrade;
    float exactGrade;
    int roundedGrade;
}var1,var2;

int main(){
  
//print result for every student
    var1.letterGrade = 'B';
    printf("Letter Grade: %c\n",var1.letterGrade);
    var1.roundedGrade = 5;
    printf("Rounded Grade : %d\n",var1.roundedGrade);
    var1.exactGrade = 5.23;
    printf("Exact Grade : %.2f\n",var1.exactGrade);


    var2.letterGrade = 'A';
    printf("Letter Grade: %c\n",var2.letterGrade);
    var2.roundedGrade = 6;
    printf("Rounded Grade : %d\n",var2.roundedGrade);
    var2.exactGrade = 5.55;
    printf("Exact Grade : %.2f\n",var2.exactGrade);

    return 0;
}
