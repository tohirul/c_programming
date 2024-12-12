#include <stdio.h>

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    greet(name);   
    return 0;
}