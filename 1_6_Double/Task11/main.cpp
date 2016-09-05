/*
 Даны действительные коэффициенты a, b, c, при этом a ≠ 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
 
 Формат входных данных
 Вводятся три действительных числа.
 Формат выходных данных
 Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.
 Sample Input:
 1
 -1
 -2
 Sample Output:
 -1 2
 */

#include <iostream>
#include <iomanip>
#include <cmath>

int main(void)
{
  
  double A, B, C;
  
  std::cin >> A >> B >> C;
  
  double D = B*B - 4*A*C;
  
  if (D > 0) {
    
    double X1 = (-B - sqrt(D)) / (2 * A);
    double X2 = (-B + sqrt(D)) / (2 * A);
    
    if (X2 > X1) {
      std::cout << X1 << " " << X2;
    } else {
      std::cout << X2 << " " << X1;
    }
    
  } else if (D == 0) {
    std::cout << -B / (2 * A);
  }
  
  return 0;
}