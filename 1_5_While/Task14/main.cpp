/*
 Дана последовательность натуральных чисел, завершающаяся числом 0. Определите, какое наибольшее число подряд идущих элементов этой последовательности равны друг другу.
 Формат входных данных
 Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input:
 1
 7
 7
 9
 1
 0
 Sample Output:
 2
 */

#include <iostream>

int main() {
  int N;
  int count = 0;
  int tempCount = 1;
  int last = 0;
  
  while(true) {
    std::cin >> N;
    if (N == 0) break;
    
    if (N != last) {
      last = N;
      tempCount = 1;
    } else {
      tempCount++;
    }
    if (tempCount > count) count = tempCount;
  }
  
  std::cout << count;
  return 0;
}