#include <stdio.h>

char first[20];
char second[20];

int main(){
    printf("Enter your first Name:");
    scanf("%s", &first);
    printf("Enter your Second Name:");
    scanf("%s", &second);
    printf("Hello! %s %s\n",first, second);
    return 0;
}
