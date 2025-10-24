#include <stdio.h>


int main(void)
{

int numerator, denominator;

printf("enter numerator:");
scanf("%d", &numerator);
printf("enter a denominator:");
scanf("%d", &denominator);
if(numerator % denominator == 0){
    printf("no remainder");
}
else{
    printf("remainder\n");
}

  return 0;
}
