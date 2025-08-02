#include <stdio.h>


// with temp
void swap_t(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// without temp
void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

 // Swap using bitwise XOR
//    void swap(int *a, int *b){
//     a = a ^ b;  // Step 1: a now becomes the XOR of a and b
//     b = a ^ b;  // Step 2: b becomes the original a
//     a = a ^ b;  // Step 3: a becomes the original b
//    }

int main() {
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}
