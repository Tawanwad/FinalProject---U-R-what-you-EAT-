#ifndef AVATA_H
#define AVATA_H

#include <iostream>
using namespace std;

class exercise{
  private:

  public:
    /*int show_menuEX() {
      int emenu;
      cout << "!!!++++++++++++++Excercise Menu+++++++++++++!!!" << endl;
      cout << "|---------------------------------------------|" << endl;
      cout << ">>------:Each Exercise for 20 minutes:-------<<" << endl;
      cout << "+                                             +" << endl;
      cout << "!     1. Running (Energy -150)                !" << endl;
      cout << "!     2. Swimmimg (Energy -300)               !" << endl;
      cout << "!     3. Ride A Bike  (Energy -550)           !" << endl;
      cout << "!     4. Playing Badminton (Energy -680)      !" << endl;
      cout << "!     5. Cadio Dance (Energy -800)            !" << endl;
      cout << "+                                             +" << endl;
      cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+=+" << endl;
      cout << endl;
      cout << ">>> Please select the Menu [1-5] : ";
      cin >> emenu;
      if(emenu!=1||emenu!=2||emenu!=3||emenu!=4||emenu!=5)
        {
          while(1)
          {
            cout<<"Please try again : ";
            cin>>emenu;
            if(emenu==1||emenu==2||emenu==3||emenu==4||emenu==5) break;
          }
        }
    return emenu;
  }*/


    int running(){
      int E;
      return E=150;
    }

    int swimming(){
      int E;
      return E=300;
    }

    int biking(){
      int E;
      return E=550;
    }

    int playing_bad(){
      int E;
      return E=680;
    }

    int dancing(){
      int E;
      return E=800;
    }
};

#endif