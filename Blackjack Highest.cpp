#include <iostream>
#include <sstream>
using namespace std;

string BlackjackHighest(string strArr[], int size) { 

  // code goes here   
  stringstream blackjack;
  string highCard;
  int cardSum = 0;
  int maxValue = 0;
  int cardValue;
  bool faceCard = false;
  
  for(int i = 0; i < size; i++){
    if(strArr[i] == "two"){
      cardValue = 2;
    }
    if(strArr[i] == "three"){
      cardValue = 3;
    }
    if(strArr[i] == "four"){
      cardValue = 4;
    }
    if(strArr[i] == "five"){
      cardValue = 5;
    }
    if(strArr[i] == "six"){
      cardValue = 6;
    }
    if(strArr[i] == "seven"){
      cardValue = 7;
    }
    if(strArr[i] == "eight"){
      cardValue = 8;
    }
    if(strArr[i] == "nine"){
      cardValue = 9;
    }
    if(strArr[i] == "ten"){
      cardValue = 10;
    }
    if(strArr[i] == "jack" || strArr[i] == "queen" || strArr[i] == "king"){
      cardValue = 10;
      faceCard = true;
    }
    if(strArr[i] == "ace"){
      if(cardSum + 11 <= 21){
        cardValue = 11;
      }
      else{
        cardValue = 1;
      }
    }
    
    cardSum += cardValue;

    if(cardValue > maxValue){
      highCard = strArr[i];
      maxValue = cardValue;
      cardValue = 0;
    }
    if(faceCard){
      if(highCard == "ten" && (strArr[i] == "jack" || strArr[i] == "queen"
                              || strArr[i] == "king")){
        highCard = strArr[i];
      }
      if(highCard == "jack" && (strArr[i] == "queen" || strArr[i] == "king")){
        highCard = strArr[i];
      }
      if(highCard == "queen" && strArr[i] == "king"){
        highCard = strArr[i];
      }
    }
  }
  
  if(cardSum < 21){
    blackjack << "below" << " " << highCard;
  }
  else if(cardSum > 21){
    blackjack << "above" << " " << highCard;
  }
  else if(cardSum == 21){
    blackjack << "blackjack" << " " << highCard;
  }
  return blackjack.str(); 
  //return cardSum;          
}

int main() { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. 
     To see how to enter arrays as arguments in C++ scroll down */
     
  string A[] = gets(stdin);
  cout << BlackjackHighest(A, sizeof(A)/sizeof(*A));
  return 0;
    
}           
