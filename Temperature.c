#include <stdio.h>
#include <math.h>
#include <ctype.h>

//create function to smallest temperature
void coldestDay(float temp[],int size)
{
    float coldestDay=temp[0];

    for(int i=0;i<size;++i)
    {
        if(coldestDay>temp[i])
        {
            coldestDay=temp[i];
        }

    }
    printf("Coldest day with temperature: %.2f",coldestDay);

}

int main() {

  //create array for every day in a week
   float temperature[7];
   float avg , sum = 0;
   float hottestDay=temperature[0];

   for(int i = 0; i < 7;++i)
   {
       printf("Enter temperature in Celsius for last week:");
       scanf("%f",&temperature[i]);

       sum+=temperature[i];
//search for gottest day 
       if(hottestDay<temperature[i])
       {
           hottestDay=temperature[i];
       }


   }
    avg=sum/7;
    printf("Average=%.2f\n",avg);
    printf("Hottest day with temperature:%.2f\n",hottestDay);
  //call function and print result
    coldestDay(temperature,7);


    return 0;

}
