#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n\n");
    int x, iteration = 0;
      printf("Enter a number: ");
      scanf("%d", &x);

    // Your code here
    for (int i = 0; i < 10; i++) {

        if (i == 5) {
            continue;
        }
        if (i > x)
            break;
        iteration++;
    }
      printf("The loop completed %d iterations\n", iteration);
    return 0;
}
