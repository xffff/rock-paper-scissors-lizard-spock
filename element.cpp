#include "element.h"

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
