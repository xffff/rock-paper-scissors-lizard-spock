#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "moves.h"

using namespace std;

class Player {
 public:
  Player(string lname)
    : _name(lname)
  { m = new Moves; }
  ~Player();
  string name() { return _name; }
  virtual Element* play() = 0;
 protected:
  Moves* m;
 private:
  string _name;
};

class StupidBot : public Player {
 public:
  StupidBot(string name)
    : Player(name) {}
  Element* play() { return m->m[0]; }
};

class RandomBot : public Player {
 public:
  RandomBot(string name)
    : Player(name) {}
  Element *play();
};

class IterativeBot : public Player {
 public:
  IterativeBot(string name)
    : Player(name) 
  { count = 0; }
  Element* play() { return m->m[++count % 5]; }
 private:
  int count;
};

class LastPlayBot : public Player {
 public:
  LastPlayBot(string name)
    : Player(name) 
  { lastMove = rand() % 5; }
  Element* play() { return m->m[lastMove]; }
  int lastMove;
};

class Human : public Player {
 public:
  Human(string name)
    : Player(name) {}
  Element* play();
};


