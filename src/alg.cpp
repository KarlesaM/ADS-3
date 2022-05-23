// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
int a = 0, b = 0, c = size - 1;
while (b < c) {
int k = (b + c) / 2;
if (arr[k] == value) {
a++;
int s = k;
while (arr[--k] == value) {
a++;
}
while (arr[++s] == value) {
a++;
}
return a;
} else if (arr[k] > value) {
c = k;
} else {
b = k + 1;
}
}
return 0; // если ничего не найдено
}
