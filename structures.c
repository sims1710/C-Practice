// DEFINE A STRUCTURE
#include <stdio.h>
int main(void) {
  struct Person{
    char firstName[25];
    int age;
  };
}

// INTIALISING STRUCTURES
#include <stdio.h>
int main(void) {
  struct Person {
    char firstName[25];
    char lastName[40];
    int age;
  };
  struct Person person1 = {"Ada", "Lovelace", 28};
  struct Person person2 = {"Marie", "Curie", 44};
}

// STRUCTURE DOT NOTATION
#include <stdio.h>
struct Person {
  char name[40];
  int age;
};

int main(void) {
  struct Person person1 = {"Martin"};
  struct Person person2 = {"Michelle"};
  // Write your code below
  person1.age = 57;
  person2.age = 27;

  printf("Hello my name is %s and I am %d years old.\n", person1.name, person1.age);
  printf("Hello my name is %s and I am %d years old.\n", person2.name, person2.age);
}

