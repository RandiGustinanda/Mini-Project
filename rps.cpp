/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/

#include <iostream>
#include <stdlib.h>

int main(){

  srand(time(NULL));

  int com = rand() % 3 + 1;
  int user = 0;

  std::cout << "===================\nrock paper scissors\n===================\n";
  std::cout << " 1) rock\n 2) paper\n 3) scissors\n";
  std::cout << " shoot! \n";
  std::cout << "kamu memilih : ";
  std::cin >> user;
  std::cout << "com memilih : " << com <<" \n";
  // user rock 
  if(user == 1 && com == 2){
    std::cout << "You Win\n";
  }else if (user == com){
    std::cout << "draw\n";
  }else if (user == 1 && com == 3){
    std::cout << "You Lose,Com Win\n";
  }//user paper
  else if (user == 2 && com == 1){
    std::cout << "You Win\n";
  }else if (user == 2 && com == 3){
    std::cout << "You Lose\n";
  }//user scissors
  else if (user == 3 && com == 1){
    std::cout << "you lose\n";
  }else if (user == 3 && com == 2){
    std::cout << "you win\n";
  }
}