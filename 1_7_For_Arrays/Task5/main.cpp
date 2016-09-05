/*
 Найдите количество положительных элементов в данном массиве.
 Формат входных данных
 В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input:
 5
 1 -2 3 -4 5
 Sample Output:
 3
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
  
  int n;
  cin >> n;
  vector <int> a;
  //считывание
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    a.push_back(temp);
  }
  
  int count = 0;
  
  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      count++;
    }
  }
  
  cout << count;
  
  return 0;
}