/*
 Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
 Формат входных данных
 В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input 1:
 5
 0 1 2 3 4
 Sample Output 1:
 1
 */

#include <iostream>
#include <vector>
#include <limits.h>


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
  
  bool set = false;
  int min = INT_MAX;
  
  for (int i = 0; i < n; i++) {
    if (abs(a[i]) % 2 == 1 && a[i] <= min) {
      min = a[i];
      set = true;
    }
  }
  
  if (set) {
    cout << min;
  } else {
    cout << 0;
  }
  
  return 0;
}