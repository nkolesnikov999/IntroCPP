/*
 Дано три числа. Упорядочите их в порядке неубывания.
 Формат входных данных
 Вводятся три числа.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input:
 1
 2
 1
 Sample Output:
 1 1 2
 */

#include <iostream>

int main() {
  int A, B, C, D1, D2, D3 = 0;
  
  std::cin >> A >> B >> C;
  
  if (A > B) {
    D2 = A;
    D1 = B;
  } else {
    D2 = B;
    D1 = A;
  }
  
  if (C < D1) {
    D3 = D2;
    D2 = D1;
    D1 = C;
  } else if (C < D2) {
    D3 = D2;
    D2 = C;
  } else {
    D3 = C;
  }
  
  
  std::cout << D1 << " " << D2 << " " << D3;
  
  return 0;
}