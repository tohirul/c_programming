#include <stdio.h>

void input_num(double *num1, double *num2);

void birthdayWish(char name[], int age) {
    printf("Happy Birthday %s!\n For your %dth birthday", name,age);
}

int main() {
    printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    char name[100];
    int  age;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    birthdayWish(name, age);
    return 0;
}