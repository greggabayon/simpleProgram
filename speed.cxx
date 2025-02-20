#include <iostream>
using namespace std;

int main(){
	//Declaring variables
	int speed, time, distance;
	
	//Asking user to input distance
	cout<<" Enter distance in meters: ";
	cin>> distance;
	
	//Asking user to input time
	cout<<" Enter time in seconds: ";
	cin>> time;
	
	//Computation of speed
	speed = distance / time;
	
	//Output of the speed in miles per second
	cout<< "The speed of the car is " << speed << " m/s " << endl;
	return 0;
	}