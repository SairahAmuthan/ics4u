#include "Fraction.h"

Fraction :: Fraction(){
  numerator = 0;
  denominator = 1;
  
}

Fraction :: Fraction(int n, int d){
  setNumerator(n);
  setDenominator(d);
  
}

#include <sstream>

string Fraction :: toString(){
  stringstream ss;
  
  ss << numerator;
  ss << " / ";
  ss << denominator;
  
  string fraction = ss.str();
  
  return fraction;
}

int Fraction :: getNumerator(){
  return numerator;
}

int Fraction :: getDenominator(){
  return denominator;
}

void Fraction :: setNumerator(int n){
  numerator = n;
}

void Fraction :: setDenominator(int d){
  denominator = d;
}


