#include <iostream>
#include <cstdlib>

int main(){
  
  std::cout << "Magic 8-Ball : \n";
  srand(time(NULL));
  int ball = std::rand() % 10 ;
  std::cout << ball;
  
  if (ball == 0){
    std::cout  << " Its certain\n";
  }else if (ball == 1){
    std::cout  << " Its certain22\n";
  }else{
    std::cout  << " is doubtful";
  }
}