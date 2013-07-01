#include <iostream>
#include "player.h"

using namespace std;

Player* choosePlayer(int x);
void game (int n, Player &p1, Player &p2);

int main()
{
  int numrounds = 4;
  int ip1, ip2;
  Player *p1, *p2;
  
  cout<<"Rock, Paper, Scissors, Lizard, Spock\n\n";
  cout<<"Choose two players:\n"
      <<"(1) Human\n"
      <<"(2) StupidBot\n"
      <<"(3) RandomBot\n"
      <<"(4) IterativeBot\n"
      <<"(5) LastPlayBot\n"
      <<"(6) MyBot\n\n"
      <<"Select player 1: ";
  cin>>ip1;
  p1 = choosePlayer(ip1);
  
  cout<<"\nSelect player 2: ";
  cin>>ip2;
  p2 = choosePlayer(ip2);

  cout<<"\n\n"<<p1->name()<<" vs. "<<p2->name()<<". Go!\n";

  game();
  
  return 0;
}

Player* choosePlayer(int x)
{
  switch(x) {
  case 1: return new Human("Human");
  case 2: return new StupidBot("StupidBot");
  case 3: return new RandomBot("RandomBot");
  case 4: return new IterativeBot("IterativeBot");
  case 5: return new LastPlayBot("LastPlayBot");
  case 6: return new MyBot("MyBot");
  default return new Human("Human");
  }
}

void game(int n, Player &p1, Player &p2)
{
  Element *p1move;
  Element *p2move;
  int tscore = 0;
  for(int i=0; i<n; ++i) {
    int rscore = 0;
    cout<<"Round "<<i<<endl;
    for(int j=0; j<n; ++j) {
      *p1move = p1->play();
      *p2move = p2->play();
      cout<<p1move->compareTo(*p2move)<<endl;
      // here I need to grab the win/lose crap
    }
  }
}
