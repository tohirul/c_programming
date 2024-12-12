#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    float temp;
    int   valid_input = 0;

    do {
          printf("Enter the temperature: ");
        if (scanf("%f", &temp) != 1) {
              printf("Error: Please enter a valid number\n");
            // Clear input buffer
            while (getchar() != '\n')
                ;
        } else {
            valid_input = 1;
        }
    } while (!valid_input);

    // use && || to check multiple conditions
    if (temp > 40 || temp < 10) {
          printf("It's very unbearable\n");
    } else if (temp >= 30 && temp <= 40) {
          printf("It's hot\n");
    } else if (temp >= 20 && temp < 30) {
          printf("It's warm\n");
    } else if (temp >= 10 && temp < 20) {
          printf("It's cold\n");
    } else {
          printf("It's very cold\n");
    }
    return 0;
}