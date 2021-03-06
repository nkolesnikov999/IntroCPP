/*
 Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к парному ему слову. Все слова в словаре различны. Для одного данного слова определите его синоним.
 Входные данные
 
 Программа получает на вход количество пар синонимов N. Далее следует N строк, каждая строка содержит ровно два слова-синонима. После этого следует одно слово.
 
 Выходные данные
 
 Программа должна вывести синоним к данному слову.
 
 Sample Input:
 3
 Hello Hi
 Bye Goodbye
 List Array
 Goodbye
 Sample Output:
 Bye
 */


#include <map>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  
  
  map <string, string> s;
  
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string first;
    string second;
    cin >> first >> second;
    s[first] = second;
    s[second] = first;
  }
  
  string word;
  cin >> word;
  
  cout << s[word];
  
  return 0;
}