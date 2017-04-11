//2016 Alessandro Fabbri, Stefano Sinigardi, BSD

#include <iostream>              
#include <vector>
#include <cmath>

#include "grafica_lib.hpp"

#ifndef M_PI
#define M_PI 3.14159265358979323846264338327950
#endif


using namespace std;

int main(int argc, char **argv) {

  double xmin = 0;
  double xmax = 2 * M_PI;
  int Nstep = 1000;
  double dx = (xmax-xmin)/(Nstep-1);
  std::vector<double> x, y1, y2, y3;

  for (int i = 0; i < Nstep; i++) {
    double xi = xmin + i*dx;
    x.push_back(xi);
    y1.push_back(sin(xi));
    y2.push_back(cos(xi));
    y3.push_back(0.0);
  }

  vvx.push_back(x); 
  vvy.push_back(y1);
  vvx.push_back(x);
  vvy.push_back(y2);
  vvx.push_back(x);
  vvy.push_back(y3);

  frame_xmin = -0.2;
  frame_xmax = 2*M_PI+0.2;
  frame_ymin = -1.2;
  frame_ymax = 1.2;

  // Start graphic
  CreateMyWindow();
  Fl::add_idle(idle_cb, 0);
  Fl::run();

  return 0;
}