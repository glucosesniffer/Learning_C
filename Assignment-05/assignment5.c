#include <stdio.h>

int seconds, hours, minutes;

int main(){
    printf("Enter number of seconds: ");
    scanf("%d", &seconds);
    printf("%d seconds equals to", seconds);
    minutes = seconds / 60;
    hours = minutes / 60;
    printf(" %d minutes, %d hours\n", minutes, hours);
    return 0;
}
