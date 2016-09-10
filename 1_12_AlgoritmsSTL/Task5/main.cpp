/*
 Во время проведения олимпиады каждый из участников получил свой идентификационный номер – натуральное число. Необходимо отсортировать список участников олимпиады по количеству набранных ими баллов.
 
 Входные данные
 
 На первой строке дано число N (1 ≤ N ≤ 1000) – количество участников. На каждой следующей строке даны идентификационный номер и набранное число баллов соответствующего участника. Все числа во входном файле не превышают 105.
 
 Выходные данные
 
 В выходной файл выведите исходный список в порядке убывания баллов. Если у некоторых участников одинаковые баллы, то их между собой нужно упорядочить в порядке возрастания идентификационного номера.
 Sample Input 1:
 3
 101 80
 305 90
 200 14
 Sample Output 1:
 305 90
 101 80
 200 14

 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct man {
  int id;
  int value;
};

bool cmp(man a, man b) {
  if (a.value != b.value) {
    return a.value > b.value;
  } else {
    return a.id < b.id;
  }
}

int main() {
  
  int n;
  cin >> n;
  
  vector<man> intVec(n);
  
  for (int i = 0; i < n; i++) {
    int temp;
    int v_temp;
    cin >> temp >> v_temp;
    man struct_temp; // временная структура
    struct_temp.id = temp;
    struct_temp.value = v_temp;
    intVec[i] = struct_temp;
  }
  
  sort(intVec.begin(), intVec.end(), cmp);
  
  for (auto now : intVec) {
    cout << now.id << " " << now.value << "\n";
  }
  
  
  
  return 0;
}