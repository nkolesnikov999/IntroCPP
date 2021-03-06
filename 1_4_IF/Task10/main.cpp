/*
 Шахматный слон ходит по диагонали. Даны две различные клетки шахматной доски, определите, может ли слон попасть с первой клетки на вторую одним ходом.
 Формат входных данных
 Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
 Формат выходных данных
 Программа должна вывести YES, если из первой клетки ходом слона можно попасть во вторую или NO в противном случае.
 Sample Input:
 4
 4
 5
 5
 Sample Output:
 YES
 */

#include <iostream>

int main() {
  int C1, R1, C2, R2 = 0;
  
  std::cin >> C1 >> R1 >> C2 >> R2;
  
  if ( abs(C1 - C2) == abs(R1 - R2)) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }
  
  return 0;
}