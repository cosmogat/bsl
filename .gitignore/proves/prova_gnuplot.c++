// 03-10-2015
// billy
// prova_gnuplot.c++
#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include "gnuplot"
using namespace std;
using namespace bsl;

typedef float tipus;

tipus pot(tipus x);
tipus ene(tipus x, tipus y);

int main () {
  Gnuplot plot;
  tipus x0 = -20.0, x1 = 20.0, p0 = -10, p1 = 10, delta = 0.1;
  vector<tipus> xdades, pdades, vdades;
  vector<vector<tipus> > potencial(2), fases(3);
  plot("set terminal qt persist");
  plot("set style data lines");
  plot("set grid");
  plot("set multiplot");
  plot("set xrange[%f:%f]", x0, x1);
  plot("set xlabel 'x'");
  plot("set ylabel 'V(x)'");
  for (tipus i = x0; i < x1; i += delta)
    xdades.push_back(i);
  for (tipus i = p0; i < p1; i += delta)
    pdades.push_back(i);
  for (tipus i = x0; i < x1; i += delta)
    vdades.push_back(pot(i));
  for (tipus i = 0; i < xdades.size(); i++) {
    potencial[0].push_back(xdades[i]);
    potencial[1].push_back(vdades[i]);
  }
  plot("set origin 0.0, 0.5");
  plot("set size 1.0, 0.5");
  plot("plot '%s' binary record=(-1, -1) notitle", plot.pbin(potencial));
  for (unsigned int i = 0; i < xdades.size(); i++)
    for (unsigned int j = 0; j < pdades.size(); j++) {
      fases[0].push_back(xdades[i]);
      fases[1].push_back(pdades[j]);
      fases[2].push_back(ene(pdades[j], vdades[i]));
    }
  plot("set origin 0.0, 0.0");
  plot("set size 1.0, 0.5");
  plot("set ylabel 'p'");
  plot("unset surface");
  plot("set view map");
  plot("set hidden3d");
  plot("set dgrid3d %d, %d, %d", 30, 30, 1);
  plot("set cntrparam levels 15");
  plot("set key outside");
  plot("set contour base");
  plot("splot '%s' binary record=(-1, -1) notitle", plot.pbin(fases));
  return 0;
}

tipus pot(tipus x) {
  return ((100 * x) / (25 + (x * x)));
}

tipus ene(tipus x, tipus y) {
  return ((x * x * 0.5) + y);
}
