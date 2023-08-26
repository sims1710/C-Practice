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

int usingSizeOf() {
  double arr[] = {1.0, 8, 2.27, 16.2, 2, 3.14, 12.6, 1.62, 6.54, 9, 11};
  int len = sizeof(arr)/sizeof(double);
  printf("%i\n", len);
  // Checkpoint 2 code goes here.
  for(int i = 0; i < len; i++){
    printf("%f\n", arr[i]);
  }
}
