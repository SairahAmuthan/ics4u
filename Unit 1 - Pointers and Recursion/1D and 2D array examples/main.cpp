#include <iostream>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h> 
using namespace std;

void modifyArray(int b[], int ArraySize){
  for(int i = 0; i<ArraySize; i++){
      int x = b[i];
      b[i] = 2*x;
      cout<<b[i]<<" ";
  }
}

void modifyElement(int a){
  cout<<2*a<<endl;
}

int main() {
  
  //1D Arrays
  cout<<"1D Arrays\n\n";
  
  cout<<"Exercise 1b:\n";
  
  int *array1B;
  int length;
  
  cout<<"Please enter the length of the array.\n";
  cin>>length;
  
  array1B = new int[length];
  
  cout<<"Please enter the elements of the array.\n";
  
  for(int i=0; i<length; i++){
    cin>>array1B[i];
  }
  
  cout<<"\nThe elements of the array in reverse order: ";
  
  for(int i=length-1; i>=0; i--){
    cout<<array1B[i]<<" , ";
  }
  
  delete array1B;
  
  //Exercise 1c
  cout<<"\n\nExercise 1c:\n";
  
  int *array1C, length2;
  int total=0;
  
  cout<<"Please enter the length of the array.\n";
  cin>>length2;
  
  array1C = new int[length2];
  
  for(int x=0; x<length2; x++){
    array1C[x] = 1 + (rand() % 50);
  }
  
  
  for(int y=0; y<length2; y++){
    total += array1C[y];
  }
  
  cout<<"\nThe total of the elements in the array is: "<<total;
  
  delete array1C;


  //Example 2
  cout<<"\n\nExample 2:\n";
  
  int *firstArray, *secondArray, *thirdArray;
  
  firstArray = new int[5];
  secondArray = new int[5];
  
  cout<<"\nThe first array is: ";
  
  for(int x=0; x<5; x++){
    firstArray[x] = 1 + (rand() % 20);
    cout<<firstArray[x]<<" , ";
    }
  
  cout<<"\nThe second array is: ";
  
  for(int x=0; x<5; x++){
    secondArray[x] = 1 + (rand() % 20);
    cout<<secondArray[x]<<" , ";
  }

 /*	int m = sizeof(firstArray)/sizeof(firstArray[0]);
	int n = sizeof(secondArray)/sizeof(secondArray[0]);

  cout<<m;
  cout<<n;*/
 
 thirdArray = new int[5];
  
  for(int i=0; i< 10; i++){
    
   if(i < 5){
     thirdArray[i] = firstArray[i];
   } else{
     thirdArray[i] = secondArray[i-5];
   }
  }
  
  cout<<"\nThe third array is: ";
  
  for(int y =0; y<(10); y++){
    cout<<thirdArray[y]<<" , ";
  }
  
   delete firstArray;
   delete secondArray;
   delete thirdArray;
  
  //2D Arrays
  cout<<"\n\n\n2D Arrays\n";
  
  //Exercise 1b
  cout<<"\nExample 1b:";
  
  int row = 5;
  int column = 5;
  int total1b = 0;
  int **example1b; 
  
  example1b =new int*[row]; 
  for(int i=0; i<row; ++i){
    example1b[i]= new int[column];
  }
  
  for ( int i= 0; i<row; i++){
    for ( int j=0; j<column; j++){
      example1b[i][j] = 1 + (rand() % 1000);
    } 
  }
  
  for (int r=0; r<row; r++){
    for (int c = 0; c< column; c++){
      total1b += example1b[r][c];
    }
  }
  
  int average = total1b/(row*column);
  cout<<"\nThe average of the values is "<<average;
   
  for (int r=0; r<row; r++){
    delete[] example1b[r]; 
  }
  
  delete[] example1b; 
  
  
  //Exercise 1c
  cout<<"\n\nExample 1c:\n";
  
  int row2;
  cout<<"Enter the dimesion for the square";
  cin>>row2;

  int **example1c; 
  
  example1c =new int*[row2]; 
  
  for(int i=0; i<row2; ++i){
    example1c[i]= new int[row2];
  }
  
  for ( int i= 0; i<row2; i++){
    for ( int j=0; j<row2; j++){
      example1c[i][j] = 10 + (rand() % 99);
    } 
  }
  
  cout<<"Here is the square: \n\n";
  
  for (int r=0; r<row2; r++){
    for (int c = 0; c< row2; c++){
      if(c<row2-1){
        cout<<example1c[r][c]<<"  ";
      }else{
        cout<<example1c[r][c]<<"\n\n";
      }
    }
  }
  
  cout<<"\nHere are the elements on its main diagonal:\n\n";
  
  for (int r=0; r<row2; r++){
     cout<<example1c[r][r]<<" , ";
  }
  
  for (int r=0; r<row2; r++){
    delete[] example1c[r]; 
  }
  
  delete[] example1c; 
  
  
  //Example 2
  cout<<"\n\n\nExample 2:\n\n";
  
  int row3 = 4;
  int column3 = 5;

  int **first2D_Array; 
  
  first2D_Array =new int*[row3]; 
  
  for(int i=0; i<row3; ++i){
    first2D_Array[i]= new int[column3];
  }
  
  int **second2D_Array; 
  
  second2D_Array =new int*[row3]; 
  
  for(int i=0; i<row3; ++i){
    second2D_Array[i]= new int[column3];
  }
  
  int **third2D_Array;
  
  third2D_Array =new int*[2*row3]; 
  
  for(int i=0; i<2*row3; ++i){
    third2D_Array[i]= new int[column3];
  }
  
  for ( int i= 0; i<row3; i++){
    for ( int j=0; j<column3; j++){
      first2D_Array[i][j] = 10 + (rand() % 99);
      third2D_Array[i][j] = first2D_Array[i][j];
    } 
  }
  
  cout<<"Here is the first2D_Array: \n\n";
  
  for (int r=0; r<row3; r++){
    for (int c = 0; c< column3; c++){
      if(c<column3-1){
        cout<<first2D_Array[r][c]<<"  ";
      }else{
        cout<<first2D_Array[r][c]<<"\n\n";
      }
    }
    delete[] first2D_Array[r];
  }
   delete[] first2D_Array;
   
   
  for ( int i= 0; i<row3; i++){
    for ( int j=0; j<column3; j++){
      second2D_Array[i][j] = 10 + (rand() % 99);
      third2D_Array[i+row3][j] = second2D_Array[i][j];
    } 
  }
  
  cout<<"\n\nHere is the second 2D_Array: \n\n";
  
  for (int r=0; r<row3; r++){
    for (int c = 0; c< column3; c++){
      if(c<column3-1){
        cout<<second2D_Array[r][c]<<"  ";
      }else{
        cout<<second2D_Array[r][c]<<"\n\n";
      }
    }
    
    delete second2D_Array[r];
  }
  
    delete[] second2D_Array;
  
  cout<<"\n\nHere is the third 2D_Array: \n\n";
  
  for (int r=0; r<2*row3; r++){
    for (int c = 0; c<column3; c++){
      if(c<column3-1){
        cout<<third2D_Array[r][c]<<"  ";
      }else{
        cout<<third2D_Array[r][c]<<"\n\n";
      }
    }
  }
  
  //Passing Arrays to Functions
  
  cout<<"\n\nPassing Arrays to Functions\n\n";
  
  int element[5];
    for (int index = 0; index <= 4; index++){
      element[index] = index;
    }
    
  cout <<"Effects of passing entire array call by reference\n\n";
  
  cout << "Value of the original array is \n";
  
  for (int x = 0; x < 5; x++){
    cout << element[x] << " ";
  }
  
  cout<<endl;
  
  cout << "\nEffects of passing array element call-by-value\n";
  modifyArray (element, 5);
  cout<<"\n\n";
  
  cout << "The value of element[3] is " << element[3] << endl; 

  cout << "The value of element[3] is now ";
 
  modifyElement(element[3]);
  
  return 0;
}