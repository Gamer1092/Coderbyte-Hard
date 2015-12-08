#include <iostream>
#include <sstream>
using namespace std;

string NoughtsDeterminer(string strArr[]) { 

  // code goes here   
  stringstream winningPosition;
  
  //0 wins
  if(strArr[0] == "-" && ((strArr[1] == "X" && strArr[2] == "X")
     || (strArr[1] == "O" && strArr[2] == "O")
     || (strArr[4] == "X" && strArr[8] == "X")
     || (strArr[4] == "O" && strArr[8] == "O")
     || (strArr[5] == "X" && strArr[10] == "X")
     || (strArr[5] == "O" && strArr[10] == "O"))){
    winningPosition << 0;
  }
  
  //1 wins
  else if(strArr[1] == "-" && ((strArr[0] == "X" && strArr[2] == "X")
     || (strArr[0] == "O" && strArr[2] == "O")
     || (strArr[5] == "X" && strArr[9] == "X")
     || (strArr[5] == "O" && strArr[9] == "O"))){
    winningPosition << 1;
  }
  
  //2 wins  
  else if(strArr[2] == "-" && ((strArr[0] == "X" && strArr[1] == "X")
     || (strArr[0] == "O" && strArr[1] == "O")
     || (strArr[6] == "X" && strArr[10] == "X")
     || (strArr[6] == "O" && strArr[10] == "O")
     || (strArr[5] == "X" && strArr[8] == "X")
     || (strArr[5] == "O" && strArr[10] == "O"))){
    winningPosition << 2;
  }
  
  //4 wins
  else if(strArr[4] == "-" && ((strArr[0] == "X" && strArr[8] == "X")
     || (strArr[0] == "O" && strArr[8] == "O")
     || (strArr[5] == "X" && strArr[6] == "X")
     || (strArr[5] == "O" && strArr[6] == "O"))){
    winningPosition << 4;
  }
  
  //5 wins
  else if(strArr[5] == "-" && ((strArr[0] == "X" && strArr[10] == "X")
     || (strArr[0] == "O" && strArr[10] == "O")
     || (strArr[4] == "X" && strArr[6] == "X")
     || (strArr[4] == "O" && strArr[6] == "O")
     || (strArr[1] == "X" && strArr[9] == "X")
     || (strArr[1] == "O" && strArr[9] == "O")
     || (strArr[2] == "X" && strArr[8] == "X")
     || (strArr[2] == "O" && strArr[8] == "O"))){
    winningPosition << 5;
  }
  
  //6 wins
  else if(strArr[6] == "-" && ((strArr[2] == "X" && strArr[10] == "X")
     || (strArr[2] == "O" && strArr[10] == "O")
     || (strArr[4] == "X" && strArr[5] == "X")
     || (strArr[4] == "O" && strArr[5] == "O"))){
    winningPosition << 6;
  }
  
  //8 wins
  else if(strArr[8] == "-" && ((strArr[0] == "X" && strArr[4] == "X")
     || (strArr[0] == "O" && strArr[4] == "O")
     || (strArr[2] == "X" && strArr[5] == "X")
     || (strArr[2] == "O" && strArr[5] == "O")
     || (strArr[9] == "X" && strArr[10] == "X")
     || (strArr[9] == "O" && strArr[10] == "O"))){
    winningPosition << 8;
  }
  
  //9 wins
  else if(strArr[9] == "-" && ((strArr[2] == "X" && strArr[5] == "X")
     || (strArr[2] == "O" && strArr[5] == "O")
     || (strArr[8] == "X" && strArr[10] == "X")
     || (strArr[8] == "O" && strArr[10] == "O"))){
    winningPosition << 9;
  }
  
  //10 wins
  else if(strArr[10] == "-" && ((strArr[0] == "X" && strArr[5] == "X")
     || (strArr[0] == "O" && strArr[5] == "O")
     || (strArr[2] == "X" && strArr[6] == "X")
     || (strArr[2] == "O" && strArr[6] == "O")
     || (strArr[8] == "X" && strArr[9] == "X")
     || (strArr[8] == "O" && strArr[9] == "O"))){
    winningPosition << 10;
  }
  return winningPosition.str(); 
            
}

int main() { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. 
     To see how to enter arrays as arguments in C++ scroll down */
     
  string A[] = gets(stdin);
  cout << NoughtsDeterminer(A);
  return 0;
    
}           
