#include "Fraction.h"

Fraction :: Fraction(){
  numerator = 0;
  denominator = 1;
  
}

Fraction :: Fraction(int n, int d){
  setNumerator(n);
  setDenominator(d);
  
}
Fraction::Fraction(const Fraction &f){
  numerator = f.numerator;
  denominator = f.denominator;

}

void Fraction::add(Fraction &f){
  int num = (f.getNumerator()*denominator)+(numerator*f.getDenominator());
  int den = (f.getDenominator()*denominator);

  f.setNumerator(num);
  f.setDenominator(den);
}

Fraction* Fraction::add(const Fraction &f, const Fraction &g){
  int num = (f.getNumerator()*g.getDenominator())+(g.getNumerator()*f.getDenominator());
  int den = (f.getDenominator()*g.getDenominator());

  Fraction* b = new Fraction(num, den);

  return b;
}

void Fraction::subtract(Fraction &f){
  int num = (numerator*f.getDenominator())-(f.getNumerator()*denominator);
  int den = (f.getDenominator()*denominator);

  f.setNumerator(num);
  f.setDenominator(den);
}

Fraction* Fraction::subtract(const Fraction &f, const Fraction &g){
  int num = (f.getNumerator()*g.getDenominator())-(g.getNumerator()*f.getDenominator());
  int den = (f.getDenominator()*g.getDenominator());

  Fraction* b = new Fraction(num, den);
  return b;
}

void Fraction::multiply(Fraction &f){
  int num = (f.getNumerator()*numerator);
  int den = (f.getDenominator()*denominator);

  f.setNumerator(num);
  f.setDenominator(den);
}

Fraction* Fraction::multiply(const Fraction &f, const Fraction &g){
  int num = (f.getNumerator()*g.getNumerator());
  int den = (f.getDenominator()*g.getDenominator());

  Fraction* b = new Fraction(num, den);
  return b;
}

void Fraction::divide(Fraction &f){
  int den = (f.getNumerator()*denominator);
  int num = (f.getDenominator()*numerator);

  f.setNumerator(num);
  f.setDenominator(den);
}

Fraction* Fraction::divide(const Fraction &f, const Fraction &g){
  int num = (f.getNumerator()*g.getDenominator());
  int den = (f.getDenominator()*g.getNumerator());

  Fraction* b = new Fraction(num, den);
  return b;
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


