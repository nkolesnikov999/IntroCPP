/*
 Последовательность Фибоначчи определяется так:
 
 F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
 
 По данному числу N определите N-е число Фибоначчи F(N).
 
 Формат входных данных
 Вводится натуральное число N.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input:
 6
 Sample Output:
 8 */

#include <iostream>

int main() {
  int N;
  int result = 0;
  int i=2, i1=1, i2=1;
  
  std::cin >> N;
  
  while(i < N) {
    result = i1 + i2;
    i1 = i2;
    i2 = result;
    i++;
  }
  
  if (N == 0) {
    std::cout << 0;
  } else if (N <= 2) {
    std::cout << 1;
  } else {
    std::cout << result;
  }
  return 0;
}