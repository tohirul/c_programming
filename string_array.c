#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    char cars[][10] = {"BMW", "Mercedes", "Toyota", "Tesla", "Ford", "Ferrari"};

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++) {
          printf("%s\n", cars[i]);
    }
    return 0;
}