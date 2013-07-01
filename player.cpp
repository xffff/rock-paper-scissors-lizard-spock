#include "player.h"

Element* RandomBot::play()  
{
  srand(time(NULL));
  int i = rand() % 5;
  cout<<name()<<" chose "<<m->m[i]->name()<<endl;
  return m->m[i];
}

Element* IterativeBot::play()
{
  int i = ++count % 5;
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
    cout<<"You chose "<<m->m[move-1]->name()<<endl;
    return m->m[move-1];
  } else {
    cout<<"Invalid move.  Please try again.\n";
    play();
  }  
}

