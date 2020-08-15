#include "Hand.h"

//I added these arrays to this file as well, just so the functions themselves can test if the hand has anything

static string faces[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
static string suits[] = {"Clubs","Diamonds","Hearts","Spades"};

Hand::Hand(DeckOfCards &d){
	for(int i = 0; i<5; i++){
		hand[i] = d.dealCard();
	}
}

Hand::Hand(){
	Card k;
	for(int i = 0; i<5; i++){
		hand[i] = k;
	}
}

Hand::~Hand(){
  delete[] hand;
}


void Hand::reinitialize(DeckOfCards &d){
	for(int i = 0; i<5; i++){
		hand[i] = d.dealCard();
	}
}

bool Hand::threeOfAKind(){
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
		 	for(int l=0; l<5; l++){
		 		if((hand[i].equalsFace(hand[j])&&hand[i].equalsFace(hand[l]))&& (i!=j&&i!=l&&j!=l)){
		 		return true; 
		 		}
			}
		}
	}
	return false;
}

bool Hand::fourOfAKind(){
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
		 	for(int l=0; l<5; l++){
				for(int k=0; k<5;k++){
		 			if((hand[i].equalsFace(hand[j])&&hand[i].equalsFace(hand[l])&&hand[i].equalsFace(hand[k]))&& (i!=j&&i!=l&&j!=l&&i!=k&&l!=k&&j!=k)){
		 			return true;
		 			}
				} 
			}
		}
	}
	return false;
}

bool Hand::pair (){
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++)
		 	if(hand[i].equalsFace(hand[j])&& i!=j){
		 		return true; 
		 	}
	}
	return false;
}

bool Hand::doublePair(){
	int counter1 = 0;
	for(int i=0; i<5; i++){
	 	for(int j=0; j<5; j++){
	 		if(hand[i].equalsFace(hand[j])&& i!=j){
	 			counter1++;
	 		}
	 	}
 	}
 	
	if(counter1==4||counter1==8){
		return true;
	}
	
	return false;
}
bool Hand::flush(){
	if(hand[0].equalsSuit(hand[1])&&hand[0].equalsSuit(hand[2])&&hand[0].equalsSuit(hand[3])&&hand[0].equalsSuit(hand[4])){
	 	return true;
  }

	else
		return false;
}

bool Hand::straight(){
	if(pair()==true){
		return false;
	}
	
	int temp = 13;
	int temp2 = 13;
	int l = 0;

	int counter1=0;

	 for(int i = 0; i<5; i++){
		 for(int j = 0; j<13; j++){
			 if(hand[i].faceEqualsString(faces[j])&&j<temp){
			  temp = j;	
			 }
			 
			if(hand[i].faceEqualsString(faces[j])&&j<temp2&&j>temp){
			  temp2 = j;
			}
	 	}
	 }
	
	if(temp==0&&temp2==9){
	 temp=temp2;
	}
	
	for(int i = 0; i<5; i++){
		for(int k = 0; k <5; k++){
			l= temp+k;
			if(l>12){
				l= l-13;
			}
			
			if(hand[i].faceEqualsString(faces[l])){
				counter1++;
			}
		}
	 }
	if(counter1==5){
		return true;
	}
	return false;
}

bool Hand::royalFlush(){
	if(flush()==false||pair()==true){
		return false;
	}

	int counter1 = 0;
	string faces[] ={"Ace","King","Queen","Jack","Ten"};

	for(int i = 0; i<5; i++){
			for(int k = 0; k<5; k++){
				if(hand[k].faceEqualsString(faces[i])){
				counter1++;
			} 	
	 	}
	}
	if(counter1==5){
		return true;
	}
	
	else{	
		return false;
	}
 }
 
bool Hand::straightFlush(){
	if(straight()==true && flush()==true){
	return true;
	}
	
	else{ 
	return false;
	}
}

bool Hand::fullHouse(){
	if(threeOfAKind()==true && doublePair()==true){
		return true;
	}
	
	else{
		return false;
	}

}

int Hand::highestCard(){
	int temp = 0;
	for(int i = 0; i<5; i++){
		 for(int j = 0; j<(13); j++){
			 if(hand[i].faceEqualsString(faces[j])&&j>temp){
			  temp = j;	
			 }
	 	}
	 }
	return temp;
}

int Hand::highestPair(){
	int temp;
	bool fin = true;
	for(int i=0; i<5 && fin == true; i++){
		 for(int j=0; j<5 && fin == true; j++){
		 	if(hand[i].equalsFace(hand[j])&& i!=j){
		 		temp = j;
				fin = false;
			}
		 }
	}
	for(int l = 0; l<13; l++){
		if(hand[temp].faceEqualsString(faces[l])){
			temp = l;
			return l;
		}
	}
	return temp;
}

//The following is done to add a ranking/precedence to the "kinds" the hand has, used to determine a winner
int Hand::type(){
  
	if (royalFlush()==true)
	return 10;
	if (straightFlush()==true)
	return 9;
	if(fourOfAKind()==true)
	return 8;
	if(fullHouse()==true)
	return 7;
	if(flush()==true)
	return 6;
	if(straight()==true)
	return 5;
	if(threeOfAKind()==true)
	return 4;
	if(doublePair()==true)
	return 3;
	if(pair()==true)
	return 2;

	return 1;
}

void Hand::printHand(){
	for(int i = 0; i <5; i++){
		cout<<"\t"<<i+1<<". "<<hand[i].toString()<<endl;
	}
}