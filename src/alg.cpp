// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
int a = 0, b = size - 1, middle, n = 0;
while (a < b) {
middle = (a + b) / 2;
if (arr[middle] < value)
a = middle + 1;
else
b = middle;
}
if (arr[a] == value) {
while (arr[a] == value) {
n++;
a++;
}
}
if (n)
return n;
else
return 0; 
}
