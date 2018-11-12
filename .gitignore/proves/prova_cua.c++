// 01-01-2015
// billy
// prova_cua.c++
#include <iostream>
#include "cua"
#include <queue>

using namespace std;
using namespace bsl;

int main () {
  Cua <int> cola;
  cola.push(2);
  cola.push(3);
  cola.push(4);
  cout << cola << endl;
  cola.pop();
  cout << cola << endl;
  cola.push(5);
  cola.push(7);
  cola.push(6);
  cout << cola << endl;
  cout << cola.front() << endl;
  queue <int> q = cola.queue_cpp();
  while (!q.empty()) {
    cout << q.front() << ", ";
    q.pop();
  }
  cout << endl;

  return 0;
}
