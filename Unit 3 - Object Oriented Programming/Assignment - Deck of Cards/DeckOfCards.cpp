#include "DeckOfCards.h"

DeckOfCards :: DeckOfCards()
{
  deck = new Card[SIZE_OF_DECK];
  currentCard = 0;
  int cardNum = 0;
  for(int s=0; s<4; s++){
    for(int f=0; f<13; f++){
        deck[currentCard]= Card(f,s);
        currentCard++;
    }
  }
}

DeckOfCards::~DeckOfCards()
{
  delete[] deck;
}

void DeckOfCards :: shuffle(){
  currentCard = 0;
  
  for(int first = 0; first<SIZE_OF_DECK; first++){
    int second = (rand() + time(0)) % SIZE_OF_DECK;
    Card temp = deck[first];
    deck[first] = deck[second];
    deck[second] = temp;
  }
  
}

Card DeckOfCards :: dealCard(){
  if(currentCard > SIZE_OF_DECK){
    shuffle();
  }
  if(currentCard < SIZE_OF_DECK){
    return (deck[currentCard++]);
  }
  return (deck[0]);
}

/*bool DeckOfCards::moreCards(){

  if(currentCard > SIZE_OF_DECK){
    return false;
  }
  if(currentCard < SIZE_OF_DECK){
    return true;
  }
}*/

