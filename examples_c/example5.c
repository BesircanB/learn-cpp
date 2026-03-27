// Pointer to pointer example in C
#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a; // Pointer to an integer
    int **pptr = &ptr; // Pointer to a pointer to an integer
    int ***ppptr = &pptr; // Pointer to a pointer to a pointer to an integer
    


    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", (void*)&a);
    printf("Value of ptr (address of a) = %p\n", (void*)ptr);
    printf("Value at ptr (value of a) = %d\n", *ptr);
    printf("Value of pptr (address of ptr) = %p\n", (void*)pptr);
    printf("Value at pptr (value of ptr) = %p\n", (void*)*pptr);
    printf("Value at *pptr (value of a) = %d\n", **pptr);
    printf("Value at pptr (value of ptr) = %p\n", (void*)*pptr);
    printf("Value at *pptr (value of a) = %d\n", **pptr);
    printf("Value at ppptr (value of pptr) = %p\n", (void*)*ppptr);
    printf("Value at *ppptr (value of ptr) = %p\n", (void*)**ppptr);
    printf("Value at **ppptr (value of a) = %d\n", ***ppptr);
    return 0;
}