#include <stdio.h>

void sort_array(int *arr, int len);

int main() {
      printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    // array of random number
    int num_array[] = {2345, 367, 73,  27,  738,  16, 8343, 22,  5858, 9543, 12,    23,
                       76,   356, 388, 161, 8538, 13, 884,  163, 894,  234,  59894, 151};

    int num_array_len = sizeof(num_array) / sizeof(num_array[0]);

    sort_array(num_array, num_array_len);

      printf("Sorted array in ascending order:\n");
    for (int i = 0; i < num_array_len; i++) {
          printf("%d ", num_array[i]);
        if (i == num_array_len - 1) {
              printf("\n");
        }
    }
    return 0;
}

void sort_array(int *arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp   = arr[j];
                arr[j]     = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}