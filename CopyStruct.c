#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//create struct
typedef struct{
    char name[10];
    int age;
    int id;
}Employee;

int main() {
  
//create struct variables
    Employee emp1;
    Employee emp2 = {"Jack",25,123};
  
//copy one from another
    emp1=emp2;
  //print them
    printf("%s %d %d\n",emp1.name,emp1.age,emp1.id);
    printf("%s %d %d",emp2.name,emp2.age,emp2.id);

    return 0;
}
