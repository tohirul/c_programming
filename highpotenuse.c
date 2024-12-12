#include <math.h>
#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    double A, B, C;

      printf("Enter the first side of the triangle: ");
      scanf("%lf", &A);

      printf("Enter the second side of the triangle: ");
      scanf("%lf", &B);

    C = sqrt(A * A + B * B);
      printf("The highpotenuse is: %lf\n", C);
    return 0;
}