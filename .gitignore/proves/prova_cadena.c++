// 23-12-2014
// billy
// prova_cadena.c++
#include <iostream>
#include <cstdlib>
#include "cadena"
#include <vector> // Vector de la STL, a substituir per el futur vector de la BSL

using namespace std;
using namespace bsl;

int main() {
  Cadena cad, cad0, cad1;
  cad = "adeu";
  cout << cad[0] << cad[1] << cad[2] << cad[3] << endl;
  cout << cad[-1] << cad[-2] << cad[-3] << cad[-4] << endl;
  cad = "h" + Cadena("ola");
  cout << cad << endl;
  cad = "asd jkl asd jkl asd jkl asd";
  cad0 = "jkl";
  cad1 = "hola";
  cout << "replace: '" << cad << "' '" << cad0 << "' '" << cad1 << "'" << endl;
  cout << "|" << cad.str_replace(cad0, cad1) << "|" << endl;
  int a = ' ';
  cout << a << endl;
  cad = "      hola   hola       ";
  cout << "|" << cad << "| " << cad.size() << endl;
  cout << "|" << cad.ltrim() << "| " << cad.ltrim().size() << endl;
  cout << "|" << cad.rtrim() << "| " << cad.rtrim().size() << endl;
  cout << "|" << cad.trim() << "| " << cad.trim().size() << endl;
  cad = "açò es una prova per a ficar MAJUSCULES i minuscules ";
  cout << cad.substr(0, 5) << "|" << endl;
  cout << cad.strtoupper() << "|" << endl;
  cout << cad.strtolower() << "|" << endl;
  cout << cad.ucfirst() << "|" << endl;
  cout << cad.ucwords() << "|" << endl;
  cad = "castello, valencia, alacant";
  vector <Cadena> vec1 = cad.explode(", ");
  vector <Cadena> vec2;
  vec2.push_back("lluna");
  vec2.push_back("mart");
  for (unsigned int i = 0; i < vec1.size(); i++)
    cout << "|" << vec1[i] << "|" << endl;
  vec1.push_back("moro");
  vec1.push_back("burjassot");
  vec1.push_back("mas de flors");
  cad = "";
  cout << "|" << cad.implode(vec1, ", ") << "|" << endl;
  cout << "|" << cad.implode(vec2, ", ") << "|" << endl;
  cad = "2345.11111111000000000022222";
  cout.precision(10);
  cout << cad.cad2i() << endl;
  cout << cad.cad2f() << endl;
  cout << cad.cad2d() << endl;
  cout << cad.cad2li() << endl;
  cout << cad.cad2lli() << endl;
  cout << cad.strcount("2") << endl;
  //cin >> cad;
  // cout << cad << endl;
  // cout << cad.size() << endl;
  // if (cad == "hola") {
  //   cout << "La cadena es 'hola'" << endl;
  //   cad = cad + " i adeu";
  //   cad[5] = '&';
  //   cout << cad << endl;
  // }
  // else if ("adeu" == cad) {
  //   cout << "La cadena es 'adeu'" << endl;
  // }
  // else if ("asdf" > cad)
  //   cout << "La cadena es menor que 'asdf'" << endl;
}

