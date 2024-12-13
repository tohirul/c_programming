#include <stdio.h>

typedef char name[50];
typedef int  age;
typedef char address[100];

typedef struct Person_info {
    name    person_name;
    age     person_age;
    address person_address;
} person;

int main() {
      printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here
    person person1 = {"John Doe", 30, "123 Main St"};
    person person2 = {"Jane Doe", 30, "123 Main St"};
    person person3 = {"James Smith", 24, "111 Elm St"};
    person person4 = {"Jane Smith", 24, "111 Elm St"};

    person people[] = {person1, person2, person3, person4};
    int people_arr_len = sizeof(people)/sizeof(people[0]);
    for (int i = 0; i < people_arr_len; i++) {
          printf("Person %d: Name: %s, Age: %d, Address: %s\n", i + 1, people[i].person_name,
               people[i].person_age, people[i].person_address);
    }
    return 0;
}