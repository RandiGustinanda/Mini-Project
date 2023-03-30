#include <iostream>

int main(){

  // The magic starts here
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  // variable to store answers 
  int answer1;
  int answer2;
  int answer3;
  int answer4;

  std::cout << "The Sorting Hat Quiz\n";
//question 1
  std::cout << "Q1) When i'm dead, I want people to remember me as : \n 1) The Good\n 2) The Great\n 3) The Wise\n 4) The Bold\n";
  std::cin >> answer1;

  if(answer1 == 1){
     gryffindor++;
  }else if (answer1 == 2){
     hufflepuff++;
  }else if(answer1 == 3){
    ravenclaw++;
  }else if(answer1 == 4){
    slytherin++;
  }else{
    std::cout << answer1 << " is not the answer ,plis choice correct  answer\n";
  }
//question 2
   std::cout << "Q2) Dawn or Dusk?\n 1) Dawn\n 2) Dusk\n)";
   std::cin >> answer2;
   if(answer2 == 1){
     gryffindor++;
     ravenclaw++;
   }else if(answer2 == 2){
     hufflepuff++;
     slytherin++;
   }else{
      std::cout << answer2 << " is not the answer ,plis choice correct  answer\n";
   }
// question 3
   std::cout << "Q3) Which kind of instrument most pleases yout ear ? \n 1) The Violin\n 2) The tumpet\n 3) The Piano\n 4) The drum\n";
   std::cin >> answer3;

  if(answer3 == 1){
    slytherin++;
  }else if (answer3 == 2){
    hufflepuff++;
  }else if(answer3 == 3){
    ravenclaw++;
  }else if(answer3 == 4){
    gryffindor++;
  }else{
    std::cout << answer1 << " is not the answer ,plis choice correct  answer\n";
  }
  //question 4
   std::cout << "Q3) Which road tempts you most ? \n 1) The wide, sunny grassy lane\n 2) The narrow,dark,lantern-lit alley\n 3) The twisting,leaf-strewn path throigh woods\n 4) The cobbled street lined (ancient buildings)\n";
   std::cin >> answer4;

  if(answer4 == 1){
    hufflepuff++;
  }else if (answer4 == 2){
    slytherin++;
  }else if(answer4== 3){
    gryffindor++;
  }else if(answer4 == 4){
    ravenclaw++;
  }else{
    std::cout << answer1 << " is not the answer ,plis choice correct  answer\n";
  }
  //
  int max = 0;
  std::string house;
  if (gryffindor > max){
    max = gryffindor;
    house = "Gryffindor";
  }else if ( hufflepuff > max){
    max = hufflepuff;
    house = "hufflepuff";
  }else if (slytherin > max){
    max = slytherin;
    house = "slytherin";
  }else if (ravenclaw > max){
    max = ravenclaw;
    house = "ravenclaw";
  }
  //result
  std::cout << "Gryffindor = " << gryffindor << "\n";
  std::cout << "Ravenclaw = " << ravenclaw << "\n";
  std::cout << "slytherin = " << slytherin << "\n";
  std::cout << "hufflepuff = " << hufflepuff << "\n";
  std::cout << "Your house is " << house << "\n";

};