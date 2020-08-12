#include <iostream>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h> 
using namespace std;


int main(){
  
  int startNum, endNum;
  
  cout<<"Enter a number from 1-100:";
  cin>>startNum;
  cout<<"Enter another number, higher than the first:";
  cin>>endNum;
  
  int length = endNum-startNum + 1;
  int dimension = 0;
  
  if(length <= 9){
     dimension = 3;
     
     
  }else if(length <= 25){
    dimension = 5;
    
    
  }else if(length <= 49){
    dimension = 7;
    
    
  }else if(length <= 81){
    dimension = 5;
    
    
  }else if(length <= 100){
    dimension = 10;
    
    
  }else{
    dimension = 1;
    
  }
  
  int array[dimension][dimension];
  
  for(int i=0; i<dimension; i++){
    for(int j=0; j<dimension; j++){
      array[i][j] = 0;
      
      
    }
  }
  
  int i = (dimension/2);
  int h = (dimension/2);
  
  
  int next[2] = {i, h};
  int size = 1;
  int direction = 0;
  int cnt = startNum;
  int loop = true;
  
  while (loop) {
    
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < size; j++) {
              
                array[next[0]][next[1]] = cnt;

                  switch (direction) {
                    case 0:
                    
                        next[0]++;
                        break;
                        
                    case 1:
                        next[1]--;
                        break;
                        
                    case 2:
                        next[0]--;
                        break;
                        
                    case 3:
                        next[1]++;
                        break;
                }
                
                cnt++;
                if (cnt > endNum){
                    loop = false;
                    j = 100;
                    i = 100;
                }
                
            }
            
            direction--;
            
            if (direction == -1){
                direction = 3;
            }
        }
        size++;
    }
    
    cout<<"\n The spiral: \n";
    for (auto &i : array) {
        for (int j : i) {
            if (j == 0) {
                cout << "   ";
            } else {
                cout << setfill('0') << setw(2) << j << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}