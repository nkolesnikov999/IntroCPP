/*
 Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
 Формат входных данных
 Вводится натуральное число.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input 1:
 1
 Sample Output 1:
 YES
 
 Sample Input 2:
 2
 Sample Output 2:
 YES
 */

#include <iostream>
#include <math.h>

int main() {
  int N;
  
  std::cin >> N;
  
  int i = 0;
  while(true) {
    if (pow(2,i) > N) break;
    i++;
  }
  
  if (pow(2,i - 1) == N) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }
  return 0;
}