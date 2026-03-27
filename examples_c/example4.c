#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", (void*)ptr);
    printf("Size of int = %lu bytes\n", sizeof(int));
    printf("Address of next integer = %p\n", (void*)(ptr + 1));
    printf("Value at next integer = %d\n", *(ptr + 1)); // This may lead to undefined behavior
    printf("Address of second next integer = %p\n", (void*)(ptr + 2));
    

    char  c = 'A';
    char *cptr = &c;
    printf("Value of c = %c\n", c);
    printf("Address of c = %p\n", (void*)cptr);
    printf("Size of char = %lu bytes\n", sizeof(char));
    printf("Address of next char = %p\n", (void*)(cptr + 1));
    printf("Value at next char = %c\n", *(cptr + 1)); // This may lead to undefined behavior
    printf("Address of second next char = %p\n", (void*)(cptr + 2));
    return 0;
}
