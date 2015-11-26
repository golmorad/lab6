#include <iostream>
#include <cmath>

using namespace std;

int main() { 

const double lambda = -0.5;
int N= 100;

double yfw = 1.0;
double ybw = 1.0;
//double yana = 1.0; 
double tn = 5*log (0.5)/lambda;

double delta = tn / N;

cout << 0 << "\t" << yfw <<  "\t" << ybw << endl;
for (int i=0; i < N ; i++ ) {
  yfw = yfw + lambda * yfw * delta; 
  ybw = ybw / (1-lambda*delta);
    
  cout << delta*(i+1) << "\t" << yfw <<  "\t" << ybw << endl;
}

cout << "# " << lambda * delta << endl;


return 0 ; 

}

  