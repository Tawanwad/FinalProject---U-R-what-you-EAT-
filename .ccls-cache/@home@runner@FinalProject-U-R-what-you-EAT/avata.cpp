#include <iostream>
using namespace std;
#include "avata.h"
#include "exercise.h"
#include "eat.h"

AVATA::AVATA(string x,char y,int z){
  name=x;
  gender=y;
  next=NULL;
  cout<<"ADDING AVATAR ..."<<endl;
  cout<<"NAME : "<<name<<endl;
  if(gender=='F') cout<<"GENDER : Female"<<endl;
  else if(gender=='M') cout<<"GENDER : Male"<<endl;
}

AVATA:: ~AVATA(){
  if(gender=='F') cout<<"Female ";
  else if(gender=='M') cout<<"Male ";
  cout<<"AVATAR : "<<name<<" IS BEGIN DELETED"<<endl;
}

AVATA* AVATA::move_next(){
  return next;
}

void AVATA:: show_node(){
  cout<<"NAME : "<<name<<endl;
  if(gender=='F') cout<<"GENDER : Female"<<endl;
  else if(gender=='M') cout<<"GENDER : Male"<<endl;
  cout<<endl;
}

void AVATA::show_energy()
{
  cout<<"ENERGY : "<<energy<<endl;
}

void AVATA::insert(AVATA *& x){
  x->next=this;
}

//exercise
void AVATA::EX(int x)
{
  int check,E;
  switch(check)
  {
    case 1 :
      E=running();
      break;
    case 2 :
      E=swimming();
      break;
    case 3 :
      E=biking();
      break;
    case 4 :
      E=playing_bad();
      break;
    case 5 :
      E=dancing();
      break;
  }
  energy=-E;
}

//eat
void avata::F(int x)
{
  int check,E;
  switch(check)
  {
    case 1 :
      E=Noodle();
      break;
    case 2 :
      E=ChickenRoast();
      break;
    case 3 :
      E=FryRicewithBacon();
      break;
    case 4 :
      E=FrenchFries();
      break;
    case 5 :
      E=DurianStickyRice();
      break;
  }
  energy=+E;
}