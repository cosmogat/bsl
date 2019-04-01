// 15-01-2015
// billy
// prova_map.c++
#include <iostream>
#include <string>
#include <bsl/cadena>
#include "map"

typedef bsl::Cadena clau_t;
typedef long long int valor_t;

int main () {
  bsl::Map<clau_t, valor_t> telef;
  telef["Menganito"] = 612345588;
  telef["Fulanito"] = 968456123;
  telef["Casa Pares"] = 852741963;
  telef["Persona"] = 123456789;
  telef["Humana"] = 865412957;
  telef["Individu"] = 639638637;
  telef["Amic"] = 123123123;
  telef["Vei"] = 987654321;
  telef["Gat"] = 453961456;
  std::cout << "Telefons (" << telef.size() << "): " << std::endl << telef << std::endl;
  telef.erase("Casa Pares");
  telef.erase("Fulanito");
  telef["Casa Pares"] = 686123456;
  telef["Casa Pares"] = 654258960;
  std::cout << "Minim: " << telef.min() << std::endl;
  std::cout << "Maxim: " << telef.max() << std::endl;
  std::cout << "Telefons :\n";
  print_r(telef);
  std::cout << "Telefons (" << telef.size() << "): " << std::endl << telef << std::endl;
  std::vector<clau_t> claus = telef.key_vec();
  std::vector<valor_t> valors = telef.value_vec();
  claus.push_back("Casa");
  valors.push_back(936857412);
  std::cout << "Telefons passat a dos vectors:" << std::endl;
  for (unsigned int i = 0; i < claus.size(); i++)
    std::cout << claus[i] << " -> " << valors[i] << std::endl;
  std::cout<< "Constructor des de dos vectors:" << std::endl;
  bsl::Map<clau_t, valor_t> copy(claus, valors);
  std::cout << copy << std::endl;
  clau_t clau = "Casa Pares";
  valor_t val;
  if (copy.search(clau, val))
    std::cout << "Trobat " << clau << " amb valor " << val << std::endl;
  else
    std::cout << "No trobat " << clau << std::endl;
  bsl::Map<float, clau_t> mapa;
  mapa[3.14] = "pi";
  mapa[1.41] = "arrel";
  mapa[0.01] = "centesima";
  mapa[-9.8] = "gravetat";
  mapa[0.50] = "mig";
  std::cout << mapa << std::endl;
  mapa.erase(0.01);
  mapa[-9.8] = "gravetat terra";
  mapa[1.41] = "arrel de 2";
  std::cout << mapa << std::endl;
   
  return 0;
}
