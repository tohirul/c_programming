#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    int arr2d[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows        = sizeof(arr2d) / sizeof(arr2d[0]);
    int cols        = sizeof(arr2d[0]) / sizeof(arr2d[0][0]);
    int sum         = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr2d[i][j];
        }
    }
      printf("The sum of the 2D array is %d\n", sum);
    return 0;
}