#include <iostream>
#include <string>
using namespace std;

#ifndef CARD_H
#define CARD_H

class Card
{
  
private:
	int face, suit;
	string static suits[4];
	string static faces[13];
public:
  Card(); //default constructor
  Card(int f, int s); //initializes data members with associated face and suit
  void setFace(int f);
  void setSuit(int s);
  string toString(); 
  bool equalsFace(Card);//these three ethods will be used to determine what the hand has
	bool equalsSuit(Card);
	bool faceEqualsString(string);
  
};


#endif
