// 03-01-2015
// billy
// prova_polinomi.c++
#include <iostream>
#include "polinomi"
#include <bsl/complex>
#include <bsl/temps>

using namespace std;
using namespace bsl;

typedef long double tipus;
int main () {
  Polinomi <tipus> pol0;
  tipus val = 2.5;

  cout << "Inicialització:" << endl;
  cout << "pol0 = " << pol0 << "\t\t\t\t\tpol0(" << val << ") = " << pol0(val) << endl;
  pol0[0] = 3.0;
  pol0[1] = 1.0;
  pol0[2] = 3.0;
  pol0[5] = 4.0;
  pol0[100] = 0.0;
  pol0 = pol0;
  cout << "grau de pol0: " << pol0.grade() << endl;
  cout << "pol0 = " << pol0 << "\t\t\tpol0(" << val << ") = " << pol0(val) << endl;
  Polinomi <tipus> pol1 = 2.0;
  cout << "pol1 = " << pol1 << "\t\t\t\t\tpol1(" << val << ") = " << pol1(val) << endl;
  pol0.clear();
  cout << "pol0 = " << pol0 << "\t\t\t\t\tpol0(" << val << ") = " << pol0(val) << endl;
  pol0 = 5;
  pol0 = pol0;
  cout << "pol0 = " << pol0 << "\t\t\t\t\tpol0(" << val << ") = " << pol0(val) << endl;
  Polinomi <tipus> pol2 = "4x + 8x^10 - 2x^5 +2 - 2.3x^4";
  cout << "pol2 = " << pol2 << "\t\tpol2(" << val << ") = " << pol2(val) << endl;
  cout << endl;

  cout << "Suma, resta i multiplicació:" << endl;
  pol0 = "3x^4+6x^3+4x^2+2x+3";
  pol1 = "5x^3+3x^2-2x-1";
  cout << "grau de pol0: " << pol0.grade() << endl;
  cout << pol0 << " + (" << pol1 << ") = " << pol0 + pol1 << endl; 
  cout << pol0 << " - (" << pol1 << ") = " << pol0 - pol1 << endl; 
  cout << pol0 << " * (" << pol1 << ") = " << pol0 * pol1 << endl;
  cout << endl;

  cout << "Divisions:" << endl;
  cout << "(" << pol0 << ") / " << val << " = " << pol0 / val << endl;
  cout << "(" << pol0 << ") / (" << pol1 << ") = " << pol0 / pol1 << endl;
  cout << "(" << pol0 << ") % (" << pol1 << ") = " << pol0 % pol1 << endl;
  cout << endl;

  tipus min = 3.0, max = 4.0;
  cout << "Derivació i integració:" << endl;
  cout << "d(" << pol0 << ") = " << pol0.derivate() << endl;
  cout << "f(" << pol0 << ")dx = " << pol0.integrate() << endl;
  cout << "f(d(" << pol0 << "))dx = " << pol0.derivate().integrate() << endl;
  cout << "d(f(" << pol0 << ")dx) = " << pol0.integrate().derivate() << endl;
  cout << "d(" << pol0 << ")| (x = " << min << ")  = " << pol0.derivate()(min) << endl;
  cout << "f(" << pol0 << ")dx| (x = [" << min << ", " << max << "])  = " << pol0.integrate()(max) - pol0.integrate()(min) << endl;
  cout << "d(" << pol0 << ")| (x = " << min << ")  = " << pol0.derivate(min) << endl;
  cout << "f(" << pol0 << ")dx| (x = [" << min << ", " << max << "])  = " << pol0.integrate(min, max) << endl;
  cout << endl;

  cout << "Comparacions:" << endl;
  if (pol0 != pol1)
    cout << "pol0 i pol1 són distints." << endl;
  if (pol0 == pol1)
    cout << "pol0 i pol1 són iguals." << endl;
  if (pol0 < pol1)
    cout << "pol0 és menor que pol1" << endl;
  if (pol0 <= pol1)
    cout << "pol0 és menor o igual que pol1" << endl;
  if (pol0 > pol1)
    cout << "pol0 és major que pol1" << endl;
  if (pol0 >= pol1)
    cout << "pol0 és major o igual que pol1" << endl;
  if (pol0 != val)
    cout << "pol0 i val són distints." << endl;
  if (pol0 == val)
    cout << "pol0 i val són iguals." << endl;
  if (pol0 < val)
    cout << "pol0 és menor que val" << endl;
  if (pol0 <= val)
    cout << "pol0 és menor o igual que val" << endl;
  if (pol0 > val)
    cout << "pol0 és major que val" << endl;
  if (pol0 >= val)
    cout << "pol0 és major o igual que val" << endl;
  if (val != pol1)
    cout << "val i pol1 són distints." << endl;
  if (val == pol1)
    cout << "val i pol1 són iguals." << endl;
  if (val < pol1)
    cout << "val és menor que pol1" << endl;
  if (val <= pol1)
    cout << "val és menor o igual que pol1" << endl;
  if (val > pol1)
    cout << "val és major que pol1" << endl;
  if (val >= pol1)
    cout << "val és major o igual que pol1" << endl;
  cout << endl;

  // cout << "Introducció de polinomis:" << endl;
  // cin >> pol0;
  // cout << "pol0 = " << pol0 << endl;
  // cout << "pol0(" << val << ") = " << pol0(val) << endl;

  pol0 = "x^3-3x^2+3x-5";
  //pol0 = "3x^3-3x+2";
  //pol0 = "3x^2+2x+1";
  //pol0 = "x^4+2x^3-5x^2-4x+6";
  //pol0 = "x^4 - 1";
  //pol0 = "4";
  pol0 = "-9x^3+9x^2+9x-9";
  pol0 = "-1x^3+5x^2-7x+3";
  int iter = 100;
  tipus zer = 2.5;
  Complex <tipus> zercomp(zer, zer);
  cout.precision(10);
  cout << "Zero de " << pol0 << " prop de " << zer <<" amb Newton-Raphson amb " << iter << " iteracions: " << pol0.newton_raphson(zer, iter) << endl;
  cout << "Zero de " << pol0 << " prop de (" << zercomp <<") amb Newton-Raphson amb " << iter << " iteracions: " << pol0.newton_raphson(zercomp, iter) << endl;
 
  cout << "Zeros de " << pol0 << ":" << endl;
  auto arrels = pol0.roots();
  for (unsigned int i = 0; i < arrels.size(); i++)
    cout << "\tzero " << i << ": " << arrels[i] << endl;
  cout << endl;

  cout << "Zeros reals de " << pol0 << ":" << endl;
  vector<tipus> arrelsRe = pol0.realroots();
  for (unsigned int i = 0; i < arrelsRe.size(); i++)
    cout << "\tzero " << i << ": " << arrelsRe[i] << endl;
  cout << endl;

  cout << "Màxims de " << pol0 << ": ";
  vector<tipus> maxims = pol0.max();
  for (unsigned int i = 0; i < maxims.size(); i++)
    cout << maxims[i] << " ";
  cout << endl;

  cout << "Minims de " << pol0 << ": ";
  vector<tipus> minims = pol0.min();
  for (unsigned int i = 0; i < minims.size(); i++)
    cout << minims[i] << " ";
  cout << endl;

  cout << "Punts de sella de " << pol0 << ": ";
  vector<tipus> sella = pol0.saddle();
  for (unsigned int i = 0; i < sella.size(); i++)
    cout << sella[i] << " ";
  cout << endl;
  cout << endl;

  cout << "Sinus i cosinus:" << endl;
  cout.precision(10);
  Polinomi <tipus> sinus, cosinus;
  tipus signe = 1.0, fact = 1.0, x = 0.5;
  sinus[1] = 1;
  for (int i = 3; i < 16; i += 2) {
    signe = signe * -1.0;
    fact = fact * i * (i - 1);
    sinus[i] = signe / fact;
  }
  cosinus = sinus.derivate();
  cout << "sinus = " << sinus << endl;
  cout << "sinus(" << x << ") = " << sinus(x) << endl;
  cout << "sin(" << x << ") = " << __builtin_sin(x) << endl;
  cout << "cosinus = " << cosinus << endl;
  cout << "cosinus(" << x << ") = " << cosinus(x) << endl;
  cout << "cos(" << x << ") = " << __builtin_cos(x) << endl;

  pol0.clear();
  // Temps ini, fin;
  // for (int i = -10; i < 10; i++) {
  //   pol0[0] = tipus(i); 
  //   for (int j = -10; j < 10; j++) {
  //     pol0[1] = tipus(j); 
  //     for (int k = -10; k < 10; k++) {
  // 	pol0[2] = tipus(k);
  // 	// for (int l = -10; l < 10; l++) {
  // 	//   pol0[3] = tipus(l);
  // 	//   for (int m = -10; m < 10; m++) {
  // 	//     pol0[4] = tipus(m);
  // 	    cout << pol0 << " -> ";
  // 	    auto vecvec = pol0.roots();
  // 	    for (unsigned int h = 0; h < vecvec.size(); h++)
  // 	    cout << vecvec[h] << " ";
  // 	    cout << endl;
  // 	//   }
  // 	// }
  //     }
  //   }
  // }
  // fin = now();
  // cout << "Zeros de " << 20 * 20 * 20 << " polinomis en: " << fin - ini << endl;

  return 0;
}
