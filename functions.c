#include <stdio.h>

int sum(int a, int b);

int sum(int a, int b) {
    return a + b;
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    int x, y, res;
      printf("Enter the first number: ");
      scanf("%d", &x);
      printf("Enter the second number: ");
      scanf("%d", &y);

    res = sum(x, y);
      printf("The sum of %d and %d is %d\n", x, y, res);
    return 0;
}