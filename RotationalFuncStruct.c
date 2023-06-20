#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//create struct
typedef struct {

   int numerator;
   int denominator;

}Rational;

//create function that increment element from struct
void increment(Rational r1)
{
    (r1).numerator = (r1).numerator + (r1).denominator;
    printf("Increment = %d/%d",r1.numerator,r1.denominator);
}

//create function that decrement element from struct
void decrement(Rational r1)
{
    r1.numerator = r1.numerator - r1.denominator;
    printf("\nDecrement = %d/%d\n",r1.numerator,r1.denominator);
}

//create function that add two numbers from struct
Rational Additional(Rational r1,Rational r2)
{
    Rational  result;
    result.denominator = r1.denominator * r2.denominator;
    result.numerator = r1.numerator * r2.denominator + r2.numerator * r1.denominator;
    return result;
}
//create function that subtraction two numbers from struct
Rational Subtraction(Rational r1,Rational r2)
{
    Rational  result;
    result.denominator = r1.denominator * r2.denominator;
    result.numerator = r1.numerator * r2.denominator - r2.numerator * r1.denominator;
    return result;
}
//create function that multiply two numbers from struct
void Multiplication(Rational r1,Rational r2)
{
    int resultN = r1.numerator * r2.numerator;
    int resultD = r1.denominator * r2.denominator;
    printf("Multiplication = %d/%d\n",resultN,resultD);
}
//create function that divise two numbers from struct
void Division(Rational r1,Rational r2)
{
    int resultN = r1.numerator * r2.denominator;
    int resultD = r1.denominator * r2.numerator;
    printf("Division = %d/%d\n",resultN,resultD);
}

//create function that search for smaller element of these two from struct
void Smaller(Rational r1, Rational r2)
{
    float sum1 = r1.numerator/ r1.denominator;
    float sum2 = r2.numerator / r2.denominator;
    if(sum1 < sum2)
    {
        printf("Smaller rational is = %d / %d\n",r1.numerator,r1.denominator);
    }
    else{
        printf("Smaller rational is = %d / %d\n",r2.numerator,r2.denominator);
    }

}
//create function that check if two numbers from struct are equal or not
void isEqual(Rational r1,Rational r2)
{
    if(r1.numerator == r2.numerator && r1.denominator == r2.denominator)
    {
        printf("They are Equal!");
    }
    else{
        printf("They are Not Equal!");
    }
}

int main() {
    //call all functions
    Rational r1={7,5},r2={5,4};

    increment(r1);
    
    decrement(r1);
    
    printf("Additional = %d/%d \n",Additional(r1,r2),r1.denominator*r2.denominator);
    
    printf("Subtraction = %d/%d\n ",Subtraction(r1,r2),r1.denominator*r2.denominator);
    
    Multiplication(r1,r2);
    
    Division(r1,r2);
    
    Smaller(r1,r2);
    
    isEqual(r1,r2);
  
    return 0;
}



