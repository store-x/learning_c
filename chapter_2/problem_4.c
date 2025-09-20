#include <stdio.h>

int main(){
    // Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
    int x=2, y=3, z=3, k=1;
    // PRECEDENCE of 3*x/y
    int a = 3*x/y; // ASSOCIATIVITY[left to right] -> Multiply(*) first then divide(/)
    int b = a - z; // ASSOCIATIVITY[left to right] -> a-z then add k
    int c = b+k; // finally add k
    printf("The value of equation 3*x/y – z+k after evaluation in C: %d\n", c);
    return 0;
};