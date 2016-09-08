/*
 Найдите в данной строке самое длинное слово и выведите его.
 
 Входные данные
 
 Вводится одна строка. Слова в ней отделены одним пробелом.
 
 Выходные данные
 
 Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.
 
 Sample Input:
 Everyone of us has all we need
 Sample Output:
 Everyone
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
  
  string s;
  getline(cin, s);
  
  long lengthString = s.length();
  
  string word;
  int max = 0;
  int start = 0;
  long position = 0;
  int length = 0;
  
  while (true) {
    position = s.find(" ", position);
    if (position == -1) {
      length = (int)lengthString - start;
      if (length > max) {
        max = length;
        word = s.substr(start, length);
      }
      break;
    } else {
      length = (int)position - start;
      if (length > max) {
        max = length;
        word = s.substr(start, length);
      }
      position++;
      start = (int)position;
    }
  }
  
  cout << word;
  
  
  return 0;
}