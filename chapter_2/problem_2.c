#include <stdio.h>

int main(){
    // What data type will 3.0/8 – 2 return?
    // 3.0/8 = 0.375(float) [float/int -> float]
    // 0.375 -2 = -1.625(float) [float - int = float]
    int a = 8, b = 2;
    float c = 3.0;
    printf("The value of 3.0/8 - 2 is %f", c/a - b);
    return 0;
}