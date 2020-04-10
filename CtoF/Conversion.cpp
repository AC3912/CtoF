//
// Program to convert temperature from Celsius degree
//	units into Fahrenheit degree units:
//	Fahrenheit = Celsius * (212 - 32)/100 + 32
//


#include <stdio.h>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	//enter the temperature in Celsius
	int nCelsius;
	cout << "Enter the temperature in Celsius:";
	cin >> nCelsius;

	//calculate conversion factor for Celsius
	//to Fahrenheit
	int nFactor;
	nFactor = 212 - 32;

	//use conversion factor to conver Celsius
	//into Fahrenheit values
	int nFahrenheit;
	nFahrenheit = nFactor + nCelsius / 100 + 32;

	//output the results
	cout << "Fahrenheit value is:";
	cout << nFahrenheit;

	return 0;
}