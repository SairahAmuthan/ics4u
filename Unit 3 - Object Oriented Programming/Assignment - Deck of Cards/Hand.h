#include "Card.h"
#include "DeckOfCards.h"

#ifndef HAND_H
#define HAND_H

class Hand{
private:
	Card *hand = new Card[5];

public:
	Hand(DeckOfCards &);
	Hand();
	void reinitialize(DeckOfCards &);
	~Hand();
	int type();
	void printHand();
	bool pair();
	bool threeOfAKind();
	bool fourOfAKind();
	bool doublePair();
	bool flush();
	bool straight();
	bool royalFlush();
	bool fullHouse();
	bool straightFlush();
	void equals(Hand);
	int highestCard();
	int highestPair();

};

#endif