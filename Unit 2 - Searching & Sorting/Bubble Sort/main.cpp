#include <iostream>
using namespace std;

void bubbleSort(int arr[], int length){
   
   bool sorted = false;
   
   for (int i = length-1; i > 0 && !sorted; i--){
       sorted = true;
       for (int j = 0; j < i; j++){
         
           if (arr[j] > arr[j+1]){
             
                sorted = false;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
                
           for(int x=0; x<length; x++){
             cout<<arr[x]<<" ";
           }
            cout<<endl;
            
          } 
         
       }
  
    }
}

void bubbleSortDesc(int arr[], int length){
   
   bool sorted = false;
   
   for (int i = length-1; i > 0 && !sorted; i--){
       sorted = true;
       for (int j = 0; j < i; j++){
         
           if (arr[j] < arr[j+1]){
             
                sorted = false;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
                
           for(int x=0; x<length; x++){
             cout<<arr[x]<<" ";
           }
            cout<<endl;
            
          } 
         
       }
  
    }
}

void cocktailSort(int arr[], int length){ 
    bool swapped = true; 
    int start = 0; 
    int end = length - 1; 
    int temp;
  
    while (swapped) { 

        swapped = false; 
  
        for (int i = start; i < end; ++i) { 
            if (arr[i] > arr[i + 1]) { 
              
                temp = arr[i];
            		arr[i] = arr[i+1];
            		arr[i+1] = temp;
                swapped = true; 
            } 
        } 
        
        for(int y=0; y<length; y++){
          cout<<arr[y]<<" ";
        }
        cout<<endl;

        if (!swapped){ 
            break; 
        }
  
        swapped = false; 
        --end; 
  
        for (int i = end - 1; i >= start; --i) { 
            if (arr[i] > arr[i + 1]) { 
              
                temp = arr[i];
            		arr[i] = arr[i+1];
            		arr[i+1] = temp;
                swapped = true; 
                
            } 
        } 
        
          for(int y=0; y<length; y++){
          cout<<arr[y]<<" ";
        }
        cout<<endl;
  
        ++start; 
    } 
} 
  

int main(){
  
  cout<<"Exercise 1:\n"<<endl;
  
  int array[] = {3 , 8 , 3 ,  2 , 7 , 5};
  int length = 6;
  
  bubbleSort(array, length);
  
  cout<<"\n\nExercise 2:\n"<<endl;
  
  bubbleSortDesc(array, length);
  
  /* The only change that needs to be made
  is that when two values are compared, the 
  lower value takes the larger index position, 
  instead of the normal larger value takes
  the larger position index.*/
  
  
  cout<<"\n\nExercise 3:\n"<<endl;
  
  int array2[] = {2,9,4,6,1,7};
  length = 6;
  
  for(int y=0; y<length; y++){
    cout<<array2[y]<<" ";
  }
  
  cout<<endl;
  
  cocktailSort(array2, length);
  
  cout<<"\n\nExercise 4:\n"<<endl;
  
  int array3[] = {4,5,4,5,3,2,3,2,1,1};
  length = 10;
  
  cocktailSort(array3, length);
  
}