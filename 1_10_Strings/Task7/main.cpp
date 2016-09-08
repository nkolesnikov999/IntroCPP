/*
 По данной строке определите, является ли она палиндромом (то есть, читается одинаково как слева-направо, так и справа-налево).
 Входные данные
 
 На вход подается 1 строка без пробелов.
 Выходные данные
 
 Необходимо вывести yes, если строка является палиндромом, и no в противном случае.
 
 Sample Input:
 kayak
 Sample Output:
 yes
 */

#include <iostream>
#include <string>

using namespace std;

char downcase(char c) {
  if (c >= 'a' && c <= 'z') {
    return c;
  }
  if (c >= 'A' && c <= 'Z') {
    return c - 'A' + 'a';
  }
  return NULL;
}

int main() {
  
  string s;
  cin >> s;
  
  bool check = true;
  long n = s.size();
  
  for (int i = 0; i < n/2; i++) {
    
    if(downcase(s[i]) != downcase(s[n-1-i])) check = false;
  }
  
  if (check) {
    cout << "yes";
  } else {
    cout << "no";
  }
  
  return 0;
}