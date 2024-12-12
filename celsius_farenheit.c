#include <stdio.h>

int main() {
    printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    char Unit;
    float temperature;

    printf("Is hthe temperature in (F) or (C)? ");
    scanf(" %c", &Unit);

    if (Unit == 'F') {
        printf("Enter the temperature in Farenheit: ");
        scanf("%f", &temperature);
        temperature = (float)(temperature - 32) / 1.8;
        printf("The temperature in Celsius is: %0.2f\n", temperature);
    } else if (Unit == 'C') {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &temperature);
        temperature = (float)(temperature * 1.8) + 32;
        printf("The temperature in Farenheit is: %0.2f\n", temperature);
    } else {
        printf("%c is not a valid unit of measurement\n", Unit);
    }
    return 0;
}