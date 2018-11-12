// 01-01-2015
// billy
// prova_matriu.c++
#include <iostream>
#include <cstdlib>
#include "matriu"
#include <vector>

using namespace std;
using namespace bsl;

typedef int tipus;

int main () {
  Matriu <tipus> mat0, mat1(2), mat2(2, 3), mat3(2, 3, 1), mat4(0, 0, 0);
  mat4.addColumn();
  mat4.addRow();
  mat4.addColumn();

  cout << "Matriu 0: " << endl << mat0 << endl;
  cout << "Matriu 1: " << endl << mat1 << endl;
  cout << "Matriu 2: " << endl << mat2 << endl;
  cout << "Matriu 3: " << endl << mat3 << endl;
  cout << "Matriu 4: " << endl << mat4 << endl;
  mat4 = mat3;
  mat4(0, 0) = 4;
  cout << "Matriu 4: " << endl << mat4 << endl;

  for (int i = 0; i < mat4.rows(); i++) {
    for (int j = 0; j < mat4.columns(); j++)
      cout << mat4(i, j) << " ";
    cout << endl;
  }
  cout << endl;

  tipus ** matc = mat4.c_mat();
  for (int i = 0; i < mat4.rows(); i++) {
    for (int j = 0; j < mat4.columns(); j++)
      cout << matc[i][j] << " ";
    cout << endl;
  }

  mat4.addRow(3);
  cout << "Matriu 4: " << endl << mat4 << endl;
  mat4.addColumn(2);
  cout << "Matriu 4: " << endl << mat4 << endl;

  cout << "Vector de vectors stl:" << endl;
  vector<vector<tipus> > matcpp = mat4.cpp_vecvec();
  for (unsigned int i = 0; i < matcpp.size(); i++) {
    for (unsigned int j = 0; j < matcpp[i].size(); j++)
      cout << matcpp[i][j] << " ";
    cout << endl;
  }
  cout << endl;

  vector<tipus> vec;
  vec.push_back(5);
  vec.push_back(6);
  vec.push_back(7);
  mat4.addColumn(vec);
  mat4.addColumn(vec);
  cout << "Afegir columnes: " << endl << mat4 << endl;
  vec.push_back(8);
  vec.push_back(9);
  vec.push_back(0);
  mat4.addRow(vec);
  mat4.addRow(vec);
  cout << "Afegir files: " << endl << mat4 << endl;
  cout << "Comparacio de matrius: ";
  if (mat4 != mat4)
    cout << "diferents" << endl;
  else
    cout << "iguals" << endl;
  mat4.resize(3, 3);
  cout << "Redimensio: " << endl << mat4 << endl;

  return 0;
}
