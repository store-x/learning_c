#include <stdio.h>

int main(){
    int length, breadth;

    printf("Please enter length of your rectangle:\n");
    scanf("%d", &length);

    printf("Please enter breadth of your rectangle:\n");
    scanf("%d", &breadth);

    printf("The area of given rectangle with length %d and breadth %d is: %d\n", length, breadth, length*breadth);
    return 0;
}