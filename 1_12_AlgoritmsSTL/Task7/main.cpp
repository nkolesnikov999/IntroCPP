/*
 Выведите фамилии и имена учащихся в порядке убывания их среднего балла.
 Входные данные
 
 Заданы сначала количество учащихся n, затем n строк, каждая из которых содержит фамилию, имя и три числа (оценки по трем предметам: математике, физике, информатике). Данные в строке разделены одним пробелом. Оценки принимают значение от 1 до 5.
 
 Выходные данные
 
 Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом. Выводить оценки не нужно. Если несколько учащихся имеют одинаковые средние баллы, то их нужно выводить в порядке, заданном во входных данных.
 
 Sample Input:
 3
 Markov Valeriy 5 5 5
 Sergey Petrov 1 1 1
 Petrov Petr 3 3 3
 Sample Output:
 Markov Valeriy
 Petrov Petr
 Sergey Petrov
 */

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct man {
  string lname;
  string fname;
  double math;
  double phis;
  double info;
};

bool cmp(man a, man b) {
  return (a.math + a.phis + a.info)/3 > (b.math + b.phis + b.info)/3;
}

int main() {
  
  int n;
  cin >> n;
  
  vector<man> intVec(n);
  
  for (int i = 0; i < n; i++) {
    string l_temp, n_temp;
    double m_temp, p_temp, i_temp;
    cin >> l_temp >> n_temp >> m_temp >> p_temp >> i_temp;
    man struct_temp; // временная структура
    struct_temp.lname = l_temp;
    struct_temp.fname = n_temp;
    struct_temp.math = m_temp;
    struct_temp.phis = p_temp;
    struct_temp.info = i_temp;
    intVec[i] = struct_temp;
  }
  
  stable_sort(intVec.begin(), intVec.end(), cmp);
  
  for (auto now : intVec) {
    cout << now.lname << " " << now.fname << "\n";
  }
  
  return 0;
}