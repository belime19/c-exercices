#include <iostream>
#include <cmath>
#include "Fonctions.h"
using namespace std;

int main() {
    for(int n=1;n<=10000;n++){
        double error = abs(sum(n) - pow(M_PI,2.0)/6);
        cout << "n=" << n << "\t" << "s(n)=" << sum(n) << "\t" << "error=" << error << endl;
    }
    return 0;

}
