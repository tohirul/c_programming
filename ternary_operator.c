#include <stdio.h>

int fid_max(int num1, int num2);

int fid_max(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    int num1, num2;
      printf("Enter the first number: ");
      scanf("%d", &num1);
      printf("Enter the second number: ");
      scanf("%d", &num2);

      printf("The maximum number is %d\n", fid_max(num1, num2));
    return 0;
}