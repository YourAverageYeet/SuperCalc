#include <iostream>
#include <string>
#include "algefunc.h"
#include "physfunc.h"
#include "geomfunc.h"
#include "screenclr.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int choice;
double input1;
double input2;
double input3;
double input4;
int forChk;
int errNum;

void mainCont(){
	cout << "\nAnother opperation? [1 for \"Yes\"/0 for \"No\"] ->";
	cin >> forChk;
}

string errOut(){
	if(errNum == 1){
		return "Main Menu.";
	} else if(errNum == 2){
		return "Basic Opperations Menu.";
	} else if(errNum == 3){
		return "Algebraic Opperations Menu.";
	} else if(errNum == 4){
		return "Physics Opperations Menu.";
	} else if(errNum == 5){
		return "Geometry Opperations Menu.";
	} else {
		return "Somewhere. (Please tell me how you got this error, and I'll see if I can fix it.)";
	}
}

int main(int argc, char** argv) {
	for(;;){
		forChk = 0;
		ClearScreen();
		cout << "SuperCalc!\n";
		cout << "1. Basic Operations [+,-,*,/,%]\n";
		cout << "2. Algebraic Functions [Square root, 10^x, Etc.]\n";
		cout << "3. Physics Calculations [Velocity, Acceleration, Etc.]\n";
		cout << "4. Geometrical Calculations [Area, volume, Etc.]\n";
		cout << "0. Exit\n";
		cout << "->";
		cin >> choice;
		ClearScreen();
		switch(choice){
			case(1):{
				cout << "Basic Opperations Menu:\n";
				cout << "1. Addition\n";
				cout << "2. Subtraction\n";
				cout << "3. Multiplication\n";
				cout << "4. Division\n";
				cout << "5. Modulo\n";
				cout << "0. Return to Main Menu\n";
				cout << "->";
				cin >> choice;
				switch(choice){
					case(1):{
						ClearScreen();
						cout << "Addend #1? ->";
						cin >> input1;
						cout << "Addend #2? ->";
						cin >> input2;
						cout << "Sum: " << (input1 + input2);
						mainCont();
						break;
					}
					case(2):{
						ClearScreen();
						cout << "Minuend (First Part)? ->";
						cin >> input1;
						cout << "Subtrahend (Second Part)? ->";
						cin >> input2;
						cout << "Difference: " << (input1 - input2);
						mainCont();
						break;
					}
					case(3):{
						ClearScreen();
						cout << "Factor #1? ->";
						cin >> input1;
						cout << "Factor #2? ->";
						cin >> input2;
						cout << "Product: " << (input1 * input2);
						mainCont();
						break;
					}
					case(4):{
						ClearScreen();
						cout << "Dividend (First Part)? ->";
						cin >> input1;
						cout << "Divisor (Second Part)? ->";
						cin >> input2;
						cout << "Quotient: " << (input1 / input2);
						mainCont();
						break;
					}
					case(5):{
						ClearScreen();
						cout << "Dividend (First Part)? ->";
						cin >> input1;
						cout << "Divisor (Second Part)? ->";
						cin >> input2;
						cout << "Remainder: " << ((int)input1 % (int)input2);
						mainCont();
						break;
					}
					case(0):{
						forChk = 1;
						break;
					}
					default:{
						errNum = 2;
						break;
					}
				}
				break;
			}
			case(2):{
				ClearScreen();
				cout << "Algebraic Opperations Menu:\n";
				cout << "1. Square\n";
				cout << "2. Cube\n";
				cout << "3. Exponential\n";
				cout << "4. 10 to the Power of X\n";
				cout << "5. Square Root\n";
				cout << "6. Cube Root\n";
				cout << "7. Natural Logarithm\n";
				cout << "8. Base-10 Logarithm\n";
				cout << "9. Custom Base Logarithm\n";
				cout << "10. Factorial\n";
				cout << "0. Return to Main Menu\n";
				cout << "->";
				cin >> choice;
				switch(choice){
					case(1):{
						ClearScreen();
						cout << "Number to square? ->";
						cin >> input1;
						cout << "Square: " << af_Square(input1);
						mainCont();
						break;
					}
					case(2):{
						ClearScreen();
						cout << "Number to cube? ->";
						cin >> input1;
						cout << "Cube: " << af_Cube(input1);
						mainCont();
						break;
					}
					case(3):{
						ClearScreen();
						cout << "Base? ->";
						cin >> input1;
						cout << "Exponent? ->";
						cin >> input2;
						cout << "Result: " << af_Expo(input1, input2);
						mainCont();
						break;
					}
					case(4):{
						ClearScreen();
						cout << "Exponent? ->";
						cin >> input1;
						cout << "Result: " << af_Tenx(input1);
						mainCont();
						break;
					}
					case(5):{
						ClearScreen();
						cout << "Find the square root of? ->";
						cin >> input1;
						cout << "Square Root: " << af_SquareRoot(input1);
						mainCont();
						break;
					}
					case(6):{
						ClearScreen();
						cout << "Find the cube root of? ->";
						cin >> input1;
						cout << "Cube Root: " << af_CubeRoot(input1);
						mainCont();
						break;
					}
					case(7):{
						ClearScreen();
						cout << "Find the natural logarithm of? ->";
						cin >> input1;
						cout << "Nat. Log.: " << af_Natlog(input1);
						mainCont();
						break;
					}
					case(8):{
						ClearScreen();
						cout << "Find the base-10 log of? ->";
						cin >> input1;
						cout << "Base-10 Log: " << af_Log(input1);
						mainCont();
						break;
					}
					case(9):{
						ClearScreen();
						cout << "Find the log-baseX of? ->";
						cin >> input1;
						cout << "What is the base? ->";
						cin >> input2;
						cout << "Log Base " << input1 << ": " << af_LogBase(input2, input1);
						mainCont();
						break;
					}
					case(10):{
						ClearScreen();
						cout << "Find the factorial of? ->";
						cin >> input1;
						cout << input1 << "! = " << af_Fact(input1);
						mainCont();
						break;
					}
					case(0):{
						forChk = 1;
						break;
					}
					default:{
						errNum = 3;
						break;
					}
				}
				break;
			}
			case(3):{
				ClearScreen();
				cout << "Physics Calculations Menu:\n";
				cout << "1. Velocity from Distance and Time\n";
				cout << "2. Acceleration from Velocity and Time\n";
				cout << "3. Gravitational Potential Energy\n";
				cout << "4. Kinetic Energy\n";
				cout << "5. Velocity from Kinetic Energy and Mass\n";
				cout << "6. Work done over a Distance\n";
				cout << "7. Fahrenheit to Celsius\n";
				cout << "8. Celsius to Kelvin\n";
				cout << "9. Kelvin to Celsius\n";
				cout << "10. Celsius to Fahrenheit\n";
				cout << "11. Wavelength from Frequency and Velocity\n";
				cout << "12. Frequency from a wave's Velocity and Length\n";
				cout << "13. Period of a wave from Length and Frequency\n";
				cout << "14. Velocity of a wave from Lenth and Frequency\n";
				cout << "15. Voltage of a circut\n";
				cout << "16. Current of a circut\n";
				cout << "17. Resistance in a circut\n";
				cout << "18. Power output of a resistor in a circut\n";
				cout << "19. Solubility of a substance\n";
				cout << "20. Density of a substance\n";
				cout << "0. Return to Main Menu\n";
				cout << "->";
				cin >> choice;
				switch(choice){
					case(1):{
						ClearScreen();
						cout << "Distance Traveled? ->";
						cin >> input1;
						cout << "Time Taken? ->";
						cin >> input2;
						cout << "Velocity of object: " << pf_VelDT(input1, input2);
						mainCont();
						break;
					}
					case(2):{
						ClearScreen();
						cout << "Initial Velocity? ->";
						cin >> input1;
						cout << "Final Velocity? ->";
						cin >> input2;
						cout << "Time Taken? ->";
						cin >> input3;
						cout << "Acceleration of object: " << pf_AccelVT(input1, input2, input3);
						mainCont();
						break;
					}
					case(3):{
						cout << "Mass of object? ->";
						cin >> input1;
						cout << "Height of object from ground? ->";
						cin >> input2;
						cout << "Velocity of object: " << pf_GravPot(input2, input1);
						mainCont();
						break;
					}
					case(4):{
						cout << "Mass of object? ->";
						cin >> input1;
						cout << "Velocity of object? ->";
						cin >> input2;
						cout << "Kinetic Energy of object: " << pf_Kinetic(input1, input2);
						mainCont();
						break;
					}
					case(5):{
						cout << "Kinetic Energy of object? ->";
						cin >> input1;
						cout << "Mass of object? ->";
						cin >> input2;
						cout << "Velocity of object: " << pf_VelKEm(input1, input2);
						mainCont();
						break;
					}
					case(6):{
						cout << "Force exerted on object? ->";
						cin >> input1;
						cout << "Distance of application of force? ->";
						cin >> input2;
						cout << "Work done on object: " << pf_WorkDist(input1, input2);
						mainCont();
						break;
					}
					case(7):{
						cout << "Fahrenheit? ->";
						cin >> input1;
						cout << "Celsius: " << pf_FahrenCel(input1);
						mainCont();
						break;
					}
					case(8):{
						cout << "Celsius? ->";
						cin >> input1;
						cout << "Kelvin: " << pf_CelKel(input1);
						mainCont();
						break;
					}
					case(9):{
						cout << "Kelvin? ->";
						cin >> input1;
						cout << "Celsius: " << pf_KelCel(input1);
						mainCont();
						break;
					}
					case(10):{
						cout << "Celsius? ->";
						cin >> input1;
						cout << "Fahrenheit: " << pf_CelFahren(input1);
						mainCont();
						break;
					}
					case(11):{
						cout << "Frequency of wave? ->";
						cin >> input1;
						cout << "Velocity of wave? ->";
						cin >> input2;
						cout << "Wavelength: " << pf_WavLen(input2, input1);
						mainCont();
						break;
					}
					case(12):{
						cout << "Wavelength? ->";
						cin >> input1;
						cout << "Wave Velocity? ->";
						cin >> input2;
						cout << "Frequency of wave: " << pf_WavFreq(input1, input2);
						mainCont();
						break;
					}
					case(13):{
						cout << "Frequency of Wave? ->";
						cin >> input1;
						cout << "Period of Wave: " << pf_WavPeri(input1);
						mainCont();
						break;
					}
					case(14):{
						cout << "Wavelength? ->";
						cin >> input1;
						cout << "Wave Frequency? ->";
						cin >> input2;
						cout << "Velocity of wave: " << pf_WavVelo(input1, input2);
						mainCont();
						break;
					}
					case(15):{
						cout << "Current in circut? ->";
						cin >> input1;
						cout << "Resistance in circut? ->";
						cin >> input2;
						cout << "Voltage in circut: " << pf_Voltage(input1, input2);
						mainCont();
						break;
					}
					case(16):{
						cout << "Voltage in circut? ->";
						cin >> input1;
						cout << "Resistance in circut? ->";
						cin >> input2;
						cout << "Current in circut: " << pf_Current(input1, input2);
						mainCont();
						break;
					}
					case(17):{
						cout << "Voltage in circut? ->";
						cin >> input1;
						cout << "Current in circut? ->";
						cin >> input2;
						cout << "Resistance in circut: " << pf_Resistance(input1, input2);
						mainCont();
						break;
					}
					case(18):{
						cout << "Voltage in circut? ->";
						cin >> input1;
						cout << "Current in circut? ->";
						cin >> input2;
						cout << "Power output: " << pf_RPower(input1, input2);
						mainCont();
						break;
					}
					case(19):{
						cout << "Mass of solute? ->";
						cin >> input1;
						cout << "Volume of solvent? ->";
						cin >> input2;
						cout << "Solubility: " << pf_SoluDens(input1, input2);
						mainCont();
						break;
					}
					case(20):{
						cout << "Mass of object? ->";
						cin >> input1;
						cout << "Volume of pbject? ->";
						cin >> input2;
						cout << "Density of object: " << pf_SoluDens(input1, input2);
						break;
					}
					case(0):{
						forChk = 1;
						break;
					}
					default:{
						errNum = 4;
						break;
					}
				}
				break;
			}
			case(4):{
				ClearScreen();
				cout << "Geometry Calculations Menu:\n";
				cout << "1. Distance between two points on a plane\n";
				cout << "2. Area of a Triangle\n";
				cout << "3. Area of a Trapezoid\n";
				cout << "4. Area of a Rectangle\n";
				cout << "5. Circumference of a Circle\n";
				cout << "6. Area of a Circle\n";
				cout << "7. Diagonal of a Rectangular Solid\n";
				cout << "8. Surface Area of a Rectangular Solid\n";
				cout << "9. Volume of a Rectangular Solid\n";
				cout << "10. Lateral Surface Area of a Cylinder\n";
				cout << "11. Total Surface Area of a Cylinder\n";
				cout << "12. Volume of a Cylinder\n";
				cout << "13. Volume of a Pyramid\n";
				cout << "14. Surface Area of a Sphere\n";
				cout << "15. Volume of a Sphere\n";
				cout << "0. Return to Main Menu\n";
				cout << "->";
				cin >> choice;
				switch(choice){
					case(1):{
						ClearScreen();
						cout << "X Coordinate 1? ->";
						cin >> input1;
						cout << "Y Coordinate 1? ->";
						cin >> input2;
						cout << "X Coordinate 2? ->";
						cin >> input3;
						cout << "Y Coordinate 2? ->";
						cin >> input4;
						cout << "Distance: " << gf_PtDist(input1, input2, input3, input4);
						mainCont();
						break;
					}
					case(2):{
						ClearScreen();
						cout << "Base of Triangle? ->";
						cin >> input1;
						cout << "Height of Triangle? ->";
						cin >> input2;
						cout << "Area: " << gf_TriArea(input1, input2);
						mainCont();
						break;
					}
					case(3):{
						ClearScreen();
						cout << "Top Base of Trapezoid? ->";
						cin >> input1;
						cout << "Bottom Base of Trapezoid? ->";
						cin >> input2;
						cout << "Height of Trapozoid? ->";
						cin >> input3;
						cout << "Area: " << gf_TrapArea(input1, input2, input3);
						mainCont();
						break;
					}
					case(4):{
						ClearScreen();
						cout << "Length of Rectangle? ->";
						cin >> input1;
						cout << "Height of Rectangle? ->";
						cin >> input2;
						cout << "Area: " << gf_RectArea(input1, input2);
						mainCont();
						break;
					}
					case(5):{
						ClearScreen();
						cout << "Diameter of Circle? ->";
						cin >> input1;
						cout << "Circumference of Circle? ->" << gf_Circum(input1);
						break;
					}
					case(6):{
						ClearScreen();
						cout << "Radius of Circle? ->";
						cin >> input1;
						cout << "Area of Circle: " << gf_CircArea(input1);
						break;
					}
					case(7):{
						ClearScreen();
						cout << "Length of Solid? ->";
						cin >> input1;
						cout << "Width of Solid? ->";
						cin >> input2;
						cout << "Height of Solid? ->";
						cin >> input3;
						cout << "Diagonal Length: " << gf_RectDiag(input1, input2, input3);
						mainCont();
						break;
					}
					case(8):{
						ClearScreen();
						cout << "Length of Solid? ->";
						cin >> input1;
						cout << "Width of Solid? ->";
						cin >> input2;
						cout << "Height of Solid? ->";
						cin >> input3;
						cout << "Surface Area of Solid: " << gf_RectSA(input1, input2, input3);
						mainCont();
						break;
					}
					case(9):{
						ClearScreen();
						cout << "Length of Solid? ->";
						cin >> input1;
						cout << "Width of Solid? ->";
						cin >> input2;
						cout << "Height of Solid? ->";
						cin >> input3;
						cout << "Volume of Solid: " << gf_RectVol(input1, input2, input3);
						mainCont();
						break;
					}
					case(10):{
						ClearScreen();
						cout << "Radius of Cylinder? ->";
						cin >> input1;
						cout << "Height of Cylinder? ->";
						cin >> input2;
						cout << "Lateral Area of Cylinder: " << gf_CylinLA(input1, input2);
						mainCont();
						break;
					}
					case(11):{
						ClearScreen();
						cout << "Radius of Cylinder? ->";
						cin >> input1;
						cout << "Height of Cylinder? ->";
						cin >> input2;
						cout << "Total Area of Cylinder: " << gf_CylinTA(input1, input2);
						mainCont();
						break;
					}
					case(12):{
						ClearScreen();
						cout << "Radius of Cylinder? ->";
						cin >> input1;
						cout << "Height of Cylinder? ->";
						cin >> input2;
						cout << "Volume of Cylinder: " << gf_CylinVol(input1, input2);
						mainCont();
						break;
					}
					case(13):{
						cout << "Area of Base? ->";
						cin >> input1;
						cout << "Height of Pyramid? ->";
						cin >> input2;
						break;
					}
					case(14):{
						ClearScreen();
						cout << "Radius of Sphere? ->";
						cin >> input1;
						cout << "Surface Area of Sphere: " << gf_SphSA(input1);
						break;
					}
					case(15):{
						ClearScreen();
						cout << "Radius of Sphere? ->";
						cin >> input1;
						cout << "Volume of Sphere: " << gf_SphVol(input1);
						break;
					}
					case(0):{
						forChk = 1;
						break;
					}
					default:{
						errNum = 5;
						break;
					}
				}
				break;
			}
			case(0):{
				forChk = 0;
				break;
			}
			default:{
				errNum = 1;
				break;
			}
		}
		if(errNum != 0){
			cout << "Error in " << errOut() << "\n";
			cout << "Aborting...";
			return errNum;
		}
		if(forChk != 1){
			break;
		}
	}
	return 0;
}
