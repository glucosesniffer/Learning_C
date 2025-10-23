#include <stdio.h>

#define PIE 3.14

int main(){

    int radius;
    float area;
    printf("Enter radius of circle:");
    scanf("%d", &radius);
    area = PIE *(radius * radius);
    printf("area of circle:%f\n", area);

    return 0;
}
