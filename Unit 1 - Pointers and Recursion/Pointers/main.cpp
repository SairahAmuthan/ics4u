#include <iostream>
using namespace std;

int main() {
  
  //Exercise 1:
  int number = 123;
  int *pnumber = &number;
  
  cout<<"Exercise 1: \n"<< endl;
  cout<<"Value of variable number: " << number <<endl;
  cout<<"Address of number: " << &number <<endl;
  cout<<"Value of pnumber: " << pnumber << endl;
  cout<<"Value of *pnumber: " << number << endl;
  
  
  //Exercise 2:
  int num1 = 50;
  int num2 = 100;
  int *pnum = NULL;
  pnum = &num1;
  num1 = *pnum + 10;
  
  cout<<"\n\nExercise 2: \n"<< endl;
  cout<<"Value of num1: " << num1 <<endl;
  cout<<"Value of pnum: " << pnum <<endl;
  
  pnum = &num2;
  num1 = *pnum * 10;
  
  cout<<"\nValue of num1: " << num1 <<endl;
  cout<<"Value of pnum: " << pnum << endl;
  cout<<"Value of *pnum: " << *pnum << endl;
  
  //Exercise 3:
  
  cout <<"\n\nExercise 3:"<<endl;
  
  double value1 = 200000;
  double value2;
  
  //a) Declare the variable lPtr to be a pointer to an object of type double. 
  double *lPtr;
  
  //b) Assign the address of variable value1 to pointer variable lPtr.
  lPtr = &value1;
  
  //c)  Print the value of the object pointed to by lPtr. 
  cout<<"Value of object pointed to lPtr: " << *lPtr << endl;
  
  //d)  Assign the value of the object pointed to by lPtr to variable value2. 
  value2 = *lPtr;
  
  //e)  Print the value of value2
  cout<< "Value of value2: " << value2 << endl;
  
  //f) Print the address of value1. 
  cout<<"Address of value1: " << &value1<< endl;
  
  //g) Print the address stored in lPtr. Is the value printed the same as the address of value1?  
  cout<<"Address stored in lPtr: " << &lPtr << endl;
  
  cout<<"\nThe address stored in lPtr is not the same as the address of value1."<<endl;
  
  return 0;
}