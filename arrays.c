#include <stdio.h>

int main() {
    printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    int intArr[5] = {1, 2, 3, 4, 5};
    int sum   = 0;
    int intArrLength = sizeof(intArr) / sizeof(intArr[0]);
    for (int i = 0; i < intArrLength; i++) {
        sum += intArr[i];
    }
    printf("The sum of the int array is %d\n", sum);

    double doubleArr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double average     = 0.0;
    int doubleArrLength = sizeof(doubleArr) / sizeof(doubleArr[0]);
    for (int i = 0; i < doubleArrLength; i++) {
        average += doubleArr[i];
    }
    average /= 5;
    printf("The average of the double array is %0.2f\n", average);

    
    return 0;
}