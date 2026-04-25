// pointers and arrays

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // ptr points to the first element of the array

    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        
        printf("Address of ptr: %p\n",&arr[i]);
        printf("Address of ptr: %p\n",arr+i);
        printf("Value of ptr: %d\n",arr[i]);
        printf("Address of ptr: %p\n",((arr+i)));
        ptr++; // Move the pointer to the next element
    }
    printf("\n");

    return 0;
}
