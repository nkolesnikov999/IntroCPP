/*
 Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.
 Формат входных данных
 Вводится положительное действительное число.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input:
 1.79
 Sample Output:
 7
 */

#include <iostream>
#include <cmath>

int main(void)
{
  double N;
  
  std::cin >> N;
  int A = floor(N * 10);
  
  std::cout << (A % 10);
  
  
  return 0;
}