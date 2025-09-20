#include <stdio.h>

int main(){
    // 3.0 + 1 will be:
    // a. Integer.
    // b. Floating point number.  [CORRECT]
    // c. Character.
    float a = 3.0;
    int b = 1;
    printf("3.0 + 1 will be Float bcz float + int is float.\nFinal value: %f\n", a+b);
    return 0;
}