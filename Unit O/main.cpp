#include <iostream>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h> 
using namespace std;

//Finds a pair
bool twoOfSame(string hand[]){ 
  for(int x=0; x<5; x++){
    for(int y=0; y<5; y++){
      if(hand[x]==hand[y] && x!=y){
        return true;
      }
    }
  }
  return false;
}

//Finds two pairs
bool twoPairs(string hand[]){ 
  int numOfPairs = 0;
  for(int x=0; x<5; x++){
    for(int y=0; y<5; y++){
      if(hand[x]==hand[y] && x!=y){
      numOfPairs++;
      }
    }
  }
  if(numOfPairs == 4 || numOfPairs == 8){

    return true;
  }
  return false;
}

//Find a three of a kind
bool threeOfSame(string hand[]){ 
  for(int x=0; x<5; x++){
    for(int y=0; y<5; y++){
      for(int z=0; z<5; z++){
        if((hand[x]==(hand[y])&&hand[x]==(hand[z]))&& (x!=y&&x!=z&&y!=z)){
          return true;
        }
      }
    }
  }
  return false;
}

//Finds a four of a kind
bool fourOfSame(string hand[]){ 
  for(int x=0; x<5; x++){
    for(int y=0; y<5; y++){
      for(int z=0; z<5; z++){
        for(int a=0; a<5; a++){
          if((hand[x]==(hand[y])&&hand[x]==(hand[z])&&hand[x]==(hand[a]))&& (x!=y&&x!=z&&y!=z&&x!=a&&y!=a&&z!=a)){
            cout<<"works!";
            return true;
          }
        }
      }
    }
  }
  return false;
}

