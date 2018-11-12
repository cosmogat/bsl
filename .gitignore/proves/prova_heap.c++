// 03-01-2015
// billy
// prova_heap.c++
#include <iostream>
#include "heap"
#include <vector>

using namespace std;
using namespace bsl;

typedef int tipus;
int main () {
  Monticle <tipus> mont0, mont1;
  mont0.push(2);
  mont0.push(0);
  mont0.push(1);
  cout << mont0 << endl;
  vector<tipus> v;
  for (int i = 1; i < 20; i = i+2) 
    v.push_back(i);
  v.push_back(1);
  v.push_back(2);
  v.push_back(0);
  v.push_back(1);
  v.push_back(-10);
  mont1.getVector(v);
  cout << mont1 << endl;
  while (!mont1.empty()) {
    tipus aux = mont1.min();
    mont1.erase(aux);
    cout << aux << " " << mont1 << endl;
  }
  return 0;
}
