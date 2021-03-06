/*
 Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j
 Формат входных данных
 Программа получает на вход размеры массива n и m, не превосходящие 100, затем элементы массива, затем числа i и j.
 Формат выходных данных
 Выведите результат.
 Sample Input:
 3 4
 11 12 13 14
 21 22 23 24
 31 32 33 34
 0 1
 Sample Output:
 12 11 13 14
 22 21 23 24
 32 31 33 34
 */

#include <iostream>
#include <limits.h>

using namespace std;

int main() {
  
  int n, m;
  
  cin >> n >> m;
  
  int a[n][m];
  
  for (int i = 0; i < n; i++) { //перебор строк
    for (int j = 0; j < m; j++) { //перебор столбцов
      cin >> a[i][j];
    }
  }
  
  int k, l;
  cin >> k >> l;
  
  for (int i = 0; i < n; i++) { //перебор строк
    int temp = a[i][k];
    a[i][k] = a[i][l];
    a[i][l] = temp;
  }
  
  //вывод
  for (int i = 0; i < n; i++) { //перебор строк
    for (int j = 0; j < m; j++) { //вывод одной строки
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  
  return 0;
}