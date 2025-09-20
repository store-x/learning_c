#include <stdio.h>

int main(){
    // Write a program to check whether a number is divisible by 97 or not.
    
    int number;
    printf("Please enter a number to check whether it is divisible by 97 or not: ");
    scanf("%d", &number);

    printf("Then value of %d%%97 is: %d\n", number, number%97); // If output is 0 -> divisible
    return 0;
}