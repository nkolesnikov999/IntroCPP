/*
 В сети интернет каждому компьютеру присваивается четырехбайтовый код, который принято записывать в виде четырех чисел, каждое из которых может принимать значения от 0 до 255, разделенных точками. Вот примеры правильных IP-адресов:
 127.0.0.0
 192.168.0.1
 255.0.255.255
 Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.
 
 Входные данные
 
 Программа получает на вход строку из произвольных символов.
 Выходные данные
 
 Если эта строка является корректной записью IP-адреса, выведите YES, иначе выведите NO.
 Примечание
 
 Для перевода из строки в число удобно пользоваться функцией stoi, которая принимает на вход строку, а возвращает число.
 Sample Input:
 127.0.0.1
 Sample Output:
 YES
 */

// !!! Есть двойной код

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  
  string s;
  getline(cin, s);
  
  long lengthString = s.length();
  
  string word;
  
  int start = 0;
  long position = 0;
  int length = 0;
  int points = 0;
  int digits = 0;
  
  bool check = true;
  
  while (true) {
    position = s.find(".", position);
    if (position - start == 0) check = false;
    if (position == -1) {
      length = (int)lengthString - start;
      word = s.substr(start, length);
      if (word.size() != 0) digits++;
      int digit = 0;
      int st = 0;
      for (int i = (int)word.size() - 1; i >= 0; i--) {
        if (word[i] >= '0' && word[i] <= '9') {
          digit += ((word[i] - '0') * pow(10, st));
        } else {
          check = false;
        }
        st++;
      }
      if (digit < 0 || digit > 255) {
        check = false;
      }
      break;
    } else {
      points++;
      length = (int)position - start;
      word = s.substr(start, length);
      if (word.size() != 0) digits++;
      int digit = 0;
      int st = 0;
      for (int i = (int)word.size() - 1; i >= 0; i--) {
        if (word[i] >= '0' && word[i] <= '9') {
          digit += ((word[i] - '0') * pow(10, st));
        } else {
          check = false;
        }
        st++;
      }
      if (digit < 0 || digit > 255) {
        check = false;
      }
      
      position++;
      start = (int)position;
    }
  }
  
  if (check && points == 3 && digits == 4) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  
  return 0;
}