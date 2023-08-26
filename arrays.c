int creatingAndInitialisingArrays() {
  double q[5];
  int evens[] = {2, 4, 6, 8, 10};
}

int loopingThroughArrays() {
  int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 22, 26, 28, 29};
  int arr2[100];
    
  // Code for Checkpoint 1 goes here
  for(int i = 0; i < 20; i++){ // for loop
    printf("%i\n", arr[i]); // Access element at index i in arr and print
  }
    
  // Code for Checkpoint 2 goes here
  for(int i = 0; i < 100; i++){
    arr2[i] = i + 4;
  }
}
