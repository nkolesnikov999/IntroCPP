/*
 Даны три натуральных числа A, B, C. Определите, существует ли треугольник с такими сторонами. Если треугольник существует, выведите строку YES, иначе выведите строку NO.
 Треугольник — это три точки, не лежащие на одной прямой.
 Формат входных данных
 Вводятся три числа.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input:
 3
 4
 5
 Sample Output:
 YES
 */

#include <iostream>

int main() {
  double A, B, C, MAX, SUM = 0;
  
  std::cin >> A >> B >> C;
  
  if (A > B) {
    MAX = A;
  } else {
    MAX = B;
  }
  
  if (C > MAX) {
    MAX = C;
  }
  
  if(A != B && B != C && A != C) {
    
    if (A != MAX) {
      SUM += A;
    }
    
    if (B != MAX) {
      SUM += B;
    }
    
    if (C != MAX) {
      SUM += C;
    }
  }
  
  if (A == B && A == MAX) {
    SUM = A + C;
  }
  
  if (B == C && B == MAX) {
    SUM = A + C;
  }
  
  if (A == C && A == MAX) {
    SUM = A + B;
  }
  
  if (MAX < SUM) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }
  return 0;
}