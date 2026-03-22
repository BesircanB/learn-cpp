#include <stdio.h>

int main() {
    int a;
    int *ptr;


    
    printf("You entered: %d\n", a);
    
    
    ptr=&a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("The value of a is: %d\n", *ptr);
    printf("The address of a is: %p\n", (void*)ptr);
    printf("The address of ptr is: %p\n", (void*)&ptr);
    printf("The address of a is: %p\n", (void*)&a);


    *ptr=15;
    printf("The value of ptr is: %d\n", *ptr);
    return 0;
}