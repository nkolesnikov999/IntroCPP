/*
 По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
 Формат входных данных
 Вводятся два числа n и m, не превышающие 100.
 Формат выходных данных
 Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
 Sample Input:
 4 5
 Sample Output:
 1   2   3   4   5
 14  15  16  17   6
 13  20  19  18   7
 12  11  10   9   8
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
      a[i][j] = 0;
    }
  }
  
  int temp = 1;
  int srow = 0;
  int scol = 0;
  int erow = n-1;
  int ecol = m-1;
  
  while (true) {
    for (int j = scol; j <= ecol; j++) { //перебор столбцов
      a[srow][j] = temp++;
    }
    if (srow != erow) {
      srow++;
    } else {
      break;
    }
    
    for (int i = srow; i <= erow; i++) { //перебор строк
      a[i][ecol] = temp++;
    }
    if (scol != ecol) {
      ecol--;
    } else {
      break;
    }
    
    for (int j = ecol; j >= scol; j--) { //перебор столбцов
      a[erow][j] = temp++;
    }
    if (srow != erow) {
      erow--;
    } else {
      break;
    }
    
    for (int i = erow; i >= srow; i--) { //перебор строк
      a[i][scol] = temp++;
    }
    if (scol != ecol) {
      scol++;
    } else {
      break;
    }
  }
  
  for (int i = 0; i < n; i++) { //перебор строк
    for (int j = 0; j < m; j++) {
      printf("%4d", a[i][j]);
    }
    cout << endl;
  }
  
  return 0;
}