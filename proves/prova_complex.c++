// 15-12-2014
// billy
// prova_complex.c++
#include <iostream>
#include "complex"

using namespace std;
using namespace bsl;

typedef long double tipus;

int main () {
  Complex <tipus> z0 = 0, z1 = 1, z2 (0, 1), z3 = z2;
  tipus x = 0.0;

  z3 += 4; 
  cout << "Operador +=      " << "(" << real(z3) << ", " << imag(z3) << ")" << endl;
  z3 -= 2;
  cout << "Operador -=      " << "(" << real(z3) << ", " << imag(z3) << ")" << endl;
  z3 *= 4;
  cout << "Operador *=      " << "(" << real(z3) << ", " << imag(z3) << ")" << endl;
  z3 /= 2;
  cout << "Operador /=      " << "(" << real(z3) << ", " << imag(z3) << ")" << endl;
  z3 = z0 + (tipus) 2.0 + z1 + z2 + z3;
  z3 = (tipus) 30.0 + z3;
  z3 = (tipus) 10.0 - z3;
  z3 = -z3;
  cout << "Operador +       " << "(" << real(z3) << ", " << imag(z3) << ")" << endl;
  z3 = z3 * (tipus) -10 + (tipus) 2.0; 
  cout << "Operador *       " << "(" << real(z3) << ", " << imag(z3) << ")" << endl;
  z3 = z3 / (tipus) 100;
  cout << "Operador /       " << "(" << real(z3) << ", " << imag(z3) << ")" << endl;
  z3 = z3 * (tipus) -1;
  cout << "Nombre complex:  " << "(" << real(z3) << ", " << imag(z3) << ")" << endl;
  x = abs(z3);
  cout << "Modul:           " << x << endl;
  x = norm(z3);
  cout << "Modul quadrat:   " << x << endl;
  x = arg(z3);
  cout << "Argument:        " << x << endl;
  z0 = conj(z3);
  cout << "Conjugat:        " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = sqrt(z3);
  cout << "Arrel:           " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = sin(z3);
  cout << "Sinus:           " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = cos(z3);
  cout << "Cosinus:         " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = tan(z3);
  cout << "Tangent:         " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = sinh(z3);
  cout << "Sinus hip:       " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = cosh(z3);
  cout << "Cosinus hip:     " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = tanh(z3);
  cout << "Tangent hip:     " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = exp(z3);
  cout << "Exponencial:     " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = pow(z0, z3);
  cout << "Potencia0:       " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = pow(z3, (tipus)4);
  cout << "Potencia1:       " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = pow((tipus)4, z0 + z3);
  cout << "Potencia2:       " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = log(z3);
  cout << "Logaritme:       " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = log10(z3);
  cout << "Logaritme10:     " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = logi(z3);
  cout << "Logaritmei:      " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = log2(z3);
  cout << "Logaritme2:      " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = asin(z3);
  cout << "Arcsinus:        " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = acos(z3);
  cout << "Arccosinus:      " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = atan(z3);
  cout << "Arctangent:      " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = asinh(z3);
  cout << "Arcsinus hip:    " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = acosh(z3);
  cout << "Arccosinus hip:  " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = atanh(z3);
  cout << "Arctangent hip:  " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = tgamma(z3);
  cout << "tgamma:          " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = lgamma(z3);
  cout << "lgamma:          " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = tbeta(z0, z3);
  cout << "tbeta:           " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = lbeta(z0, z3);
  cout << "lbeta:           " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = tpi(z3);
  cout << "tpi:             " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  z0 = lpi(z3);
  cout << "lpi:             " << "(" << real(z0) << ", " << imag(z0) << ")" << endl;
  int castI = (int) z0;
  float castF = (float) z0;
  double castD = (double) z0;
  long double castLD = (long double) z0;
  cout << "Cast int         " << castI  << endl;
  cout << "Cast float       " << castF  << endl;
  cout << "Cast double      " << castD  << endl;
  cout << "Cast long double " << castLD << endl;
  if (!isinf(z0))
    cout << "z0 no és infinit." << endl;
  if (!isnan(z0))
    cout << "z0 no és NaN." << endl;
  return 0;
}

