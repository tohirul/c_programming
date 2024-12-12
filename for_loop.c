#include <stdio.h>

int main() {
    printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    int arr_marks[6] = {10, 20, 30, 40, 50, 60};

    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum += arr_marks[i];
    }

    printf("The sum of all the marks is %d\n", sum);
    return 0;
}