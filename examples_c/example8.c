//arrays as function arguments
#include <stdio.h>

int SumofArray1(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Add each element of the array to the sum
    }
    return sum; // Return the total sum
}

void SumofArray2(int* arr) {
    int sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Add each element of the array to the sum
    }
    printf("Sum of array elements: %d\n", sum); // Print the total sum
}



int main() {
    int myArray[] = {10, 20, 30, 40, 50};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    
    int sum = SumofArray1(myArray, size); // Pass the array and its size to the function
    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}
