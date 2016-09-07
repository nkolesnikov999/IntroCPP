/*
 По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”, как показано в примере.
 Формат входных данных
 Вводятся два числа n и m, каждое из которых не превышает 30.
 Формат выходных данных
 Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
 Sample Input:
 3 5
 Sample Output:
 1   2   3   4   5
 10   9   8   7   6
 11  12  13  14  15
 */

#include <iostream>
#include <limits.h>

using namespace std;

int main() {
  
  int n, m;
  
  cin >> n >> m;
  
  int a[n][m];
  
  int temp = 1;
  
  for (int i = 0; i < n; i++) { //перебор строк
    for (int j = 0; j < m; j++) { //перебор столбцов
      a[i][j] = temp;
      temp++;
    }
  }
  
  for (int i = 0; i < n; i++) { //перебор строк
    if (i%2 == 0) {
      for (int j = 0; j < m; j++) {
        printf("%4d", a[i][j]);
      }
    } else {
      for (int j = m - 1; j >= 0; j--) {
        printf("%4d", a[i][j]);
      }
    }
    
    cout << endl;
  }
  
  return 0;
}