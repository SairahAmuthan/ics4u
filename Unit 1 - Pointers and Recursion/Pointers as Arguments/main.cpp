#include <iostream>
#include <math.h>
using namespace std;

void cubeByPointer(int *num){
  cout<<"The cube of "<<*num<<" is "<<(*num)*(*num)*(*num);
}

void sumTwoInt(int *num1,int *num2){
  cout<<"The sum of "<<*num1<<" and "<<*num2<<" is "<<*num1 +*num2<<endl;
  
}

void circle(int *prad,double *ppi, int *pdiam){
  cout<<"The circumference of the circle is "<<(*pdiam)*(*ppi)<<endl;
  cout<<"The area of the circle is "<<(*ppi)*(*prad)*(*prad)<<endl;
}

bool quadEquation(int a,int b,int c,double *sol1,double *sol2){
  int temp = (-b+sqrt(pow(b,2)-4*a*c))/2*a;
  int temp2 = (-b-sqrt(pow(b,2)-4*a*c))/2*a;
  
  *sol1 = temp;
  *sol2 = temp2;
  
  if(pow(b,2)-4*a*c >0){
  return true;
  }
  
  return false;
}

void swap(float *p1, float *p2){
  
  float *temp; 
  temp = p1; 
  p1 = p2; 
  p2 = temp; 
  
  cout<<"First number is now: "<<*p1<< "\nThe second number is now: "<<*p2;
}

void SquareComplex(double &e, double &f) { 
  double temp = e;
  e = e*e - f*f; 
  f = 2*temp*f; 

} 

int main(){
  
  //Exercise 1
  cout<<"Execise 1:\n\n";
  int num;
  cout<<"Enter a number."<<endl;
  cin>>num;
  
  int *pnum = &num;
  
  cubeByPointer(pnum);
  
   //Exercise 2
  cout<<"\n\nExecise 2:\n\n";
  int num1;
  cout<<"Enter the first number: ";
  cin>>num1;
  
  int num2;
  cout<<"Enter the second number: ";
  cin>>num2;
  
  int *pnum1 = &num1;
  int *pnum2 = &num2;
  
  sumTwoInt(pnum1,pnum2);
  
  //Exercise 3
  cout<<"\n\nExecise 3:\n\n";
  int radius;
  int diameter;
  double pi = 3.14159;
  
  cout<<"Enter the radius: ";
  cin>>radius;
  
  diameter = radius*2;
  
  int *prad = &radius;
  int *pdiam = &diameter;
  double *ppi = &pi;
  
  circle(prad,ppi,pdiam);
  
  //Exercise 4
  cout<<"\n\nExecise 4:\n\n";
  int a;
  int b;
  int c;
  
  cout<<"Enter the a value: ";
  cin>>a;
  cout<<"Enter the b value: ";
  cin>>b;
  cout<<"Enter the c value: ";
  cin>>c;
  
  double none = 0;
  double non2 = 0;

  double *sol1 = &none;
  double *sol2 = &non2;

  if(quadEquation(a,b,c,sol1,sol2) == true){
    cout<<"\nThere are solutions" <<endl;
  }else{
    cout<<"There are no solutions"<<endl;
  }
  

  
  //Exercise 5
  cout<<"\n\nExecise 5:\n\n";
  
  float n1 = 3;
  float n2 = 7;
  cout<<"The first number is "<<n1<<"\nThe second number is "<<n2<<"\n\n";
  swap(&n1,&n2);
 
 //Exercise 6
  cout<<"\n\nExecise 6:\n\n";
  
  double l = 5;
  double m = 2;
  double e = l;
  double f = m;
  
  cout<<"e is: "<<e<<endl;
  cout<<"f is: "<<f<<endl;
  
  SquareComplex(e, f);
  
  cout<<"e is now: "<<e<<endl;
  cout<<"f is now: "<<f;

  return 0;
}

