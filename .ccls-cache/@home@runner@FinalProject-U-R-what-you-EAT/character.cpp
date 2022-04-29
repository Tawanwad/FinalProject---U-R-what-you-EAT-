#include <iostream>
using namespace std;
#include "character.h"

character::character(string x,char y){
  name=x;
  gender=y;
  next=NULL;
  cout<<"ADDING CHARACTER ..."<<endl;
  cout<<"NAME : "<<name<<endl;
  if(gender=='F') cout<<"GENDER : Female"<<endl;
  else if(gender=='M') cout<<"GENDER : Male"<<endl;
}

character:: ~character(){
  if(gender=='F') cout<<"Female ";
  else if(gender=='M') cout<<"Male ";
  cout<<"CHARACTER : "<<name<<" IS BEGIN DELETED"<<endl;
}

character* character::move_next(){
  return next;
}

void character:: show_node(){
  cout<<"NAME : "<<name<<endl;
  if(gender=='F') cout<<"GENDER : Female"<<endl;
  else if(gender=='M') cout<<"GENDER : Male"<<endl;
  cout<<endl;
}

void character::insert(character*& x){
  x->next=this;
}

