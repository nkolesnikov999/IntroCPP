/*
 Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
 Формат входных данных
 В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input:
 6
 1 2 2 3 3 3
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
  
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    a.push_back(temp);
  }
  
  int count = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] != a[i-1]) {
      count++;
    }
  }
  
  cout << count;
  
  return 0;
}