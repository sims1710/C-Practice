int fizzbuzz() {
  // Code here
  for (int i = 1; i <= 100; i++) {

  if (i % 15 == 0){
    printf("FizzBuzz\n");
  } else if (i % 3 == 0) {
    printf("Buzz\n");
  } else if (i % 5 == 0){
    printf("Buzz\n");
  } else {
    printf("%d\n", i);
  }
  }
  
}