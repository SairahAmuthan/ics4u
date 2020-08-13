#include <iostream>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h> 
#include <stdio.h>
using namespace std;

void binSearch(int array[], int start, int size, int value){
  bool numFound = false;
  
  int mid = (start+size)/2;
  
  if(array[mid] == value){
    numFound = true;
    cout<<"\nThe number was found at (binary): "<< mid;
  }
  
  if(array[mid] > value){
    
    for(int i=start; i<mid; i++){
      
      if(i==mid-1){
        cout<<array[i]<<"\n";
      }
      cout<<array[i]<<" ";
    }
    
    binSearch(array, start, mid-1, value);
    
  }
  
   if(array[mid] < value){
    for(int i=mid; i<=size; i++){
      
      if(i==size){
        cout<<array[i]<<"\n";
      }
      cout<<array[i]<<" ";
    }
    
    binSearch(array, mid+1, size, value);
  }
  
  if(mid<0){
    cout<<"-1";
  }
}

void linSearch(int array[], int size, int value){
  
  bool numFound = false;

  for(int i=0; i<size; i++){
    
    if(array[i] == value){
      numFound = true;
      cout<<"The number was found at: "<<i<<endl;
      i = size;
    }
  }
  
  if(numFound == false){
    cout<<"-1"<<endl;
  }
  
}

void createRndArray(int size, int min, int max){
  
  int array[size];
  
  for (int i=0; i<size; i++){
    array[i] = min + (rand()%(max-min-1));
  }
  
  int s = sizeof(array)/sizeof(array[0]);
  sort(array, array+s);
  
  for (int i=0; i<size; i++){
    cout<<array[i]<<" ";
  }
  
  int value;
  cout<<"\n\nEnter a value:";
  cin>>value;
  
  if(value == -1){
    cout<<"QUITTING";
    exit;
  }
  
  linSearch(array, size, value);
  
  binSearch(array, 0, size-1, value);
  
}


int main() {
  
  //Exercise 1
  int size, min, max;
  
  cout<<"Enter the size of the elements:";
  cin>>size;
  
  cout<<"Enter the min number in the range";
  cin>>min;
  
  cout<<"Enter the max number in the range";
  cin>>max;
  
  cout<<"\n\nThis is the array: "<<endl;
  createRndArray(size, min, max);
  
  

  
  
}