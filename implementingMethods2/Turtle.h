#ifndef _TURTLE_H_
#define _TURTLE_H_
#include <string>


class Turtle{
private:
  //attributes
  std::string name {"unknown"};
  std::string weapon {"unknown"};
  int health {100};
  int xp {10};
  
public:
  //methods initiated here
  void set_turtle();
  void get_turtle();
  void increase_health();
  void decrease_health();
  void increase_xp();
  void decrease_xp();

};

#endif // _TURTLE_H_
