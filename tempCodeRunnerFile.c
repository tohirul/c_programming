#include <stdio.h>

int main() {
    printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    int intArr[5] = {1, 2, 3, 4, 5};
    int sum   = 0;
    for (int i = 0; i < 5; i++) {
        sum += intArr[i];
    }
    printf("The sum of the int array is %d\n", sum);

    double doubleArr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double average     = 0.0;
    for (int i = 0; i < 5; i++) {
        average += doubleArr[i];
    }
    average /= 5;
    printf("The average of the double array is %f\n", average);
    return 0;
}