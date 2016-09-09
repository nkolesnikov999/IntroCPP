/*
 Во входной строке записана последовательность чисел через пробел. Для каждого числа выведите слово YES (в отдельной строке), если это число ранее встречалось в последовательности или NO, если не встречалось.
 
 Входные данные
 
 Вводится число N - количество элементов списка, а затем N чисел.
 
 Выходные данные
 
 Выведите ответ на задачу.
 
 Sample Input:
 6
 1 2 3 2 3 4
 Sample Output:
 NO
 NO
 NO
 YES
 YES
 NO
 */

#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  
  vector <int> vec;
  set <int> s;
  
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    vec.push_back(x);
  }
  
  for (auto now : vec) {
    if (s.find(now) == s.end()) {
      cout << "NO\n";
      s.insert(now);
    } else {
      cout << "YES\n";
    }
  }
  
  return 0;
}