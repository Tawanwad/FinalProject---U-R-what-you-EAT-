#include <iostream>
#include <ctime>
using namespace std;
#include "AVATA.h"
#include "LL.h"

LL::LL(){
  hol=NULL;
  size=0;
}

LL::~LL(){
  int i;
	AVATA *t;
	for(i=0;i<size;i++){
		t=hol;
		hol=hol->move_next();
		delete t;
	}	
}

void LL::show_all(){
  AVATA* t=hol;
  int i;
  for(i=0;i<size;i++){
    
    cout<<"["<<i+1<<"]";
    t->show_node();
    cout<<" __________________________________________________"<<endl<<endl;
	  t=t->move_next();    
  }
}

void LL::add_node(AVATA *&A){
  hol->insert(A);
  hol=A;

  size++;
}

//รับเลขตัว กับค่า energy ที่เพิ่ม/ลด
void LL::select_avata(int A,int E){
  int i;
  AVATA* t=hol;
  for(i=0; i<size; i++)
  {
    if(i==A-1)
    {
      t->calcu_Energy(E);
    }
    t=t->move_next();
  }
}

int LL::avatar_alive(int A)
{
  int i,a;
  AVATA* t=hol;
  for(i=0; i<size; i++)
  {
    if(i==A-1)
    {
      a=t->check_avatar();
    }
    t=t->move_next();
  }
  return a;
}

int LL::check_choose(int A)
{
  int a;
  if(A<=0||A>size) return a=0;
  else return a=1;
}

void LL::avata_info(int A){
  int i;
  AVATA* t=hol;
  for(i=0; i<size; i++)
  {
    if(i==A-1)
    {
      t->show_node();
      cout<<" _______________________________________________";
    }
    t=t->move_next();
  }
}