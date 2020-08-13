#include <iostream>
using namespace std;

void insertion_sort (int arr[], int length){
  int current, temp;
  
  for (int i = 1; i < length; i++){
    current = i;
  
    while (current > 0 && arr[current] < arr[current-1]){
      temp = arr[current];
      arr[current] = arr[current-1];
      arr[current-1] = temp;
      
      for(int x=0; x<length; x++){
        cout<<arr[x]<<" ";
      }
      
      cout<<endl;
      
      current--;
    }
  }
  
}

void insertion_sort_desc (int arr[], int length){
  int current, temp;
  
  for (int i = 1; i < length; i++){
    current = i;
  
    while (current > 0 && arr[current] > arr[current-1]){
    // changing the operator from < to >
    
      temp = arr[current];
      arr[current] = arr[current-1];
      arr[current-1] = temp;
      
      for(int x=0; x<length; x++){
        cout<<arr[x]<<" ";
      }
      
      cout<<endl;
      
      current--;
    }
  }
  
}

void insertion_sort_alpha (string arr[], int length){
  
  string temp;
  
  for (int i = 1; i < length; ++i){
    
    temp = arr[i];
    
    int k;
    
    for (k = i-1; i >= 0 && arr[k] > temp; k--){
      
      for(int y=0; y<length; y++){
        cout<<arr[y]<<" , ";
      }
      cout<<endl;
      arr[k+1] = arr[k];
    }
    
    arr[k+1] = temp;
  }
  
  cout<<"\nThe final sorted array is:"<<endl;
  for(int i =0; i <length; i++){
    
    cout<<arr[i]<<" , ";
    
  }
}

void insertion_sort_median(int arr[], int length){
  int current, temp;
  float median;
  
  for (int i = 1; i < length; i++){
    
    current = i;
  
    while (current > 0 && arr[current] < arr[current-1]){
      temp = arr[current];
      arr[current] = arr[current-1];
      arr[current-1] = temp;

    }
      current--;
    }
    
    int mid = length/2;
    
    if(length%2 > 0){
      median = arr[mid];
    }else{
      median = (arr[mid] + arr[mid-1])/2;
    }
    
    cout<<"The median is: "<<median<<endl;
}
  


int main() {
  int array[] = {6,2,8,3,1,7,4};
  int length = sizeof(array)/sizeof(array[0]);
  
  cout<<"Example 1:\n"<<endl;
  insertion_sort(array, length);
  
  /*2. Systematically the steps are the same, only the operator needs
  to change in the while loop that inserts the value in the spot before, and 
  moves the element at that position to a temporary location,
  so the function orders the elements in descending order. The 
   change would be to make sure that while the while loop only runs, 
  it checks if the array at the counter variable "current" is greater than 
  the value before it in the array, that way the loop method can switch the
  two values. Checking if thats true below:*/
  
  cout<<"\n\nExample 2:\n"<<endl;
  insertion_sort_desc(array, length);
  
  //Mercury, Venus, Earth, Mars, Jupiter, Saturn, Uranus and Neptune.
  string planets[] = {"Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune"};
  int size = sizeof(planets)/sizeof(planets[0]);
  
  cout<<"\n\nExample 3:\n"<<endl;
  insertion_sort_alpha(planets,size);
  
  cout<<"\n\nExample 4:\n"<<endl;
  
  int len;
  
  cout<<"Enter the number of values:";
  cin>>len;
  
  int arr[len];
  
  cout<<"Enter each value"<<endl;
  
  for(int i=0; i<len; i++){
    cin>>arr[i];
  }
  
   insertion_sort_median(arr, len);
  
  /*5. Yes it is stable because the condition that 
  is checked before a value is inserted in another 
  location in the array is if the value is either 
  larger or smaller that value already in that 
  location. If the values are the same or "duplicate
  values" exist in an array, the fact that they are 
  equal do not satisfy the condition meaning the values 
  will not switch order.*/
}