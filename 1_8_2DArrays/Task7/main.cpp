/*
 Дано число n, не превосходящее 10, и массив размером n × n. Проверьте, является ли этот массив симметричным относительно главной диагонали. Выведите слово “YES”, если массив симметричный, и слово “NO” в противном случае.
 Sample Input:
 3
 0 1 2
 1 2 3
 2 3 4
 Sample Output:
 YES
 */

#include <iostream>
#include <limits.h>

using namespace std;

int main() {
  
  int n;
  
  cin >> n;
  
  int a[n][n];
  
  for (int i = 0; i < n; i++) { //перебор строк
    for (int j = 0; j < n; j++) { //перебор столбцов
      cin >> a[i][j];
    }
  }
  
  bool sim = true;
  
  for (int i = 0; i < n; i++) { //перебор строк
    for (int j = 0; j < n; j++) {
      if (a[i][j] != a[j][i]) sim = false;
    }
  }
  
  //вывод
  if (sim) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  
  return 0;
}