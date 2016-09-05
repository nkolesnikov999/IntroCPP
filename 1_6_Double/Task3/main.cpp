/*
 Дано положительное действительное число X. Выведите его дробную часть.
 
 Формат входных данных
 Вводятся положительное действительное число.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input:
 17.9
 Sample Output:
 0.9
 */

#include <iostream>
#include <cmath>

int main() {
  double N;
  
  std::cin >> N;
  double A = floor(N);
  
  std::cout << N - A;
  return 0;
}