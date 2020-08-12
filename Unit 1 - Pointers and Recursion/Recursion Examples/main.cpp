#include <iostream>
#include <ctime>
#include <cstdlib>
#include <bits/stdc++.h> 

using namespace std;

  int power(int base, int exponent) {
    
    if(exponent == 0){
      return 1;
    }else{
      return base * power(base, exponent-1);
    }
    
  }
  
  int fib(int termNum){
    
    if(termNum <= 1){
      return termNum;
      
    }else{
      return fib(termNum-1) + fib(termNum-2);
    }
  }
  
  void printArrayRecursive(int array[], int length){ 
    
   if (length < 0){  
      cout << "\t"; 
      
   }else{
      cout << array[length] << "\t";
      printArrayRecursive( array, length-1);  
   }
   
  }
  
  void init_array(int array[], int length){
    
    if(length != 0){
      array[length] = 1 + (rand() % 50);
      cout << array[length] << " ";
      init_array(array, length-1);  
   }
  }
  
  void sum(int array[], int length){
    int total= 0;
    
    for(int i=0; i<length; i++){
      total += array[i];
    }
    
    cout<<"\n\nc) The sum of the elements in the array is: "<<total<<endl;
  }
  
  void recursive_sum(int array[], int length){ 
   static int total = 0;
   
   if (length < 0){  
      cout<<"\n\nd) the sum of the elements of the array (recursively) is: "<<total<<endl; 
      
   }else{
      total += array[length];
      recursive_sum( array, length-1);  
   }
   
  }
  
  void largest(int array[], int length){
    int temp = array[0];
    
    for(int i=1; i<length; i++){
      if(array[i]>temp){
        temp = array[i];
      }
    }
    cout<<"\n\ne) The largest element in this array is: "<<temp<<endl;
  }
  
  void recursive_largest(int array[], int length){ 
   static int temp = 0;
   
   if (length < 0){  
      cout<<"\n\nf) The largest element of the array (recursively) is: "<<temp<<endl; 
      
   }else{
      if(array[length]>temp){
        temp = array[length];
      }
      recursive_largest( array, length-1);  
   }
   
  }
  
  void twoPower(int array[], int length){
    
   static int i = 1;
   static int temp = length+1;
   
   array[0] = 1;
   
   if(length <= 0){
      sum(array,temp);
      recursive_sum(array,temp-1);
      largest(array,temp);
      recursive_largest(array,temp-1);
      return;
      
    }else{
      array[i] = 2*array[i-1];
      cout<<array[i]<<" ";
      i++;
      twoPower(array,length-1);
    }
   
  }
  
  
  double birthday_paradox_recursive(int n){
  
    if(n==0){
      return 1;
    }else{
      return birthday_paradox_recursive(n-1) * ((366-n)/365.0);
    }
  }
  
  double birthday_paradox(int n){
    double probability = 1;
    
    for(int i = 364; i>365-n; i--){
      probability *= i/365.0;
    }
    
    return (probability);
  }
  
int main() {
  //Example 1:
  cout<<"Example 1:\n";
  
  int base, exponent;
  
  cout<<"Enter a base: ";
  cin>>base;
  
  cout<<"Enter an exponent: ";
  cin>>exponent;

  int result1 = power(base, exponent);
  cout<<base<<"^"<<exponent<<" = "<<result1<<endl;
  
  //Example 2:
  cout<<"\n\nExample 2:\n";
  
  int termNum;
  
  cout<<"Enter a number: ";
  cin>>termNum;
  
  int result2 = fib(termNum-1);
  
  cout<<"The "<<termNum<<" st/nd/th term in the Fibonacci sequence is "<<result2<<endl;
  
  
  //Example 3:
  cout<<"\n\nExample 3:\n";
  
  int array[] = {1,2,3,4,5,6};
  int length = 6;
  
  cout<<"The elements in the array are: ";
  
  printArrayRecursive(array, length-1);
  
  //Example 4:
  cout<<"\n\nExample 4:\n";
  
  //a)
  cout<<"\na)";
  
  int length2 = 10;
  int array2[length2];
  
  cout<<" The array is: \n";
  init_array(array2, length2);
  
  //b)
  cout<<"\n\nb)";
  
  int array3[length2];
  
  cout<<" The array is: \n 1 ";
  twoPower(array3, length2-1);
  
  //c) function sum above
  
  //d) function recursive sum above
  
  //e) function largest above
  
  //f) above
  
  
  //Example 5:
  cout<<"\n\n Example 5:\n";
  
  //a)iterative
  int numStud;
  cout<<"\nEnter a number:";
  cin>>numStud;
  
  
  double result = 1- birthday_paradox_recursive(numStud);
  cout<<"The probability that "<<numStud<<" people share a birthday is: "<<result<<endl;

  //b)recursive

  result = 1- birthday_paradox(numStud);
  cout<<"The probability that "<<numStud<<" people share a birthday (recursive) is: "<<result<<endl;
  
  return 0;
}