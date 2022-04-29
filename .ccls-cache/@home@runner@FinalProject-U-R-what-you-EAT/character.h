#include <iostream>
using namespace std;

class character
{
  private: 
    string name;
    char gender;
    character* next;
  public: 
    character(string,char);
    virtual ~character();
    void insert(character*&);
    character* move_next();
    virtual void show_node();
};
