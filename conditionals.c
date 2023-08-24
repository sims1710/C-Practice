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

int elseClause() {

  int grade1 = 59;
  int grade2 = 90;

  if (grade1 > 60) {
    printf("Pass\n");
  } else {
    printf("Fail\n");
  }

  if (grade2 > 60) {
    printf("Pass\n");
  } else {
    printf("Fail\n");
  }

}

int elseIf() {
 
  double ph = 7;

  // Start the if, else if, else here:
  if (ph > 7) {
    printf("Basic\n");
  } else if (ph < 7) {
    printf("Acidic\n");
  } else {
    printf("Neutral");
  }
}

int switchStatement() {

  int number = 7;

  switch(number) {
    case 1:
      printf("Bulbasaur\n");
      break;
    case 2:
      printf("Ivysaur\n");
      break;
    case 3:
      printf("Venusaur\n");
      break;
    case 4:
      printf("Charmander\n");
      break;
    case 5:
      printf("Charmeleon\n");
      break;
    case 6:
      printf("Charizard\n");
      break;
    case 7:
      printf("Squirtle\n");
      break;
    case 8:
      printf("Wartortle\n");
      break;
    case 9:
      printf("Blastoise\n");
      break;
    default:
      printf("Unknown\n");
      break;
  }
}
