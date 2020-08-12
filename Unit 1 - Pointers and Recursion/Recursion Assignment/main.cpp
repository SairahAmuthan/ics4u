#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void exercise1a(int termNum){
  static int numOfTerms = termNum;
  static int i= 1;
  static int numAtTerm = 0;
  
  if(i<=numOfTerms){
     numAtTerm = 3 - 2*(i-1);
     cout<<numAtTerm<<" , ";
     i++;
     exercise1a(termNum-1);
  }
}

void exercise1b(int termNum){
  static int numOfTerms = termNum;
  static int i= 1;
  static int numAtTerm = 0;
  
  if(i<=numOfTerms){
     numAtTerm = -1 * pow(2,i-1);
     cout<<numAtTerm<<" , ";
     i++;
     exercise1b(termNum-1);
  }
}

int gcd(int x, int y) { 
    if(y == 0){ 
        return x; 
    }
    return gcd(y, x % y);  
}

void isPalindrome(string origs, string news){
  if(origs == news){
    cout<<"\nIS PALINDROME!";
  }else{
    cout<<"\n\nis NOT palindrome!";
  }
  
}

void print_reverse(string s, int size){
  static string newS;
  
  if(size>=0){
    
    cout<<s.at(size);
    string letter(1,s.at(size));
    
    newS.append(letter);
    print_reverse(s, size-1);
    
  }else{
    isPalindrome(s,newS);
  }
  
}

int decimalToBinary(int num){
  static int binary = 0;
  
  if(num == 0){
    binary = 0;
    return binary;
    
  }else{
    binary = num%2 + 10*(decimalToBinary(num/2));
    return binary;
  }
}

float findAverage(float array[], int size){
  static float average = 0;
  static float length = size;
  
  if(size>=0){
    average += array[size]/length;
    findAverage(array, size-1);
  }
  
  return average;
  
}

void fractorial(int n, int len){
  static int i = 1;
  
  
  if(n>=1){

    if(n == 1){
      cout<<"The fractorial for "<<len<<" is: "<<i<<endl;
    }

    if(i%n == 0){   
      fractorial(n-1,len);
    }
    
    else{
      i++;
      fractorial(len, len);
    }
  }
}


int main() {
  
  //Exercise 1

  int n;
  cout<<"Enter a number: ";
  cin>>n;
  
  //a)
  cout<<"\n\ntn = tn-1 - 2:\n";
  exercise1a(n);
  //b)
  cout<<"\n\ntn = 2tn-1:\n";
  exercise1b(n);
  
  //Exercise 2 
  
  cout<<"\n\nExercise 2:\n";
  
  int x,y;
  cout<<"Enter x: ";
  cin>>x;
  cout<<"Enter y: ";
  cin>>y;
  
  cout<<"\nThe GCD of "<<x<<" and "<<y<<" is "<<gcd(x,y);
  
  
  //Exercise 3
   string s;
   
   cout<<"\n\nExercise 3:\n\n";
   
   cout<<"Enter a word: ";
   cin>>s;
   int size = s.size() -1;
   
   cout<<"The reverse of the string is: ";
   print_reverse(s,size);
  
   
   //Exercise 4
   cout<<"\n\nExercise 4:\n\n";
   
   int a;
   cout<<"Enter integer: ";
   cin>>a;
   
   int binary = decimalToBinary(a);
   string str = to_string(binary);
   
   cout<<"\nThe binary for "<<a<<" is: " + str;
   
   //Exercise 5
   cout<<"\n\nExercise 5:\n\n";
   
   float array[] = {12.0,31.0,54.0,71.0,93.0};
   int size2 = sizeof(array)/sizeof(array[0]);
   
   float average = findAverage(array, size2);
   cout<<"The average is "<< average<<endl;
   
   //Exercise 6
  cout<<"\n\nExercise 6:\n\n";
  
  int fractorialNum;
  cout<<"Enter your number:";
  cin>>fractorialNum;
  
  fractorial(fractorialNum,fractorialNum);
}