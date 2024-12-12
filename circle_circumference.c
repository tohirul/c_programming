#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    float radius;
    float pi = 3.141659;

      printf("Enter the radius of the circle: \n");
      scanf("%f", &radius);

    float circumference = 2 * pi * radius;
      printf("The circumference of the circle is %0.2f\n", circumference);
    return 0;
}