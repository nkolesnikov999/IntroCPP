/*
 По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “диагоналями”, как показано в примере.
 Формат входных данных
 Вводятся два числа n и m, не превышающие 100.
 Формат выходных данных
 Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
 Sample Input:
 3 5
 Sample Output:
 1   2   4   7  10
 3   5   8  11  13
 6   9  12  14  15

 */

#include <iostream>
#include <limits.h>

using namespace std;

int main() {
  
  int n, m;
  
  cin >> n >> m;
  
  int a[n][m];
  
  int temp = 1;
  int index = 0;
  
  while (index < n+m) {
    for (int i = 0; i < n; i++) { //перебор строк
      for (int j = 0; j < m; j++) { //перебор столбцов
        if (i+j == index) {
          a[i][j] = temp;
          temp++;
        }
      }
    }
    index++;
  }
  
  for (int i = 0; i < n; i++) { //перебор строк
    for (int j = 0; j < m; j++) {
      printf("%4d", a[i][j]);
    }
    cout << endl;
  }
  
  return 0;
}