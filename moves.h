#include <vector>
#include "element.h"

class Moves {
 public:
  Moves()
  {
    m.push_back(new Rock("Rock"));
    m.push_back(new Paper("Paper"));
    m.push_back(new Scissors("Scissors"));
    m.push_back(new Lizard("Lizard"));
    m.push_back(new Spock("Spock"));
  }
  std::vector<Element*> m;
};
