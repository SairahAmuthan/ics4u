#include <iostream>
#include <string>
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
  
private:
	int numerator, denominator;

public:
  Fraction();
  Fraction(int num, int den);
  int getNumerator(); 
  int getDenominator(); 
  void setNumerator(int n); 
  void setDenominator(int d); 
  string toString(); 
  
};


#endif