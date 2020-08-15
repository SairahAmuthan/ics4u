#include "Card.h"

string Card::suits[4] =  {"Clubs","Diamonds","Hearts","Spades"};
string Card::faces[13] = {"Ace","Two","Three","Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};


Card :: Card(){
  face = 0;
  suit = 0;
  
}

Card :: Card(int f, int s){
  setFace(f);
  setSuit(s);
  
}

void Card :: setFace(int f){
     face = f;
}

void Card :: setSuit(int s){
     suit = s;
 
}

string Card :: toString(){
  
  string card = faces[face] + " of " + suits[suit];
  return card;
}

bool Card::equalsFace(Card o){
	if(face==o.face)
		return true;
	return false;
}


bool Card::equalsSuit(Card o){
	if(suit==o.suit)
		return true;
	return false;
}

bool Card::faceEqualsString(string m){
	if(faces[face]==m)
		return true;
	return false;
}