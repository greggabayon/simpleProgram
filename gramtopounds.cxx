#include <iostream>
using namespace std;

int main(){
	//Declaring variables
	float gram, pounds;
	
	//Asking user to input gram
	cout<< " Enter gram(s) ";
	cin>> gram;
	
	//Computation of gram to pounds
	pounds = gram * 0.0022;
	
	//Output of fhe gram to pounds
	cout<< gram<<  " gram(s) is equivalent to " << pounds << endl;
	return 0;
	}