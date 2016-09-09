/*
 Даны два списка чисел, которые могут содержать до 100000 чисел каждый. Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.
 
 Входные данные
 
 Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
 
 Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
 
 Выходные данные
 
 Выведите ответ на задачу.
 
 Sample Input:
 3
 1 3 2
 3
 4 3 2
 Sample Output:
 2
 */

#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  
  
  set <int> set1;
  set <int> set2;
  
  int count = 0;
  
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    set1.insert(x);
  }
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    set2.insert(x);
  }
  
  for (auto now : set1) {
    if (set1.find(now) != set1.end() && set2.find(now) != set2.end()) {
      count++;
    }
  }
  
  cout << count;
  
  return 0;
}