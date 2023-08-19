#include <stdio.h>
int declareVariable() {
  
  // Fix the missing data types
  int studentRank;
  double studentFeeTotal;
  char studentGradeLetter;
  
  // No need to make any changes below here, use these as a hint to how each variable above should be declared
 studentRank = 1;
 studentFeeTotal = 100.56;
 studentGradeLetter = 'A';

 printf("Student's Rank in class: %dst\n", studentRank);
 printf("Student's Total Fees: $%3.2f\n", studentFeeTotal);
 printf("Student's Grade: %c\n", studentGradeLetter);
}

#include <stdio.h>

int variableInPrint() {
  
 int ageLearnedToRide = 5;

 printf("I was %d years old when I learned to ride a bike.\n", ageLearnedToRide);
 printf("I hope I still remember how to ride.");
}

int initialiseVariable() {
  
  int numOfBooks = 2;
  char favLetter = 'r';
  char favDigit = '9';
  double costOfCandyBar = 0;

  printf("Number of books: %d\n", numOfBooks);
  printf("Your Favorite Letter is: %c\n", favLetter);
  printf("Your Favorite Digit is: %c\n", favDigit);
  printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);
}

