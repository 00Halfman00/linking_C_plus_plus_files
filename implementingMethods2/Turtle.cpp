#include "Turtle.h"
#include <iostream>
#include <string>


void Turtle::set_turtle(){
  std::string turtles [4] {"Leo", "Ralph", "Don", "Mike"};
  std::string weapons [4] {"Katana", "Sai", "Bo", "Nunchaku"};
  
  for(size_t i {}; i < 4; ++i){
      std::cout << i + 1 << ". " << *(turtles + i) << std::endl;
  }
  
  std::cout << "\nEnter the number to pick one of the Turtles ";
  int choice {};
  std::cin >> choice;
  name = turtles[choice - 1];
  weapon = weapons[choice - 1];
}

void Turtle::get_turtle(){
  std::cout << std::endl;
  std::cout << "name: " << name << std::endl;
  std::cout << "weapon: " << weapon << std::endl;
  std::cout << "health: " << health << std::endl;
  std::cout << "xp: " << xp << std::endl;
  std::cout << std::endl;
}

void Turtle::increase_health(){
  int inc {};
  std::cout << "(Maximum health is 100)" << std::endl;
  std::cout << "Enter a number to increase health by   " << std::endl;
  std::cin >> inc;
  if(health + inc >= 100) health = 100;
  else health += inc;
  
}

void Turtle::decrease_health(){
  int inc {};
  std::cout << "Enter a number to decrease health by   " << std::endl;
  std::cin >> inc;
  if(health - inc <= 0) health = 0;
  else health -= inc;
  std::cout << "health is now " << health << std::endl;
}

void Turtle::increase_xp(){
  int inc {};
  std::cout << "(Maximum health is 1000)" << std::endl;
  std::cout << "Enter a number to increase xp by   " << std::endl;
  std::cin >> inc;
  if(xp + inc >= 1000) xp = 100;
  else xp += inc;
  std::cout << "xp is now " << xp << std::endl;
}

void Turtle::decrease_xp(){
  int inc {};
  std::cout << "Enter a number to decrease xp by   " << std::endl;
  std::cin >> inc;
  if(xp - inc <= 0) xp = 0;
  else xp -= inc;
  std::cout << "xp is now " << xp << std::endl;
}