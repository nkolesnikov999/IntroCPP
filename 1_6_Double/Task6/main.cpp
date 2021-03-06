/*
 Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада в конце года. Вклад составляет X рублей Y копеек. Определите размер вклада через год.
 
 
 При решении этой задачи нельзя пользоваться условными инструкциями и циклами.
 
 Формат входных данных
 Программа получает на вход целые числа P, X, Y.
 Формат выходных данных
 Программа должна вывести два числа: величину вклада через год в рублях и копейках. Дробная часть копеек отбрасывается.
 Sample Input:
 12
 179
 0
 Sample Output:
 200 48
 */

#include <iostream>

int main() {
  double P, X, Y;
  
  std::cin >> P >> X >> Y;
  
  double SUM = (X * 100 + Y) * (100 + P) / 100;
  
  std::cout << (int)SUM / 100 << " " << (int)SUM % 100;
  return 0;
}