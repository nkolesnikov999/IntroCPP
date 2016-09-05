/*
 N кеглей выставили в один ряд, занумеровав их слева направо числами от 1 до N. Затем по этому ряду бросили K шаров, при этом i-й шар сбил все кегли с номерами от li до ri включительно. Определите, какие кегли остались стоять на месте.
 
 Формат входных данных
 Программа получает на вход количество кеглей N и количество бросков K. Далее идет K пар чисел li, ri, при этом 1 ≤ li, ri ≤ N.
 
 Формат выходных данных
 Программа должна вывести последовательность из N символов, где j-й символ есть “I”, если j-я кегля осталась стоять, или “.”, если j-я кегля была сбита.
 Sample Input:
 10 3
 8 10
 2 5
 3 6
 Sample Output:
 I.....I...

 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
  
  int n, k;
  
  cin >> n >> k;
  
  vector <int> pins;
  
  for (int i = 1; i <= n; i++) {
    pins.push_back(1);
  }
  
  for (int i = 0; i < k; i++) {
    int l, r;
    cin >> l >> r;
    for (int j = 1; j <= n; j++) {
      if (j >= l && j <= r) pins[j-1] = 0;
    }
  }
  
  for (auto now : pins) {
    if (now == 1) {
      cout << "I";
    } else {
      cout << ".";
    }
    
  }
  
  return 0;
}