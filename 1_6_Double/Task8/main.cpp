/*
 Определите среднее значение всех элементов последовательности, завершающейся числом 0.
 
 Формат входных данных
 Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input:
 1
 7
 9
 0
 Sample Output:
 5.66666666667
 */

#include <iostream>
#include <iomanip>
#include <cmath>

int main(void)
{
  int N;
  int SUM = 0;
  int i = 0;
  
  while(true) {
    std::cin >> N;
    if (N == 0) break;
    SUM += N;
    i++;
  }
  
  std::cout << std::setprecision(11) << std::fixed;
  std::cout << (double)SUM / i;
  
  
  return 0;
}