//Finds a flush (all 5 cards have the same suit)
bool flush(string suit[]){ 
  for(int x=0; x<5; x++){
    for(int y=0; y<5; y++){
      for(int z=0; z<5; z++){
        for(int a=0; a<5; a++){
          for(int b=0; b<5; b++){
            if((suit[x]==(suit[y])&&suit[x]==(suit[z])&&suit[x]==(suit[a])&&suit[x]==(suit[b]))&& (x!=y&&x!=z&&y!=z&&x!=a&&y!=a&&z!=a&&x!=b&&y!=b&&z!=b&&a!=b)){
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

//Finds a straight
bool straight(string hand[]){
  int faceValue = 0;
  int faceValues[5];

  for(int i=0; i<5; i++){

    if(hand[i] == "Ace"){
      faceValue = 1;
    }else if(hand[i] == "Deuce"){
      faceValue = 2;
    }else if(hand[i] == "Three"){
      faceValue = 3;
    }else if(hand[i] == "Four"){
      faceValue = 4;
    }else if(hand[i] == "Five"){
      faceValue = 5;
    }else if(hand[i] == "Six"){
      faceValue = 6;
    }else if(hand[i] == "Seven"){
      faceValue = 7;
    }else if(hand[i] == "Eight"){
      faceValue = 8;
    }else if(hand[i] == "Nine"){
      faceValue = 9;
    }else if(hand[i] == "Ten"){
      faceValue = 10;
    }else if(hand[i] == "Jack"){
      faceValue = 11;
    }else if(hand[i] == "Queen"){
      faceValue = 12;
    }else if(hand[i] == "King"){
      faceValue = 13;
    }
    
    faceValues[i] = faceValue;
  }

  int n = sizeof(faceValues)/sizeof(faceValues[0]);
  int i=0;
  sort(faceValues, faceValues+n);

  while(faceValues[i+1] == faceValues[i] + 1){
    i++;
    if(i == 3){
      return true;
    }
  }

  return false;
}

int highestCard(string hand[]){
  int faceValue = 0;
  int faceValues[5];

  for(int i=0; i<5; i++){

    if(hand[i] == "Ace"){
      faceValue = 1;
    }else if(hand[i] == "Deuce"){
      faceValue = 2;
    }else if(hand[i] == "Three"){
      faceValue = 3;
    }else if(hand[i] == "Four"){
      faceValue = 4;
    }else if(hand[i] == "Five"){
      faceValue = 5;
    }else if(hand[i] == "Six"){
      faceValue = 6;
    }else if(hand[i] == "Seven"){
      faceValue = 7;
    }else if(hand[i] == "Eight"){
      faceValue = 8;
    }else if(hand[i] == "Nine"){
      faceValue = 9;
    }else if(hand[i] == "Ten"){
      faceValue = 10;
    }else if(hand[i] == "Jack"){
      faceValue = 11;
    }else if(hand[i] == "Queen"){
      faceValue = 12;
    }else if(hand[i] == "King"){
      faceValue = 13;
    }
    
    faceValues[i] = faceValue;
  }

  int n = sizeof(faceValues)/sizeof(faceValues[0]);
  int i=0;
  sort(faceValues, faceValues+n);
  return faceValues[4];
}

int main() {

  string player1,player2;
  cout<<"\nEnter player 1's name:\n";
  cin>>player1;
  cout<<"Enter player 2's name:\n";
  cin>>player2;

  //Creates deck of cards in order
  string deck[52];

  string suits[]= {"Diamonds","Hearts","Clubs","Spades"};
  string faces[]={"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};

  int cardNum = 0;
  for(int s=0; s<4; s++){
    for(int f=0; f<13; f++){
        deck[cardNum]= faces[f] + " of " + suits[s];
        cardNum++;
    }
  }

  // Shuffles card
  srand(time(0));
  for(int i=0; i<2000; i++){
    int a = 0 + (rand() % 51);
    int b = 0 + (rand() % 51);
    string temp = deck[a];
    deck [a] = deck[b];
    deck [b] = temp; 

  }

  //Creates two hands
  string hand[5], secondHand[5];
  string handOne, handTwo;

  for(int i=0; i<5; i++){
   hand[i] = deck[i];
   secondHand[i] = deck[i+5];
  }

  //Creates a string to output each hand
  for(int i=0; i<5; i++){
   handOne+= hand[i] + "  \n";
   handTwo+= secondHand[i] + " \n";
  }
 
  //Deals each hand
  cout<<"\nHere is " + player1+ "'s hand:\n" + handOne<<endl;
  cout<<"\nHere is " + player2+ "'s hand:\n" + handTwo<<endl;

  //Finds the face of the cards in each hand
  string handOneFaces[5], handTwoFaces[5];
  
  for(int i=0; i<5; i++){
     int splitFace = hand[i].find(' '); 
	 	 handOneFaces[i]= hand[i].substr(0,splitFace); 
  }

  for(int i = 0; i<5; i++){
	   int splitFace = secondHand[i].find(' '); 
	 	 handTwoFaces[i]= secondHand[i].substr(0,splitFace);
	 }

  //Finds the suit of the cards in each hand
  string handOneSuits[5], handTwoSuits[5];

  for(int i=0; i<5; i++){
    int splitSuits = hand[i].find(' '); 
	 	handOneSuits[i]= hand[i].substr(0,splitSuits);
  }

  for(int i=0; i<5; i++){
    int splitSuits = secondHand[i].find(' '); 
	 	handTwoSuits[i]= secondHand[i].substr(0,splitSuits);
  }

 int player1points, player2points;

  //Tests to see if there is a pair
  if(twoOfSame(handOneFaces)==true){
    cout<<player1 + " has a pair.\n";
    player1points = 1;
    
  }

  if(twoOfSame(handTwoFaces)==true){
    player2points = 1;
    cout<<player2 + " has a pair.\n";
  }
  
  //Tests to see if there is a three of a kind
  if(threeOfSame(handOneFaces)==true){
    player1points = 3;
    cout<<player1 + " has a three of a kind.\n";
  }

  if(threeOfSame(handTwoFaces)==true){
    player2points = 3;
    cout<<player2 + " has a three of a kind.\n";
  }

  //Tests to see if there are two pairs
  if(twoPairs(handOneFaces)==true){
    player1points = 2;
    cout<<player1 + " has two pairs.\n";
  }

  if(twoPairs(handTwoFaces)==true){
    player2points = 2;
    cout<<player2 + " has a two pairs.\n";
  }

  //Tests to see if there is a four of a kind
  if(fourOfSame(handOneFaces)==true){
    player1points = 7;
    cout<<player1 + " has a four of a kind.\n";
  }

  if(fourOfSame(handTwoFaces)==true){
    player2points = 7;
    cout<<player1 + " has a four of a kind.\n";
  }
  
  //Tests to see if there is a flush
  if(flush(handOneSuits)==true){
    player1points = 5;
    cout<<player1 + " has a flush.\n";
  }

  if(flush(handTwoSuits)==true){
    player2points = 5;
    cout<<player2 + " has a flush.\n";
  }


  //Tests to see if there is a straight
  if(straight(handOneFaces)==true){
    player1points = 4;
    cout<<player1 + " has a straight.\n";
  }

  if(straight(handTwoFaces)==true){
    player2points = 4;
    cout<<player2 + " has a straight.\n";
  }

  //Tests to see if there is a straight
  if(straight(handOneFaces)==true && flush(handTwoFaces)==true){
    player1points = 8;
    cout<<player1 + " has a straight flush.\n";
  }

  if(straight(handTwoFaces)==true && flush(handTwoSuits)==true){
    player2points = 8;
    cout<<player2 + " has a straight flush.\n";
  }
  

  if(twoPairs(handOneFaces)==true && threeOfSame(handOneFaces)==true){
    player1points = 6;
    cout<<player1 + " has a full house.\n";
  }

  if(twoPairs(handTwoFaces)==true && threeOfSame(handTwoFaces)==true){
    player2points = 6;
    cout<<player1 + " has a full house.\n";
  }


  if(player1points>player2points){
    cout<<player1 + " wins!";
  }

  if(player2points>player1points){
    cout<<player2 + " wins!";
  }
  
  if(player2points==player1points){
      /*if(twoOfSame(handOneFaces) == true && twoOfSame(handTwoFaces) == true){
        int ply1 = highestPair(handOneFaces);
        int ply2 = highestPair(handOneFaces);
      }*/

      
    int ply1 = highestCard(handOneFaces);
    int ply2 = highestCard(handTwoFaces);

    if(ply1>ply2){
      cout<<"\n\n" + player1 + " wins!";
    }

    else if(ply2>ply1){
      cout<<"\n\n" + player2 + " wins!";
    }

    else{
      cout<<"\n\nTie!";
    }
      
  }

  return 0;
}



 
