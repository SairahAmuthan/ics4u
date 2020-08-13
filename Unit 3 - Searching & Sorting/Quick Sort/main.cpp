#include <iostream>
using namespace std;

void quickSortl(int list[], int low, int high){
  int MOVING_LEFT = 0;
  int MOVING_RIGHT = 1;
  if (low < high){
 	int left = low;
 	int right = high;
 	int currentDirection = MOVING_LEFT;
 	int pivot = list[low];

  while (left < right){
 	if (currentDirection == MOVING_LEFT){
 		while ((list[right] >= pivot) && (left < right))
 			right--;

 		list[left] = list[right];
 		currentDirection = MOVING_RIGHT;
 	}
 	
 	if (currentDirection == MOVING_RIGHT){
 		while ((list[left] <= pivot) && (left < right))
 			left++;

 		list[right] = list[left];
 		currentDirection = MOVING_LEFT;
 	}
 }
 
   list[left] = pivot; 
   quickSortl(list, low, left-1);
   quickSortl(list, right+1, high);
 
 	}
  
  if(high == 0){
    
    for(int i=0; i<200; i++){
      list[i] = rand() % 89 + 10;
      
      if((i+1)%10 == 0){
        cout<<list[i]<<endl;
      }else{
        cout<<list[i]<<" ";
    }
  }
  
  }
 }

void quickSort(int list[], int length){
	   quickSortl(list, 0, (length - 1));
  }


int main() {
  
  cout<<"Original Array:"<<endl;
  
  int array[200];
  
  for(int i=0; i<200; i++){
    array[i] = rand() % 89 + 10;
    
    if((i+1)%10 == 0){
      cout<<array[i]<<endl;
    }else{
      cout<<array[i]<<" ";
    }
    
  }
  
  cout<<"\n\nSorted Array:"<<endl;
  quickSort(array, 200);
}