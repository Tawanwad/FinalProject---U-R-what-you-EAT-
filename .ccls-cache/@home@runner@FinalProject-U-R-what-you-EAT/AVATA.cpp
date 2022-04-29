#include <iostream>
using namespace std;
#include "AVATA.h"

AVATA::AVATA(string x,char y,int z){
  name=x;
  gender=y;
  energyMAX=z;
  energyNOW=z*30/100;
  next=NULL;
  cout<<"ADDING AVATAR ..."<<endl;
  cout<<"NAME : "<<name<<endl;
  if(gender=='F'||gender=='f') cout<<"GENDER : Female"<<endl;
  else if(gender=='M'||gender=='m') cout<<"GENDER : Male"<<endl;
}

AVATA:: ~AVATA(){
  if(gender=='F') cout<<"Female ";
  else if(gender=='M') cout<<"Male ";
  cout<<"AVATAR : "<<name<<" IS BEING DELETED"<<endl<<endl;
}

AVATA* AVATA::move_next(){
  return next;
}

void AVATA:: show_node(){
  if(alive==0) {
    cout<<" ___________________  ";
    cout << "\033[0;31m";
    cout<<"DEAD  ";
    cout << "\033[0;0m";
    cout<<"____________________"<<endl;
    }
  else {
    cout<<" __________________  ALIVE  ____________________"<<endl;
    }
  cout<<endl;
  cout<<"     => NAME : "<<name<<endl;
  if(gender=='F'||gender=='f') cout<<"     => GENDER : Female"<<endl;
  else if(gender=='M'||gender=='m') cout<<"     => GENDER : Male"<<endl;
}

void AVATA::show_energy()
{
  cout<<"ENERGY : "<<energyNOW<<"//"<<energyMAX<<endl;
}

void AVATA::insert(AVATA *& x){
  x->next=this;
}

void AVATA::calcu_Energy(int E)
{
  int EN=E;
  energyNOW=energyNOW+EN;
  if(energyNOW>energyMAX) 
  {
    alive=0;
    energyNOW=0;
    energyMAX=0;
  }
  else if(energyNOW<=0) 
  {
    alive=0;
    energyNOW=0;
    energyMAX=0;
  }
}

int AVATA::check_avatar()
{
  if(alive==0) 
  {
    cout << "\033[0;31m";
    cout<<"!!! Avatar "<<"<< "<< name <<" >> is dead. !!!"<<endl;
    cout << "\033[0;0m";
    return 0;
  }
  else return 1;
}