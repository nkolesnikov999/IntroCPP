/*
 Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.
 Формат входных данных
 Программа получает на вход числа A1, B1, C1, A2, B2, C2.
 Формат выходных данных
 Программа должна вывести одну из следующих строчек:
 Boxes are equal, если коробки одинаковые,
 The first box is smaller than the second one, если первая коробка может быть положена во вторую,
 The first box is larger than the second one, если вторая коробка может быть положена в первую,
 Boxes are incomparable, во всех остальных случаях.
 
 Sample Input 1:
 1
 2
 3
 3
 2
 1
 Sample Output 1:
 Boxes are equal
 
 Sample Input 2:
 2
 2
 3
 3
 2
 1
 Sample Output 2:
 The first box is larger than the second one
 */

#include <iostream>

int main() {
  int A1, B1, C1, A2, B2, C2 = 0;
  int L1, W1, H1, L2, W2, H2 = 0;
  
  std::cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
  
  if (A1 > B1 && A1 > C1) {
    L1 = A1;
    if (B1 > C1) {
      W1 = B1;
      H1 = C1;
    } else {
      W1 = C1;
      H1 = B1;
    }
  } else if (B1 > A1 && B1 > C1) {
    L1 = B1;
    if (A1 > C1) {
      W1 = A1;
      H1 = C1;
    } else {
      W1 = C1;
      H1 = A1;
    }
  } else {
    L1 = C1;
    if (A1 > B1) {
      W1 = A1;
      H1 = B1;
    } else {
      W1 = B1;
      H1 = A1;
    }
  }
  
  
  if (A2 > B2 && A2 > C2) {
    L2 = A2;
    if (B2 > C2) {
      W2 = B2;
      H2 = C2;
    } else {
      W2 = C2;
      H2 = B2;
    }
  } else if (B2 > A2 && B2 > C2) {
    L2 = B2;
    if (A2 > C2) {
      W2 = A2;
      H2 = C2;
    } else {
      W2 = C2;
      H2 = A2;
    }
  } else {
    L2 = C2;
    if (A2 > B2) {
      W2 = A2;
      H2 = B2;
    } else {
      W2 = B2;
      H2 = A2;
    }
  }
  
  if (L1 == L2 && W1 == W2 && H1 == H2) {
    std::cout << "Boxes are equal";
  } else if (L1 <= L2 && W1 <= W2 && H1 <= H2) {
    std::cout << "The first box is smaller than the second one";
  } else if (L1 >= L2 && W1 >= W2 && H1 >= H2) {
    std::cout << "The first box is larger than the second one";
  } else {
    std::cout << "Boxes are incomparable";
  }
  
  return 0;
}