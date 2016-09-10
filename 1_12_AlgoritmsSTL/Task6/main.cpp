/*
 Выведите все исходные точки в порядке возрастания их расстояний от начала координат.
 
 Входные данные
 
 Программа получает на вход набор точек на плоскости. Сначала задано количество точек n, затем идет последовательность из n строк, каждая из которых содержит два числа: координаты точки. Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 103.
 
 Выходные данные
 
 Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.
 
 Sample Input:
 2
 1 2
 2 3
 Sample Output:
 1 2
 2 3
 */

include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct man {
  int x;
  int y;
};

bool cmp(man a, man b) {
  return a.x*a.x + a.y*a.y < b.x*b.x + b.y*b.y;
}

int main() {
  
  int n;
  cin >> n;
  
  vector<man> intVec(n);
  
  for (int i = 0; i < n; i++) {
    int x_temp;
    int y_temp;
    cin >> x_temp >> y_temp;
    man struct_temp; // временная структура
    struct_temp.x = x_temp;
    struct_temp.y = y_temp;
    intVec[i] = struct_temp;
  }
  
  sort(intVec.begin(), intVec.end(), cmp);
  
  for (auto now : intVec) {
    cout << now.x << " " << now.y << "\n";
  }
  
  return 0;
}