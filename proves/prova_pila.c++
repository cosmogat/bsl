// 01-01-2015
// billy
// prova_pila.c++
#include <iostream>
#include "pila"
#include <stack>

using namespace std;
using namespace bsl;

typedef float tipus;

int main () {
  Pila <tipus> pil0, pil1;
  stack <tipus> stc0 = pil0.stack_cpp();
  pil0 = pil1;
  if (pil0.empty())
    cout << "La pila esta buida" << endl;
  pil0.push(8.3);
  cout << pil0 << endl;
  pil0.push(8.4);
  pil0.push(3.2);
  pil0.push(0.1);
  pil0.push(4.6);
  pil0.push(2.1);
  cout << pil0 << endl;
  pil0.pop();
  pil0.pop();
  cout << pil0.top() << endl;
  cout << pil0 << endl;
  if (!pil0.empty())
    cout << "La pila no esta buida" << endl;
  pil0.push(2.6);
  pil0.push(4.8);
  pil0.push(5.7);
  cout << pil0 << endl;
  pil0.sort();
  cout << pil0 << endl;
  cout << "Tamany: " << pil0.size() << endl;
  pil1 = pil0;
  cout << pil1 << endl;
  stc0 = pil1.stack_cpp();
  while (!stc0.empty()) {
    cout << stc0.top() << " ";
    stc0.pop();
  }
  cout << endl;
  while (!pil1.empty()) {
    cout << pil1.top() << " ";
    pil1.pop();
  }
  cout << endl;  
  return 0;
}
