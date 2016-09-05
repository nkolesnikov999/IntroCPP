/*
 По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.
 
 Формат входных данных
 Вводится натуральное число.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input:
 50
 Sample Output:
 1 2 4 8 16 32
 */

#include <iostream>
#include <math.h>

int main() {
  int N;
  
  std::cin >> N;
  
  int i = 0;
  while(true) {
    if (pow(2,i) > N) break;
    std::cout << pow(2,i) << " ";
    i++;
  }
  
  return 0;
}