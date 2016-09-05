/*
 Выведите значение наименьшего из всех положительных элементов в массиве. Известно, что в массиве есть хотя бы один положительный элемент.
 Формат входных данных
 В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input:
 5
 5 -4 3 -2 1
 Sample Output:
 1
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
  
  int n;
  cin >> n;
  vector <int> a;
  
  
  int max = 0;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    a.push_back(temp);
    if (temp > max) max = temp;
  }
  
  int min = max;
  
  for (int i = 0; i < n; i++) {
    if (a[i] > 0 && a[i] < min) min = a[i];
  }
  
  cout << min;
  
  return 0;
}