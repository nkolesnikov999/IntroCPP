/*
 Даны вещественные числа a, b, c, d, e, f. Известно, что система линейных уравнений
 
 
 
 имеет ровно одно решение. Выведите два числа x и y, являющиеся решением этой системы.
 Формат входных данных
 Вводятся шесть чисел - коэффициенты уравнений системы.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input:
 1
 0
 0
 1
 3
 3
 Sample Output:
 3 3
 */

#include <iostream>
#include <iomanip>
#include <cmath>

int main(void)
{
  
  double A, B, C, D, E, F;
  
  std::cin >> A >> B >> C >> D >> E >> F;
  
  double X = (D*E - B*F) / (D*A - B*C);
  double Y = (A*F - C*E) / (A*D - C*B);
  
  std::cout << X << " " << Y;
  
  
  
  return 0;
}

