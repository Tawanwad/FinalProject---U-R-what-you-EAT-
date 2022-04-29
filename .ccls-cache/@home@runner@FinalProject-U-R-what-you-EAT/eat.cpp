#include <iostream>
using namespace std;

int show_menuF() {
    int fmenu;
  
     cout << "!!!++++++++++++++Food Menu++++++++++++++++!!!" << endl;
    cout << "!                                           !" << endl;
    cout << "!    1. Noodle (Energy +200)                !" << endl;
    cout << "!    2. Chicken Roast (Energy +350)         !" << endl;
    cout << "!    3. Fry Rice with Bacon (Energy +500)   !" << endl;
    cout << "!    4. French Fries (Energy +750)          !" << endl;
    cout << "!    5. Durian Sticky Rice (Energy +900)    !" << endl;
    cout << "!                                           !" << endl;
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+" << endl;
    cout << endl;
    cout << ">>> Please select the Menu [1-5] : ";
    cin >> fmenu;
    return fmenu;
  }

  int Noodle(){
    return 200;
  }

  int ChickenRoast(){
    return 350;
  }

  int FryRicewithBacon(){
    return 500;
  }

  int FrenchFries(){
    return 750;
  }

  int DurianStickyRice(){
    return 900;
  }
