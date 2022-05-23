// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
  int c = 0;
  for (int a = 0; a < size; a++)
    if (arr[a] == value)
      c++;
  return c;
}
