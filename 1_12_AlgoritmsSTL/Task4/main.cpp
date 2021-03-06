/*
 В обувном магазине продается обувь разного размера. Известно, что одну пару обуви можно надеть на другую, если она хотя бы на три размера больше. В магазин пришел покупатель. Требуется определить, какое наибольшее количество пар обуви сможет предложить ему продавец так, чтобы он смог надеть их все одновременно.
 
 Входные данные
 
 Сначала вводится размер ноги покупателя (обувь меньшего размера он надеть не сможет), затем количество пар обуви в магазине и размер каждой пары. Размер — натуральное число, не превосходящее 100, количество пар обуви в магазине не превосходит 1000.
 
 Выходные данные
 
 Выведите единственное число — максимальное количество пар обуви.
 Sample Input:
 26
 5
 30 35 40 41 42
 Sample Output:
 3
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  
  int legSize;
  int n;
  cin >> legSize >> n;
  
  vector<int> intVec(n);
  
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    intVec[i] = temp;
  }
  
  sort(intVec.begin(), intVec.end());
  
  int count = 0;
  for (auto now : intVec) {
    
    if (now >= legSize && count == 0) {
      legSize = now;
      count++;
    }
    
    if (now >= legSize + 3 && count != 0) {
      legSize = now;
      count++;
    }
  }
  
  cout << count << "\n";
  
  return 0;
}