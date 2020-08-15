#include <iostream>
#include <string>
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
  
private:
  int numOfFractions;
  int numerator, denominator;

public:
  Fraction();
  Fraction(int num, int den);
  Fraction(const Fraction &f); //copy constructor
  int getNumerator();
  int getDenominator(); 
  void setNumerator(int n);
  void setDenominator(int d);
  string toString();
  void add(Fraction &f);
  void subtract(Fraction &f); 
  void multiply(Fraction &f);
  void divide(Fraction &f);
  static Fraction add(const Fraction &f, const Fraction &g);
  static Fraction subtract(const Fraction &f, const Fraction &g); 
  static Fraction multiply(const Fraction &f, const Fraction &g); 
  static Fraction divide(const Fraction &f, const Fraction &g); 
  
};

#endif