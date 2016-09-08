/*
 Переведите символ в верхний регистр.
 
 Входные данные
 
 Вводится единственый символ.
 
 Выходные данные
 
 Если введеный символ является строчной буквой латинского алфавита, то выведите такую же заглавную букву. В противном случае выведите тот же символ, который был введен.
 
 Sample Input:
 b
 Sample Output:
 B
 */

#include <iostream>
#include <string>

using namespace std;


int main() {
  
  string s;
  cin >> s;
  
  char c = s[0];
  
  if (c >= 'a' && c <= 'z') {
    int tmp = c - 'a';
    c = 'A' + tmp;;
  }
  cout << c;
  
  return 0;
}