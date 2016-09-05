/*
 Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
 Формат входных данных
 Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
 Формат выходных данных
 Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
 Sample Input 1:
 1 7
 2 4
 3 2
 4 8
 5 6
 6 1
 7 3
 8 5
 Sample Output 1:
 NO
 
 Sample Input 2:
 1 8
 2 7
 3 6
 4 5
 5 4
 6 3
 7 2
 8 1
 Sample Output 2:
 YES
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
  
  int n = 16;
  
  vector <int> a;
  
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    a.push_back(temp);
  }
  
  bool match = false;
  
  for (int i = 0; i < n; i += 2) {
    for (int j = i + 2; j < n; j += 2) {
      int C1 = a[i];
      int R1 = a[i+1];
      int C2 = a[j];
      int R2 = a[j+1];
      if (C1 == C2 || R1 == R2 || abs(C1 - C2) == abs(R1 - R2)) match = true;
    }
  }
  
  if (match) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  
  return 0;
}