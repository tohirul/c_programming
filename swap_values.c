#include <stdio.h>

int main() {
    printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    int i = 70;
    int b = 20;
    int temp;

    temp = i;
    i    = b;
    b    = temp;

    printf("i = %d\n", i);
    printf("b = %d\n", b);

    // swap values using pointers
    int *p = &i;
    int *q = &b;
    int  temp2;
    temp2 = *p;
    *p    = *q;
    *q    = temp2;
    printf("i = %d\n", i);
    printf("b = %d\n", b);

    // swap characters
    char x = 'a';
    char y = 'b';

    char temp3;
    temp3 = x;
    x     = y;
    y    = temp3;
    printf("x = %c\n", x);
    printf("y = %c\n", y);

    // swap characters using pointers
    char *r = &x;
    char *s = &y;
    char  temp4;
    temp4 = *r;
    *r    = *s;
    *s    = temp4;
    printf("x = %c\n", x);
    printf("y = %c\n", y);

    return 0;
}