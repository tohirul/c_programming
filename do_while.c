#include <stdio.h>

int main() {
    printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    int num =0;
    int sum = 0;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
    } while (num > 0);

    printf("The sum of all the numbers is %d\n", sum);
    return 0;
}