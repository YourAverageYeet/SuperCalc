#include <cmath>
#include "algefunc.h"

//----------------------------

long double af_Square(double numx){
	return (numx * numx);
}

long double af_Cube(double numx){
	return (numx * numx * numx);
}

double af_Expo(double base, double expo){
	return pow(base, expo);
}

double af_Tenx(double expo){
	return pow(10, expo);
}

double af_SquareRoot(double numx){
	return sqrt(numx);
}

double af_CubeRoot(double numx){
	return cbrt(numx);
}

double af_Natlog(double numx){
	return log(numx);
}

double af_Log(double numx){
	return (log(numx) / log(10));
}

double af_LogBase(double base, double numx){
	return (log(numx) / log(base));
}

unsigned long long af_Fact(int numx){
    if(numx==0||numx==1){
        return 1;
    } else {
        return(numx * af_Fact(numx-1));
    }
}
