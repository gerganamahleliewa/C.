#include <stdio.h>
#include <math.h>
int main() {

int grade,sum=0,avg,count=0;

//while user input is -1 ,then loop will stop
while(grade!=-1)
{
    printf("Enter grade:");
    scanf("%d",&grade);
    //count number of grades
    count++;
    sum+=grade;
}
//average grades
avg=sum/count;
printf("Average=%d",avg);

    return 0;
}
