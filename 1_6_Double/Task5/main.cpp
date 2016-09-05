/*
 Даны длины сторон треугольника. Вычислите площадь треугольника.
 Формат входных данных
 Вводятся три положительных числа.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input:
 3
 4
 5
 Sample Output:
 6
 */

#include <iostream>
#include <cmath>

int main()
{
  double A, B, C;
  
  std::cin >> A >> B >> C;
  
  double P = (A + B + C) / 2;
  
  std::cout << sqrt(P*(P-A)*(P-B)*(P-C));
  return 0;
}