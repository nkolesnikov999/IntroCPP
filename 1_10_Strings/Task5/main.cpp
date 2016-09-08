/*
 Вводится один символ, измените его регистр. То есть, если была введена строчная буква - сделайте ее заглавной и наоборот. Символы, не являющиеся латинской буквой, нужно выводить без изменений.
 
 Входные данные
 
 Вводится единственый символ.
 
 Выходные данные
 
 Выведите ответ на задачу.
 
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
    c = 'A' + tmp;
  } else if ((c >= 'A' && c <= 'Z')) {
    int tmp = c - 'A';
    c = 'a' + tmp;;
  }
  
  cout << c;
  
  return 0;
}