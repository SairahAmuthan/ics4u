#include "Fraction.h"

int main() {
  Fraction fraction1;
  
  int n,d;
  
  cout<<"Enter the numerator: ";
  cin>>n;
  
  cout<<endl;
  
  cout<<"Enter the denominator: ";
  cin>>d;
  
  cout<<endl;
  
  fraction1.setNumerator(n);
  fraction1.setDenominator(d);
  
  cout<<"Fraction: "<<fraction1.toString()<<endl;
  
  return 0;
}