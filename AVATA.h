#ifndef AVATA_H
#define AVATA_H

#include <iostream>
using namespace std;

class AVATA
{
  private: 
    string name;
    char gender;
    int alive=1;
    AVATA* next;
  protected:
    int energyNOW,energyMAX;
  public: 
    AVATA(string,char,int);
    virtual ~AVATA();
    void insert(AVATA*&);
    AVATA* move_next();
    virtual void show_node();

    void show_energy();
    void calcu_Energy(int);
    int check_avatar();
};

#endif