#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 
  
void makeSquare(int len); 

int main(){ 
    
    //3 by 3 Square 
    makeSquare(3);

    //5 by 5 Square
    makeSquare(5);

    //7 by 7 Square
    makeSquare(7);

    return 0;  
}  
  
void makeSquare(int len){  
   
    int magicSquare[len][len];

    for(int i=0; i<len; i++){
      for(int j=0; j<len; j++){
        magicSquare[i][j] = 0;
      }
    }

    int x = len/2;  
    int y = len-1;  
  
      
    for (int num = 1; num <= len*len;){ 

        if (x == -1 && y == len){  
            y = len-2;  
            x = 0;  
        }else{  
             
            if (y == len){  
                y = 0;  
            }
           
            if (x < 0){  
                x = len - 1;  
            }   
        }

        if (magicSquare[x][y]){  
            y -= 2;  
            x++;  
            continue;  
        }else{
            magicSquare[x][y] = num++;   
        }

        y++; x--;  
    }  
  
 
    cout<<"\n\nThe Magic Square for a "<<len<<" by "<<len<< " is :\n";  
    for (int i = 0; i < len; i++)  
    {  
        for (int j = 0; j < len; j++)  
            cout<<magicSquare[i][j]<<" ";  
        cout<<endl; 
    }  
}  