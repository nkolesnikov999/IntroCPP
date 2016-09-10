/*
 Отсортируйте массив.
 
 Входные данные
 
 Первая строка входных данных содержит количество элементов в массиве N ≤ 105. Далее идет N целых чисел, не превосходящих по абсолютной величине 109.
 
 Выходные данные
 
 Выведите эти числа в порядке неубывания.
 Sample Input:
 5
 5 4 3 2 1
 Sample Output:
 1 2 3 4 5
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  
  int n;
  cin >> n;
  
  vector<int> intVec;
  
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    intVec.push_back(temp);
  }
  
  sort(intVec.begin(), intVec.end());
  for (auto now : intVec) {
    
    cout << now << " ";
  }
  
  
  return 0;
}