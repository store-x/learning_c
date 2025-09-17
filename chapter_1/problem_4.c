#include <stdio.h>

int main(){
    int principal=100, years=2;
    float rate=5.5, si;

    si=(principal*rate*years)/100;

    printf("The simple intrest for principal amount %d at the rate of %f for %d years is %f\n", principal, rate, years, si);
    
    return 0;
}