#include <iostream>
using namespace std;

void merge(int items[], int start, int mid, int end, int length){
  
	int temp[length];
	int pos1 = start;
	int pos2 = mid + 1;
	int spot = start;
	
	while (!(pos1 > mid && pos2 > end)) {
		if ((pos1 > mid) || ((pos2 <= end) && (items[pos2] < items[pos1]))) {
			temp[spot] = items[pos2];
			pos2 += 1;
		} 
		else {
			temp[spot] = items[pos1];
			pos1 += 1;
		}
		spot += 1;
	}
	for (int i = start; i <= end; i++){
		items[i] = temp[i];
	}
}

void mergeSort(int items[], int start, int end, int length){
  
	if (start < end) {
		int mid = (start + end) / 2;
		mergeSort(items, start, mid, length);
		mergeSort(items, mid + 1, end, length);
		merge(items, start, mid, end, length);
	}	
	
	if(start == end){
	  cout<<endl;
	  for(int i=0; i<200; i++){
      items[i] = rand() % 89 + 10;
      
      if((i+1)%10 == 0){
        cout<<items[i]<<endl;
      }else{
        cout<<items[i]<<" ";
      }
    
  }
	}
	
}

int main() {
  cout<<"Original Array:"<<endl;
  
  int array[200];
  int length = 200;
  
  for(int i=0; i<200; i++){
    array[i] = rand() % 89 + 10;
    
    if((i+1)%10 == 0){
      cout<<array[i]<<endl;
    }else{
      cout<<array[i]<<" ";
    }
    
  }
  
  cout<<"\n\nMerge Sorting"<<endl;
  mergeSort(array, 0, length-1, length);
}