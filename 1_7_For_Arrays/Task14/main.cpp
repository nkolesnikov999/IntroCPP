/*
 Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке, в котором они встречаются в списке.
 Формат входных данных
 В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input 1:
 6
 1 2 2 3 3 3
 Sample Output 1:
 1

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
  
  bool match = false;
  
  for (int i = 0; i < n; i++) {
    match = false;
    for (int j = 0; j < n; j++) {
      if (a[i] == a[j] && i != j) match = true;
    }
    if (!match) cout << a[i] << " ";
  }
  
  return 0;
}