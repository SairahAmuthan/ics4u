#include <iostream>
using namespace std;

int main() {
  
  bool *array;
  int len = 1000;
  array = new bool[len];
  
  for(int i=0; i<len; i++){
    array[i] = 1;
  }
  
  int i=2;
  
  while(i<len){
    
      if(array[i]==1){
        
        for(int x=2; x<=len; x++){
            if(x%i == 0 && x!= i){
              array[x] = 0;
            }
        }
          
      }
      
      i++;
  }
  
  cout<<"The prime numbers between 2 and 999 are: "<<endl;
  
  for(int x=2; x<len; x++){
    if(array[x] == 1){
      cout<<x<<" ";
    }
  }
   
  delete[] array;
  
  return 0;
}