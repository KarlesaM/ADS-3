// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
int c = 0, z = 0, n = size - 1;
while (z < n) {
int m = (z + n) / 2;
if (arr[m] == value) {
c++;
int s = m;
while (arr[--m] == value) {
c++;
}
while (arr[++s] == value) {
c++;
}
return c;
} else if (arr[m] > value) {
n = m;
} else {
b = m + 1;
}
}
return 0; // если ничего не найдено
}
