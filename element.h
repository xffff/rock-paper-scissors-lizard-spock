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

Element::Element(string lname) : _name(lname)
{
  string ltypes[] = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};
  string lstates[] = {"Win", "Lose", "Tie"};
  string loutcomes[] = {"Scissors cut Paper",
	       "Paper covers Rock",
	       "Rock crushes Lizard",
	       "Lizard poisons Spock",
	       "Spock smashes Scissors",
	       "Scissors decapitate Lizard",
	       "Paper disproves Spock",
	       "Spock vaporizes Rock",
	       "Rock crushes Scissors"};

  for(int i=0; i<9; ++i) {
    if(i<3) { _states[i] = lstates[i]; }
    if(i<5) { _types[i] = ltypes[i]; }
    _outcomes[i] = loutcomes[i];
  }
  // cout<<"Created a "<<_name<<endl;
}

class Rock : public Element {
 public:
  Rock(string name)
    : Element(name) {}
  ~Rock();
  string compareTo(Element &e);
};

string Rock::compareTo(Element &e)
{
  string n = e.name();
  if(n == _name) {    
    return _name + " = " + _name + ", " + _states[2];
  } else if(n == _types[1]) {
    return _outcomes[1] + ", " + _states[1];
  } else if(n == _types[2]) {
    return _outcomes[8] + ", " + _states[0];
  } else if(n == _types[3]) {
    return _outcomes[2] + ", " + _states[0];
  } else if(n == _types[4]) {
    return _outcomes[7] + ", " + _states[1];
  }
}

class Paper : public Element {
 public:
  Paper(string name)
    : Element(name) {}
  ~Paper();
  string compareTo(Element &e);      
};

string Paper::compareTo(Element &e)
{
  string n = e.name();
  if(n == _name) {    
    return _name + " = " + _name + ", " + _states[2];
  } else if(n == _types[0]) {
    return _outcomes[1] + ", " + _states[0];
  } else if(n == _types[2]) {
    return _outcomes[0] + ", " + _states[1];
  } else if(n == _types[3]) {
    return _outcomes[6] + ", " + _states[1];
  } else if(n == _types[4]) {
    return _outcomes[7] + ", " + _states[0];
  }
}

class Scissors : public Element {
 public:
 Scissors(string name)
   : Element(name) {}
  ~Scissors();
  string compareTo(Element &e);
};

string Scissors::compareTo(Element &e)
{
  string n = e.name();
  if(n == _name) {    
    return _name + " = " + _name + ", " + _states[2];
  } else if(n == _types[1]) {
    return _outcomes[0] + ", " + _states[0];
  } else if(n == _types[0]) {
    return _outcomes[9] + ", " + _states[1];
  } else if(n == _types[3]) {
    return _outcomes[5] + ", " + _states[0];
  } else if(n == _types[4]) {
    return _outcomes[4] + ", " + _states[1];
  }
}

class Lizard : public Element {
 public:
  Lizard(string name)
    : Element(name) {}
  ~Lizard();
  string compareTo(Element &e);
};

string Lizard::compareTo(Element &e)
{
  string n = e.name();
  if(n == _name) {    
    return _name + " = " + _name + ", " + _states[2];
  } else if(n == _types[1]) {
    return _outcomes[6] + ", " + _states[0];
  } else if(n == _types[2]) {
    return _outcomes[5] + ", " + _states[1];
  } else if(n == _types[0]) {
    return _outcomes[2] + ", " + _states[0];
  } else if(n == _types[4]) {
    return _outcomes[3] + ", " + _states[1];
  }
}

class Spock : public Element {
 public:
  Spock(string name)
    : Element(name) {}
  ~Spock();
  string compareTo(Element &e);
};

string Spock::compareTo(Element &e)
{
  string n = e.name();
  if(n == _name) {    
    return _name + " = " + _name + ", " + _states[2];
  } else if(n == _types[1]) {
    return _outcomes[8] + ", " + _states[1];
  } else if(n == _types[2]) {
    return _outcomes[4] + ", " + _states[0];
  } else if(n == _types[3]) {
    return _outcomes[3] + ", " + _states[1];
  } else if(n == _types[0]) {
    return _outcomes[8] + ", " + _states[0];
  }
}
