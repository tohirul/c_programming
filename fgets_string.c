#include <stdio.h>
#include <string.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    char name[100];
      printf("Enter your name: ");
    fgets(name, 100, stdin);
    name[strlen(name) - 1] = '\0';
    while (strlen(name) == 0) {
          printf("You didn't enter your name. What's your name?: ");
        fgets(name, 100, stdin);
        name[strlen(name) - 1] = '\0';
    }
      printf("Hello, %s!\n", name);
    return 0;
}