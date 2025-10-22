#include <stdio.h>
#define PIE 3.14

float radius;

int main(){
    printf("Enter the radius of your circle:");
    scanf("%f", &radius);
    float area = PIE * radius * radius;
    printf("The area of your circle is:%f\n", area);
    return 0;
};
