// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
  int n = 0;
    int k = size - 1;
    for (int i = 0; i <= k; i++) {
        if (value == arr[i]) n = n + 1;
    }
    return n;
}
