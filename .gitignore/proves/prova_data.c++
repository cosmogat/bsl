// 23-12-2014
// billy
// prova_data.c++
#include <iostream>
#include "data"

using namespace std;
using namespace bsl;

int main() {
  Data d;
  d = today();
  cout << d << endl;
  cout << "Introduïu una data, dd-mm-aaaa:" << endl;
  cin >> d;
  cout << d << endl;
}
