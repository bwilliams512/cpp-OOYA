/*
Codecademy
Learn C++

This project involves building a system of dating profiles
for a fictional match-making service.
*/

#include <iostream>
#include "profile.hpp"

int main() {

  Profile stella("Stella McCartney", 25, "New York", "USA", "she/her");
  stella.add_hobby("wingsuit fly off of a cliff in Switzerland");
  stella.add_hobby("big-wave surf break Jaws in Maui");
  stella.add_hobby("extreme snowboard down rocky, steep mountain sides at harrowing speeds");
  stella.add_hobby("explore creative ideas for fashion designs");
  std::cout << stella.view_profile();

}

