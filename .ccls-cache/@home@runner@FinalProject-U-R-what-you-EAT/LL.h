#include <iostream>
using namespace std;
#include "AVATA.h"
class LL{
  private:
    AVATA*hol;
    int size;
    
  public: 
    void add_node(AVATA*&);
    void show_all();
    void select_avata(int,int);
    void avata_info(int);
    ~LL();
    LL();  
    int avatar_alive(int);
    int check_choose(int);
};
