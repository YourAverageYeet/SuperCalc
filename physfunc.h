#ifndef PHYSFUNC_H_DEFINED
#define PHYSFUNC_H_DEFINED

double pf_VelDT(double dist, double time);

double pf_AccelVT(double velInit, double velFin, double time);

double pf_GravPot(double height, double mass);

double pf_Kinetic(double mass, double velo);

double pf_VelKEm(double knrg, double mass);

double pf_WorkDist(double force, double dist);

double pf_FahrenCel(double temp);

double pf_CelKel(double temp);

double pf_KelCel(double temp);

double pf_CelFahren(double temp);

double pf_WavLen(double velo, double freq);

double pf_WavFreq(double len, double velo);

double pf_WavPeri(double freq);

double pf_WavVelo(double len, double freq);

double pf_Voltage(double current, double resist);

double pf_Current(double volts, double resist);

double pf_Resistance(double volts, double current);

double pf_RPower(double volts, double current);

double pf_SoluDens(double mass, double volume);

#endif // PHYSFUNC_H_DEFINED
