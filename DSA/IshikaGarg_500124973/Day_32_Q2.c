
#include <stdio.h>

int findUnique(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    int arr1[] = {2, 3, 2};
    int arr2[] = {5, 1, 1, 5, 7};
    printf("Unique in arr1: %d\n", findUnique(arr1, 3));   
    printf("Unique in arr2: %d\n", findUnique(arr2, 5));  
    return 0;
}
