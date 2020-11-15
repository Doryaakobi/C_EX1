#include "myMath.h"

#define e  2.718281828;

double Exponent(int x) {
    double result = e;
    for (int i = 0; i < x; i++){
        result *= e;
    }
    
    return result;
}

double Power(double x,int y){
    double result = x;
    for (int i = 0; i < y; i++){
        result*= x;
    }
    return result;
}

















