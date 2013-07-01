#include "player.h"

Element* RandomBot::play()  
{
  srand(time(NULL));
  int i = rand() % 5;
  cout<<name()<<" chose "<<m->m[i]->name()<<endl;
  return m->m[i];
}

Element* Human::play()
{
  int move;
  cout<<"(1) : Rock\n"
      <<"(2) : Paper\n"
      <<"(3) : Scissors\n"
      <<"(4) : Lizard\n"
      <<"(5) : Spock\n"
      <<"Enter your move: ";
  cin>>move;
  if(move >= 1 && move <=5) {
    return m->m[move];
  } else {
    cout<<"Invalid move.  Please try again.\n";
    play();
  }  
}

