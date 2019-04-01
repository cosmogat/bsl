// 01-01-2015
// billy
// prova_llista.c++
#include <iostream>
#include "llista"
#include <list>
#include <vector>

using namespace std;
using namespace bsl;

typedef int tipus;

int main () {
  Llista <tipus> lis0;
  lis0.insert(2, 1);
  lis0.insert(3, 1);
  lis0.insert(5, 3);
  lis0.insert(4, 3);
  cout << lis0 << endl;
  lis0.rotate(2);
  cout << lis0 << endl;
  list <tipus> liscpp = lis0.list_cpp();
  for (list<tipus>::iterator it = liscpp.begin(); it != liscpp.end(); ++it)
    cout << * it << " ";
  cout << endl;
  vector <tipus> veccpp = lis0.vec_cpp();
  for (unsigned int i = 0; i < veccpp.size(); i++)
    cout << veccpp[i] << " ";
  cout << endl;
  veccpp.push_back(1);
  veccpp.push_back(8);
  veccpp.push_back(9);
  Llista <tipus> lis1 = veccpp;
  cout << lis1 << endl;
  return 0;
}
