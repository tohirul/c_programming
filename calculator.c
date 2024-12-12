#include <stdio.h>

void input_num(double *num1, double *num2);

void input_num(double *num1, double *num2) {
      printf("Enter the first number: ");
      scanf("%lf", num1);

      printf("Enter the second number: ");
      scanf("%lf", num2);
}

int main() {
      printf("Let's code some amazing things 🚀!!!\n\n");

    char   operator;
    double num1, num2;

      printf("Enter an operator (+, -, *, /): ");
      scanf(" %c", &operator);  // Add a space before %c to handle trailing newline

    switch (operator) {
        case '+':
            input_num(&num1, &num2);
              printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            input_num(&num1, &num2);
              printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            input_num(&num1, &num2);
              printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            input_num(&num1, &num2);
            if (num2 != 0) {
                  printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                  printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
              printf("Operator is not valid.\n");
            break;
    }

    return 0;
}
