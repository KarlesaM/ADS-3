// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  return 0; 
  int z = 0;
    int a = size - 1;
    for (int i = 0; i <= a; i++) {
        if (value == arr[i]) z = z + 1;
    }
    return z;
}
