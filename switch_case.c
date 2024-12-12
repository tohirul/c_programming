#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    char grade;
      printf("Enter your grade: ");
      scanf("%c", &grade);

    switch (grade) {
        case 'A':
              printf("You are a genius\n");
            break;
        case 'B':
              printf("You are a good student\n");
            break;
        case 'C':
              printf("You are a normal student\n");
            break;
        case 'D':
              printf("You are a bad student\n");
            break;
        case 'F':
              printf("You have failed\n");
            break;
        default:
              printf("You are a very bad student\n");
    }
    return 0;
}