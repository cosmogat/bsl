// 22-12-2014
// billy
// prova_temps.c++
#include <iostream>
#include <cstdlib>
#include "temps"
#define OPER 100000000

using namespace std;
using namespace bsl;

int main () {
  Temps t0, t1;
  double x = 100.5;

  t0 = now();
  for (unsigned long int i = 0; i < OPER; i++)
    x = x * x * x / 10;
  t1 = now();
  cout << t1 - t0 << endl;

  return 0;
}
