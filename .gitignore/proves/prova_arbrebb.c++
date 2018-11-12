// 03-01-2015
// billy
// prova_arbrebb.c++
#include <iostream>
#include <bsl/arbrebb>
#include <vector>

using namespace std;
using namespace bsl;

typedef int tipus;

int main () {
  ArbreBB <tipus> arb0, arb1;
  arb0 = arb1;
  arb0.push(5);
  arb0.push(4);
  arb0.push(6);
  arb1 = arb0;
  arb0.push(7);
  arb0.push(1);
  arb1.push(2);
  cout << arb0 << endl;
  arb0.printInOrder();
  cout << endl;
  arb0.printPreOrder();
  cout << endl;
  arb0.printPostOrder();
  cout << endl;
  cout << arb1 << endl;
  vector<tipus> vec = arb0.cpp_vec();
  for (unsigned int i = 0; i < vec.size(); i++)
    cout << vec[i] << " ";
  cout << endl;
  while (!arb0.empty()) {
    tipus aux = arb0.max();
    arb0.pop(aux);
    cout << aux << " ";
  }
  cout << endl;

  return 0;
}
