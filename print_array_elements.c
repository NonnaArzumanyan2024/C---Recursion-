#include <stdio.h>

void print_array_elements(int arr[], int size, int index) {
    if (index >= size) { 
        return;
    } else {
        printf("%d ", arr[index]); 
        print_array_elements(arr, size, index + 1);
        //If we switch the places where the function is called and printed, it will print the array elements in the reverse order.
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements are: ");
    print_array_elements(arr, size, 0); 
    printf("\n");
    return 0;
}
