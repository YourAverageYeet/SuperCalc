#define _USE_MATH_DEFINES
#include <cmath>
#include "geomfunc.h"

//----------------------------

double gf_PtDist(double coordX1, double coordY1, double coordX2, double coordY2){
	return(sqrt(pow((coordX2 - coordX1), 2) + pow((coordY2 - coordY1), 2)));
}

double gf_TriArea(double base, double height){
	return(0.5 * base * height);
}

double gf_TrapArea(double base1, double base2, double height){
	return(0.5 * height * (base1 + base2));
}

double gf_RectArea(double base, double height){
	return(base * height);
}

double gf_Circum(double diameter){
	return(M_PI * diameter);
}

double gf_CircArea(double radius){
	return(M_PI * pow(radius, 2));
}

double gf_RectDiag(double length, double width, double height){
	return(sqrt(pow(length, 2) + pow(width, 2) + pow(height, 2)));
}

double gf_RectSA(double length, double width, double height){
	return((2*length*width) + (2*width*height) + (2*length*height));
}

double gf_RectVol(double length, double width, double height){
	return(length * width * height);
}

double gf_CylinLA(double radius, double height){
	return(2 * M_PI * radius * height);
}

double gf_CylinTA(double radius, double height){
	return(gf_CylinLA(radius, height) + (2 * M_PI * pow(radius, 2)));
}

double gf_CylinVol(double radius, double height){
	return(gf_CircArea(radius) * height);
}

double gf_PyraVol(double baseArea, double height){
	return((1 / 3) * baseArea * height);
}

double gf_SphSA(double radius){
	return(4 * M_PI * pow(radius, 2));
}

double gf_SphVol(double radius){
	return((4 / 3) * M_PI * pow(radius, 3));
}
