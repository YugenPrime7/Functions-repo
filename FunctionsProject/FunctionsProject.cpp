/***************************
* Название: Функции        *
* Вариант: 4               *
* Выполнил: Горбунов Роман *
***************************/
#include <iostream>
using namespace std;

// Были взяты следующие значения: ksize = 5; nsize = 4; F = -2 4 -6 8 -4; G = -3 -5 7 1
bool averageNegative(double arr[], int size, double& average) {
  double sum = 0;
  int count = 0;
  int i;

  for (i = 0; i < size; ++i) {
    if (arr[i] < 0) {
      sum += arr[i];
      ++count;
    }
  }

  if (count == 0) {
    return false;
  }

  average = sum / count;
  return true;
}

int main() {
  int ksize, nsize, i;

  cout << "Enter the dimensions of arrays F: ";
  cin >> ksize;

  cout << "Enter the dimensions of arrays G: ";
  cin >> nsize;
  
  if (ksize < 1 || ksize > 100 || nsize < 1 || nsize > 100) {
    cout << "Error";
    return 0;
  }

  double F[100], G[100];

  cout << "Enter the elements of array F: ";
  for (i = 0; i < ksize; i++) {
    cin >> F[i];

    if (F[i] < -1000 || F[i] > 1000) {
      cout << "Error";
      return 0;
    }
  }

  cout << "Enter the elements of array G: ";
  for (int i = 0; i < nsize; i++) {
    cin >> G[i];

    if (G[i] < -1000 || G[i] > 1000) {
      cout << "Error";
      return 0;
    }
  }

  double averageF, averageG;

  if (averageNegative(F, ksize, averageF)) {
    cout << "The arithmetic mean of the negative elements of F: " << averageF << endl;
  } else {
    cout << "There are no negative elements in array F" << endl;
  }

  if (averageNegative(G, nsize, averageG)) {
    cout << "The arithmetic mean of the negative elements of G: " << averageG << endl;
  } else {
    cout << "There are no negative elements in array G" << endl;
  }

  return 0;
}