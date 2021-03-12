#ifndef GEOMFUNC_H_DEFINED
#define GOEMFUNC_H_DEFINED

double gf_PtDist(double coordX1, double coordY1, double coordX2, double coordY2);

double gf_TriArea(double base, double height);

double gf_TrapArea(double base1, double base2, double height);

double gf_RectArea(double base, double height);

double gf_Circum(double diameter);

double gf_CircArea(double radius);

double gf_RectDiag(double length, double width, double height);

double gf_RectSA(double length, double width, double height);

double gf_RectVol(double length, double width, double height);

double gf_CylinLA(double radius, double height);

double gf_CylinTA(double radius, double height);

double gf_CylinVol(double radius, double height);

double gf_PyraVol(double baseArea, double height);

double gf_SphSA(double radius);

double gf_SphVol(double radius);

#endif // GEOMFUNC_H_DEFINED
