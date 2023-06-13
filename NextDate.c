#include <stdio.h>

int main() {

int year,day,month;
int leap=0;
printf("Enter date:");
scanf("%d %d %d",&day,&month,&year);

if(month==2)

   if(year%4==0 || year%400==0)

         leap=1;

   day++;
switch(month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
if(day<=31)
break;
case 4:
case 6:
case 9:
case 11:
if(day<=30)
break;

   case 2:
       if(day<=29 && leap==1)
           break;
       else if(day<=28)
           break;
   default:
       day=1;
       month++;
       if(month>12)
       {
           month=1;
           year++;
       }
}
printf("Next date is %d/%d/%d",day,month,year);
return 0;
}
