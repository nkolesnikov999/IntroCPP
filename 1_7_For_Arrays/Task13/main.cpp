/*
 Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
 Формат входных данных
 В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
 Формат выходных данных
 Выведите ответ на задачу.
 Sample Input 1:
 5
 1 2 3 2 3
 Sample Output 1:
 2
 
 Sample Input 2:
 5
 1 1 1 1 1
 Sample Output 2:
 10
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
  
  int n;
  cin >> n;
  vector <int> a;
  
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    a.push_back(temp);
  }
  
  int count = 0;
  
  for (int i = 0; i < n-1; i++) {
    for (int j = i+1; j < n; j++) {
      if (a[i] == a[j]) count++;
    }
  }
  
  cout << count;
  
  return 0;
}