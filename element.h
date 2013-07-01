#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Element {
 public:
  Element(string lname);
  ~Element() {}
  string name() { return _name; }
  virtual string compareTo(Element &e) = 0;  
 protected:
  string _name;
  string _types[5];
  string _states[3];
  string _outcomes[10];
};

class Rock : public Element {
 public:
  Rock(string name)
    : Element(name) {}
  ~Rock();
  string compareTo(Element &e);
};

class Paper : public Element {
 public:
  Paper(string name)
    : Element(name) {}
  ~Paper();
  string compareTo(Element &e);      
};

class Scissors : public Element {
 public:
 Scissors(string name)
   : Element(name) {}
  ~Scissors();
  string compareTo(Element &e);
};

class Lizard : public Element {
 public:
  Lizard(string name)
    : Element(name) {}
  ~Lizard();
  string compareTo(Element &e);
};

class Spock : public Element {
 public:
  Spock(string name)
    : Element(name) {}
  ~Spock();
  string compareTo(Element &e);
};


