#include <cstdlib>
#include <ctime>
#include "Card.h"

#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

class DeckOfCards
{
  private:
   Card* deck;
   int currentCard;
   int const SIZE_OF_DECK = 52;
   
  
  public:
    DeckOfCards();
    ~DeckOfCards();
    void shuffle();
    Card dealCard();
    bool moreCards();

};


#endif