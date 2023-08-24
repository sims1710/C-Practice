int coinFlip() {
  // Create a number that’s 0 or 1
  srand (time(NULL));
  int coin = rand() % 2;

  // If number is 0: Heads
  // If it is not 0: Tails
  if (coin == 0) {
    printf("Heads\n");
  } else {
    printf("Tails\n");
  }
}

int ifStatement() {

  int grade1 = 90;
  int grade2 = 59;

  if (grade1 > 60){
    printf("Pass\n");
  }

  if (grade2 < 60){
    printf("Fail\n");
  }

}

int workingWithOperators() {

  int a = 10;
  int b = -5;

  if (a > 0 || b > 0) {
    printf("Positive\n");
  }

  if (a > 0 && !(b > 0)) {
    printf("Positive too");
  }

}
