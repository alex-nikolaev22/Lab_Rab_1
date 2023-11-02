//вывод массива рандомных чисел размерностью n
#include <iostream>
#include <stdlib.h>

using namespace std;

int i,n;

int main()

{
  setlocale(LC_ALL, "RU");
  setlocale(LC_ALL, ".UTF8");
  cout << "Введите размер массива ";
  cin >> n;
  int *matrix {new int[n]};
  for (i = 0; i < n; i++)
  {
    matrix [i] = rand();
    cout << matrix [i] << endl;
  }
}