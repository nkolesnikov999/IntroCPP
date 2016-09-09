/*
 Однажды, разбирая старые книги на чердаке, школьник Вася нашёл англо-латинский словарь. Английский он к тому времени знал в совершенстве, и его мечтой было изучить латынь. Поэтому попавшийся словарь был как раз кстати.
 
 К сожалению, для полноценного изучения языка недостаточно только одного словаря: кроме англо-латинского необходим латинско-английский. За неимением лучшего он решил сделать второй словарь из первого.
 
 Как известно, словарь состоит из переводимых слов, к каждому из которых приводится несколько слов-переводов. Для каждого латинского слова, встречающегося где-либо в словаре, Вася предлагает найти все его переводы (то есть все английские слова, для которых наше латинское встречалось в его списке переводов), и считать их и только их переводами этого латинского слова.
 
 Помогите Васе выполнить работу по созданию латинско-английского словаря из англо-латинского.
 
 Входные данные
 
 В первой строке содержится единственное целое число N — количество английских слов в словаре. Далее следует N описаний. Каждое описание содержится в отдельной строке, в которой записано сначала английское слово, затем отделённый пробелами дефис (символ номер 45), затем разделённые запятыми с пробелами переводы этого английского слова на латинский. Переводы отсортированы в лексикографическом порядке. Порядок следования английских слов в словаре также лексикографический.
 
 Все слова состоят только из маленьких латинских букв, длина каждого слова не превосходит 15 символов. Общее количество слов на входе не превышает 100000.
 
 Выходные данные
 
 Выведите соответствующий данному латинско-английский словарь, в точности соблюдая формат входных данных. В частности, первым должен идти перевод лексикографически минимального латинского слова, далее — второго в этом порядке и т.д. Внутри перевода английские слова должны быть также отсортированы лексикографически.
 
 Sample Input:
 3
 apple - malum, pomum, popula
 fruit - baca, bacca, popum
 punishment - malum, multa
 Sample Output:
 7
 baca - fruit
 bacca - fruit
 malum - apple, punishment
 multa - punishment
 pomum - apple
 popula - apple
 popum - fruit
 */

#include <map>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  
  map <string, set <string>> origMap;
  map <string, set <string>> transMap;
  
  int n;
  cin >> n;
  
  string word;
  string line;
  
  getline(cin, line);
  for (int i = 0; i < n; i++) {
    
    getline(cin, line);
    set <string> wordSet;
    long position = line.find(" ");
    word = line.substr(0, position);
    position++;
    long start = line.find(" ", position) + 1;
    while(true){
      position = line.find(",", position);
      if (position == -1) {
        wordSet.insert(line.substr(start, line.size() - start));
        break;
      }
      wordSet.insert(line.substr(start, position - start));
      start = position + 2;
      position++;
    }
    origMap[word] = wordSet;
  }
  
  
  for (auto orig : origMap) {
    string firstWord = orig.first;
    for (auto now : origMap[firstWord]) {
      transMap[now].insert(firstWord);
    }
  }
  
  cout << transMap.size() << "\n";
  
  for (auto orig : transMap) {
    string firstWord = orig.first;
    cout << firstWord << " - ";
    for (auto now = transMap[firstWord].begin(); now != transMap[firstWord].end(); now++) {
      if (now != transMap[firstWord].begin()) {
        cout << ", ";
      }
      cout << *now;
    }
    cout << "\n";
  }
  
  
  
  return 0;
}