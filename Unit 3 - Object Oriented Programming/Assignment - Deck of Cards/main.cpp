#include "Card.h"
#include "DeckOfCards.h"
#include "Hand.h"
//This is my Dealer.cpp file, since repl'it doesn't allow you to rename the main.cpp file
//Have done upto 2nd bonus

void playerHas(int score){
  if (score==10)
		cout<< "- has a royal flush" <<endl;
		
	else if (score==9)
		cout<< "- has a straight flush" <<endl;
		
	else if(score==8)
		cout<< "- has a four of a kind" <<endl;
		
	else if(score==7)
		cout<< "- has a full house" <<endl;
		
	else if(score==6)
		cout<< "- has a flush" <<endl;
		
	else if(score==5)
		cout<< "- has a straight" <<endl;
		
	else if(score==4)
		cout<< "has a three of a kind" <<endl;
		
	else if(score==3)
		cout<< "- has a double pair" <<endl;
		
	else if(score==2)
		cout<< "- has a pair" <<endl;

	else
		cout<< "- has a high card" <<endl;
}

int main(){
  DeckOfCards deck;
  //Card currentCard;
  deck.shuffle();
  
  /*for(int i=0; i<5; i++){
    currentCard = deck.dealCard();
    cout<< currentCard.toString()<<endl;
  } */
  
  Hand hand1, hand2;
  int player1Score, player2Score;
  
  cout<<"Player 1's Hand:\n"<<endl;
  hand1.reinitialize(deck);
  hand1.printHand();
  cout<<"Player1 has:"<<endl;
  playerHas(hand1.type());

  cout<<"\n"<<endl;
  
  cout<<"Player 2's Hand:\n"<<endl;
  hand2.reinitialize(deck);
  hand2.printHand();
  cout<<"Player2 has:"<<endl;
  playerHas(hand2.type());
  
  cout<<"\n\nWho wins?:"<<endl;
  
  if(hand1.type() > hand2.type()){
    cout<<"Player1 wins!"<<endl;
  }
  
  if(hand2.type() > hand1.type()){
    cout<<"Player2 wins!"<<endl;
  }
  
  if(hand1.type() == hand2.type() && hand1.type() ==2){
    
    if(hand1.highestPair() > hand2.highestPair()){
      cout<<"Player1 is the winner!"<<endl;
    }else if(hand1.highestPair() < hand2.highestPair()){
      cout<<"Player2 is the winner!"<<endl;
    }
    else{
      if(hand1.highestCard() > hand2.highestCard()){
      cout<<"Player1 is the winner!"<<endl;
      }else if(hand1.highestCard() < hand2.highestCard()){
      cout<<"Player2 is the winner!"<<endl;
      }else{
        cout<<"Tie"<<endl;
      }
    }
  }
  
  if(hand1.type() == hand2.type()){
    
      if(hand1.highestCard() > hand2.highestCard()){
      cout<<"Player1 is the winner!"<<endl;
      }else if(hand1.highestCard() < hand2.highestCard()){
      cout<<"Player2 is the winner!"<<endl;
      }else{
        cout<<"Tie"<<endl;
      }
  }
  
  return 0;
}