#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    int num = 10;
    printf("The number is %d\n", num);

    char user_name[5] = "Tohir";
    printf("The user name is %s\n", user_name);

    int user_age;
    printf("Enter your age: ");
    scanf("%d", &user_age);
    printf("Your age is %d\n", user_age);

    float cgpa;
    printf("Enter your cgpa: ");
    scanf("%f", &cgpa);

    printf("Your cgpa is %f\n", cgpa);

    /**
     * Indicates whether the user is married or not.
     * A value of 1 means the user is married, 0 means the user is not married.
     */
    bool is_married = true;
    printf("You are married: %s\n", is_married ? "true" : "false");
    return 0;
}