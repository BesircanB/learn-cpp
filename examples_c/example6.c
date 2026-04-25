//Call by reference and value differnece in C
#include <stdio.h>
void callByValue(int x) {
   
    x = 20; // This will not change the original variable
     printf("Inside callByValue: x = %d\n", x);
}   

void callByReference(int *x) {
   
    *x = 20; // This will change the original variable
    printf("Inside callByReference: *x = %d\n", *x);
}   

int main() {
    int a = 10;
    printf("Before callByValue: a = %d\n", a);
    callByValue(a);
    printf("After callByValue: a = %d\n", a); // a will still be 10

    printf("Before callByReference: a = %d\n", a);
    callByReference(&a);
    printf("After callByReference: a = %d\n", a); // a will be changed to 20
    return 0;
}

