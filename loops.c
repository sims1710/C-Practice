int whileLoop() {

  int i = 9;
  int square = 0;

  // Write a while loop here:
  while (i >= 0){
    square = i * i;
    printf("%d\t%d\n", i, square);
    i --;
  }

}

int doWhileLoop() {

  int i = 11;

  do{
    printf("%d\n", i);
    i++;
  } while (i < 10);

}
