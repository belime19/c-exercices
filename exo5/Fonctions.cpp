#include "Fonctions.h"
#include <cmath>

double sum (int n){
    double result=0.0;
    for (int i=1;i<=n;i++){
        result+=1/pow((double)i,(double)2.0);
    }
    return result;
}