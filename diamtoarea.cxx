#include <iostream>
using namespace std;

int main(){
	//Declaratiob and initialization value of pi
	const float pi = 3.14f;
	
	// Declaring the variables
	float diameter, area;
	
	//Asking user to input diameter
	cout << " Enter diameter: ";
	cin>> diameter;
	
	//Computation of the area
	area = pi * diameter * diameter;
	
	//Output of the area of the circle
	cout << " The area of the circle is " << area<< endl;
	
	
	return 0;
	}