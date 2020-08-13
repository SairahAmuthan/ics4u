#include <iostream>
#include <sys/timeb.h>

using namespace std;
int getMilliCount(){
   timeb tb;
   ftime(&tb);
   int nCount = tb.millitm + (tb.time & 0xfffff) * 1000;
   return nCount;
}

int getMilliSpan(int nTimeStart){
   int nSpan = getMilliCount() - nTimeStart;
   if(nSpan < 0)
   nSpan += 0x100000 * 1000;
   return nSpan;
}

void kSortSublist(int arr[], int k, int start, int length){
  
  for (int top = start + k; top < length; top = top + k){
       int item = arr[top]; 
       int i = top;
       
    while (i > start && item < arr[i-k]){
      
     arr[i] = arr[i-k];
     i = i - k;
    }
    
    arr[i] = item;
  }
  
  if(k == 1){
    cout<<"\nSorted Array:"<<endl;
    
    for(int y=0; y<length; y++){
        if((y+1)%10 == 0){
          cout<<arr[y]<<endl;
        }else{
          cout<<arr[y]<<" ";
        }
    }
    
    cout<<endl;
  }
  
  if(length<500){
    
    for(int y=0; y<length; y++){
        if((y+1)%10 == 0){
          cout<<arr[y]<<endl;
        }else{
          cout<<arr[y]<<" ";
        }
    }
    
    cout<<endl;
  }
  
}

void kSort(int arr[], int k, int length){
	for(int i = 0; i < (k);i++){
		int start = i;
		kSortSublist(arr, k, start,length);
	}
}

//Excersie 5
void shellSort(int arr[], int length){

  //initializes k value for any given value of n
  int k;
  int kValues[]= {1,4,13,40,121,364};
  int temp = length/3;
  

  for(int i=0; i<7;i++){
	 if(temp<kValues[i]){
		  k = i-1;
		  break;
		}
  }
  
  while(k>=0){
	  kSort(arr, kValues[k], length);
	  k--;
  }
  
}


int main() {
  
  cout<<"Exercise 1:"<<endl;
  
  int array[] = {26, 37, 21, 41, 63, 19, 61, 72, 55, 29, 47, 18, 26, 22};
  
  cout<<"\nOriginal Array:"<<endl;
  for(int y=0; y<14; y++){
      cout<<array[y]<<" ";
  }
  cout<<endl;
  
  cout<<"\n5-Sorted Array:"<<endl;
  kSortSublist(array, 5,0, 14);
  
  cout<<"\n\nExercise 2:"<<endl;
  cout<<"\n4-Sorted Array:"<<endl;
  kSortSublist(array, 4,0, 14);
  
  /* Insertion sort can take a long time to sort
  a long list of data that is randomly ordered. With shell
  sort, by the time k gets to the value of one, the list
  has many of the values in the right areas of the array
  at the very least, so the insertion sort is not neccesarrilly 
  moving a lot of values across a long set of data rather just a few 
  positions, making the process arguably shorter. */
  
  //Exercise 4 is above, the function shellSort() as well as Exercise 5
  
  cout<<"\n\nExercise 5:"<<endl;
  
  cout<<"\nOriginal Array:"<<endl;
  
  int array2[500];
  
  for(int x=0; x<500; x++){
    array2[x]= rand() % 999;
    
    if((x+1)%10 == 0 && x!=0){
      cout<<array2[x]<<endl;
    }else{
      cout<<array2[x]<<" ";
    }
    
  }
  
  shellSort(array2, 500);
  
  int start = getMilliCount();
  //shellSort(array2, 500);
  int elapsed = getMilliSpan(start);
}