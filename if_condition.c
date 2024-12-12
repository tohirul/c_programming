#include <stdio.h>

int main() {
    printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are an adult\n");
    } else {
        printf("You are still a child\n");
    }

    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark >= 90) {
        printf("You are a genius\n");
    } else if (mark >= 80) {
        printf("You are a good student\n");
    } else if (mark >= 70) {
        printf("You are a normal student\n");
    } else if (mark >= 60) {
        printf("You are a bad student\n");
    } else {
        printf("You are a very bad student\n");
    }
    return 0;
}