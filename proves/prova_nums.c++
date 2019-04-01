// 13-09-2015
// billy
// prova_nums.c++
#include <iostream>
#include <bsl/temps>
#include "nums"
using namespace std;
using namespace bsl;

unsigned long int FloatGran::prec;

int main () {
  // Proves FloatGran
  FloatGran::prec = 200000;
  FloatGran Z = "-1.23";
  FloatGran Y = "0.987";
  FloatGran P = "3988767676234.1234567890";
  FloatGran X;
  FloatGran PI = "3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408";
  //cin >> Z;
  // cout << Z << endl << Y << endl << P << endl << X << endl << PI << endl;
  // cout << Z * Z * Z * Z * Z << endl;
  // cout << FloatGran(1) / FloatGran(100) << endl;
  // double z = (double) Z;
  // if (z == Y)
  //   cout << "Z igual que Y" << endl;
  // if (z != Y)
  //   cout << "Z distint que Y" << endl;
  // if (z < Y)
  //   cout << "Z menor que Y" << endl;
  // if (z <= Y)
  //   cout << "Z menor o igual que Y" << endl;
  // if (z > Y)
  //   cout << "Z major que Y" << endl;
  // if (z >= Y)
  //   cout << "Z major o igual que Y" << endl;
  // cout << "abs(-10.5) = " << abs(FloatGran(-10.5)) << endl;
  // cout << "sqrt(10005) = " << sqrt(FloatGran(10005)) << endl;
  // cout << "pow(-0.25, 11) = " << pow(FloatGran(-0.25), 11) << endl;
  // mpf_t f;
  // mpf_init(f);
  // mpf_set_d(f, 9.75);
  // FloatGran F = f;
  // cout << F << endl;
  // F = 9.5;
  // mpf_set_floatgran(f, F);
  // F = f;
  // cout << (F * 2) * 0.5 << endl;
  // cout << FloatGran("720.000") << endl;
  cout << "Càlcul de Pi amb " << FloatGran::prec << " xifres" << endl;
  Temps ini;
  PI = pi();
  //cout << PI << endl;
  cout << "Temps: " << now() - ini << endl;

  // Proves IntGran
  // IntGran A(-100+50), B = 100, D(B);
  // A = B + A;
  // cout << A << endl;
  // A = 25;
  // cout << A << endl;
  // IntGran C = A * B;
  // cout << C << endl;
  // A = 1;
  // for (int i = 2; i <= 9; i++) {
  //   B = i;
  //   A = A * B;
  // }
  // cout << B << "! = " << A << endl;
  // cout << D << endl;
  // B = 17;
  // // cin >> A;
  // // cin >> B;
  // D = A - ((A / B) * B);
  // cout << "Suma: " << A + B << endl;
  // cout << "Resta: " << A - B << endl;
  // cout << "Multiplicacio: " << A * B << endl;
  // cout << "Divisio: " << A / B << endl;
  // cout << "Residus: " << A % B << endl;
  // cout << "Residus: " << D << endl;
  // A %= B;
  // A = -A;
  // cout << -A << endl;
  // A = B;
  // int c = 19;
  // A = c;
  // cout << c << ", " << B << endl;
  // if (c == B)
  //   cout << "A igual que B" << endl;
  // if (c != B)
  //   cout << "A distint que B" << endl;
  // if (c < B)
  //   cout << "A menor que B" << endl;
  // if (c <= B)
  //   cout << "A menor o igual que B" << endl;
  // if (c > B)
  //   cout << "A major que B" << endl;
  // if (c >= B)
  //   cout << "A major o igual que B" << endl;
  // IntGran E = "-200000000000000000";
  // cout << "E = " << E << endl;
  // mpz_t a, b;
  // mpz_init(a);
  // mpz_set_ui(a, 100000);
  // mpz_mul(a, a, a);
  // mpz_mul(a, a, a);
  // mpz_neg(a, a);
  // gmp_printf("Valor: %Zd\n", a);
  // cout << "_mp_d[1] = " << a->_mp_d[1] << endl;
  // cout << "_mp_d[0] = " << a->_mp_d[0] << endl;
  // cout << "_mp_size = " << a->_mp_size << endl;
  // cout << "sizeof = " << sizeof(a->_mp_d[0]) << endl;

  // cout << (double) E << endl;
  // cout << sqrt(abs(E)) << endl;
  // mpz_set_intgran(a, E);
  // gmp_printf("Valor: %Zd\n", a);

  // mpz_init(b);
  // mpz_set_ui(b, 35);
  // E = b;
  // cout << E << endl;

  // cout << "Residus" << endl;
  // A = 2;
  // B = -3;
  // cout << A << " % " << B << " = " << A % B << endl;
  // int aa = (int) A;
  // int bb = (int) B;
  // cout << aa << " % " << bb << " = " << aa % bb << endl;
  // cout << A << " % " << bb << " = " << A % bb << endl;
  // cout << A << endl;
  // cout << A << " " << A++ << " " << A << endl;
  // for (IntGran j = 0; j < 10; j++)
  //   cout << j << " ";
  // cout << endl;
  // for (int k = 0; k < 10; k++)
  //   cout << k << " -> " << k % A << endl;
  // A = rand(IntGran(100000));
  // cout << "Random: " << A << endl;
  // cout << "(" << A << ")^10 = " << pow(A, 10) << endl;
  // cout << "mcd(" << A << ", " << E << ") = " << mcd(A, E) << endl;
  // cout << "mcm(" << A << ", " << E << ") = " << mcm(A, E) << endl;
  // cout << "Primer " << A % 100 << "? " << (A % 100).prime() << endl;
  // cout << "Següent primer " << A.nextprime() << ", " << A.nextprime().prime() << endl;
  // E = pow(A, 10);
  // cout << E.nextprime() << endl;
  return 0;
}
