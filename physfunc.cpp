#include <cmath>
#include "physfunc.h"

//----------------------------

double pf_VelDT(double dist, double time){
	return(dist / time);
}

double pf_AccelVT(double velInit, double velFin, double time){
	return((velFin - velInit) / time);
}

double pf_GravPot(double height, double mass){
	return(height * mass * 9.80665);
}

double pf_Kinetic(double mass, double velo){
	return(0.5 * mass * (velo * velo));
}

double pf_VelKEm(double knrg, double mass){
	return(sqrt((2 * knrg) / mass));
}

double pf_WorkDist(double force, double dist){
	return(force * dist);
}

double pf_FahrenCel(double temp){
	return((temp - 32) * (5 / 9));
}

double pf_CelKel(double temp){
	return(temp + 273.15);
}

double pf_KelCel(double temp){
	return(temp - 273.15);
}

double pf_CelFahren(double temp){
	return(temp * (9 / 5) + 32);
}

double pf_WavLen(double velo, double freq){
	return(velo / freq);
}

double pf_WavFreq(double len, double velo){
	return(len * velo);
}

double pf_WavPeri(double freq){
	return(1 / freq);
}

double pf_WavVelo(double len, double freq){
	return(len * freq);
}

double pf_Voltage(double current, double resist){
	return(current * resist);
}

double pf_Current(double volts, double resist){
	return(volts / resist);
}

double pf_Resistance(double volts, double current){
	return(volts / current);
}

double pf_RPower(double volts, double current){
	return(volts * current);
}

double pf_SoluDens(double mass, double volume){
	return(mass / volume);
}
