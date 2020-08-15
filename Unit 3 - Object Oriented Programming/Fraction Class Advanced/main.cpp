#include "Fraction.h"

int main(){
  
  int num1, den1;
  char finished; 
  
  cout << "Please enter the numerator of a fraction1:" << endl;
  cin >> num1;
  
  cout << "Please enter the denominator of a fraction1:" << endl;
  cin >> den1;
  
  int num2, den2;
    
  cout << "\nPlease enter the numerator of a fraction2:" << endl;
  cin >> num2;
  
  cout << "Please enter the denominator of a fraction2:" << endl;
  cin >> den2;
  
  
  Fraction f(num1, den1);
  Fraction e(num2, den2);
  
  int mathProgram;
  cout << "\n\n\n1-addition, 2-subtraction, 3-multiplication, 4-division " << endl;
  cin >> mathProgram;

  if(mathProgram == 1){
    Fraction* d = Fraction::add(f, e);
    
    cout << "\n\n(Static) Answer: " << d->toString();
    f.add(e);
    cout << "\n(Updated) Answer: " << e.toString();
    
  }else if(mathProgram == 2){
    Fraction* d = Fraction::subtract(f, e);
    cout << "\n\n(Static) Answer: " << d->toString();
    f.subtract(e);
    cout << "\n(Updated) Answer: " << e.toString();
    
  }else if(mathProgram == 3){
    Fraction* d = Fraction::multiply(f, e);
    cout << "\n\n(Static) Answer: " << d->toString();
    f.multiply(e);
    cout << "\n(Updated) Answer: " << e.toString();
    
  }else if(mathProgram == 4){
    Fraction* d = Fraction::divide(f, e);
    cout << "\n\n(Static) Answer: " << d->toString();
    f.divide(e);
    cout << "\n(Updated) Answer: " << e.toString();
    
  }
  cin >> finished;
  
  return 0;
}