/*
 Дан список целых чисел, который может содержать до 100000 чисел. Определите, сколько в нем встречается различных чисел.
 
 Входные данные
 
 Вводится число N - количество элементов списка, а затем N чисел.
 
 Выходные данные
 
 Выведите ответ на задачу.
 
 Sample Input:
 5
 1 2 3 2 1
 Sample Output:
 3
 */

#include <iostream>
#include <set>

using namespace std;

int main() {
  
  multiset <int> ms;
  set <int> s;
  
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    ms.insert(x);
  }
  
  for (auto now : ms) {
    s.insert(now);
  }
  
  cout << s.size();
  
  return 0;
}