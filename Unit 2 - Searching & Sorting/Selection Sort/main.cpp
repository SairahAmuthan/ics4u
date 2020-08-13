#include <iostream>

using namespace std;

void selectSort(string arr[], int length){
	
	int pos_max;
	string temp;
	 
	for (int i = length-1; i > 0; i--){
		pos_max = 0;

		for (int j = 1; j <= i; j++){
		  
			if (arr[j] > arr[pos_max]){
				pos_max = j;
			}
			
		}
		

		temp = arr[i];
		arr[i] = arr[pos_max];
		arr[pos_max] = temp;
			
		for(int y=0; y<length; y++){
	  cout<<arr[y]<<" ";
	  }
	  cout<<endl;
	
  }
  
}

void selectSortSmall(int arr[], int length){
	
	int pos_min;
	int temp;
	 
	for (int i = 0; i < length; i++){
		pos_min = i;

		for (int j = i+1; j < length; j++){
		  
			if (arr[j] < arr[pos_min]){
				pos_min = j;
			}
			
		}
		

		temp = arr[i];
		arr[i] = arr[pos_min];
		arr[pos_min] = temp;
			
		for(int y=0; y<length; y++){
	  cout<<arr[y]<<" ";
	  }
	  cout<<endl;
	
  }
  
}

void selectSortOpp(string arr[], int length){
	
	int pos_max;
	string temp;
	 
	for (int i = length-1; i > 0; i--){
		pos_max = 0;

		for (int j = 1; j <= i; j++){
		  
			if (arr[j] < arr[pos_max]){
				pos_max = j;
			}
			
		}
		

		temp = arr[i];
		arr[i] = arr[pos_max];
		arr[pos_max] = temp;
			
		for(int y=0; y<length; y++){
	  cout<<arr[y]<<" ";
	  }
	  cout<<endl;
	
  }
  
}

void selectSortK(int arr[], int length, int k){
	
	int pos_max;
	int temp;
	 
	for (int i = length-1; i > 0; i--){
		pos_max = 0;

		for (int j = 1; j <= i; j++){
		  
			if (arr[j] > arr[pos_max]){
				pos_max = j;
			}
			
		}
		
		temp = arr[i];
		arr[i] = arr[pos_max];
		arr[pos_max] = temp;
	
  }
  
  cout<<"Sorted array:"<<endl;
  for(int y=0; y<length; y++){
	  cout<<arr[y]<<" ";
	}
	cout<<"\n"<<endl;
	
  int kArray[k];
  int counter = 0;
  
  for(int i=length-k; i<length; i++){
    kArray[counter]= arr[i];
    counter++;
  }
  
  cout<<"Largest k values:"<<endl;
  
  for(int y=0; y<k; y++){
	  cout<<kArray[y]<<" ";
  }
	cout<<endl;
}

int main() {
  
  cout<<"Example 1:"<<endl;
  
  string array[] = {"Robert","Brian","Victor","David","Scott"};
  int length = 5;
  
  cout<<"\nOriginal array:"<<endl;
  for(int y=0; y<length; y++){
	  cout<<array[y]<<" ";
	}
	cout<<"\n"<<endl;
	
	
  selectSort(array, length);
  
  
  cout<<"\n\nExample 2:"<<endl;
  
  selectSortOpp(array, length);
  /*  When the operator sign is flipped the array 
  is sorted in reverse alphabetical order. */


  //Example 3:
  
  /* a) Adding in a conditional statement
        that checks if the the max value is 
        already in the position that it needs 
        to be, to leave it as it is. This would
        go in the "if" statement that finds the max
        value.
        
    b) This is redundant as it requires more code
       but does not simplify much for the program.
       The program already locates the max
       value and where it should go which should 
       not be changed, so even though it may place
       the value in the same location it already was, 
       it does not make any difference in terms of time 
       running the code.
         
  */
  
  cout<<"\n\nExample 4:"<<endl;
  
  cout<<"\na) and b)"<<endl;
  
  int numArray[] = {8,9,6,1,2,4};
  length = 6;
  
  cout<<"\nOriginal array:"<<endl;
  for(int y=0; y<length; y++){
	  cout<<numArray[y]<<" ";
	}
	cout<<"\n"<<endl;
	
  selectSortSmall(numArray, length);
  
  
  
  cout<<"\n\nExample 5:"<<endl;
  
  int scores[] = {23, 44, 54, 32, 12, 23, 45, 67, 88, 37};
  length = 10;
  
  int k;
  cout<<"Enter up to what place of scores you want to see:"<<endl;
  cin>>k;
  
  cout<<"\nOriginal array:"<<endl;
  for(int y=0; y<length; y++){
	  cout<<scores[y]<<" ";
	}
	cout<<"\n"<<endl;
	
  selectSortK(scores, length, k);
  
  return 0;
}