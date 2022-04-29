//สำหรับ print screen ต่างๆ เช่น ตัวละคร รูปประกอบ
#include <iostream>
using namespace std;

void welcome()
{
  cout << " /-------------------------------------------------\\" << endl;
  cout << "|             _      _        _____                 |" << endl;
  cout << "|            | |    | |      |  ___\\ \\            |" << endl;
  cout << "|            | |    | |      | |    | |             |" << endl;
  cout << "|            | |    | |      | |____| |             |" << endl;
  cout << "|            | |    | |      |  ____ \\ \\          |" << endl;
  cout << "|            | |    | |      | |      \\ \\         |" << endl;
  cout << "|             \\ \\__/ /     |_|       \\_\\        |" << endl;
  cout << "|                                                   |" << endl;
  cout << "|               _  _____             ___  _  _____  |" << endl;
  cout << "|  \\     /|_| /_\\  |     |  |     |___ /_\\  |    |" << endl;
  cout << "|   \\/\\/ | |/   \\ |     |__|     |___/   \\ |    |" << endl;
  cout << "|                                                   |" << endl;
  cout << " \\------------------------------------------------/" << endl;
}

void endprogram()
{
  cout << " /-------------------------------------------------\\" << endl;
  cout << "|                                           |" << endl;
  cout << "|                                           |" << endl;
  cout << "|                                            |" << endl;
  cout << "|                                            |" << endl;
  cout << "|                                             |" << endl;
  cout << "|                                                  |" << endl;
  cout << "|                                                   |" << endl;
  cout << " \\------------------------------------------------/" << endl;
}

void AVATA_display()
{
  cout<<""<<endl;
}

void main_menu()
{
  cout << "==== MAIN MENU ====" << endl;
  cout << "1. Feeding" << endl;
  cout << "2. Exercise"<< endl;
  cout << "3. Avatar Profile"<< endl;
  cout << "4. Exit" << endl;
  cout << "--> Please select menu [1-4] : ";
}

void show_status(int energy){
  if(energy<400){
    cout << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << "!!!!!                            !!!!!" << endl;
    cout << "!!!!!     +.+   Warning   +.+    !!!!!" << endl;
    cout << ">>>>>    Your Avatar need food   <<<<<" << endl;
    cout << "!!!!!                            !!!!!" << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
  }
  else if(energy>400 && energy<1500){
    // energy เป็นค่าสมมุติเฉยๆ
    cout << endl;
    cout << "***************************************" << endl;
    cout << "*                                     *" << endl;
    cout << ">>> ^~^ Your Avatar are healthy ^~^ <<<" << endl;
    cout << "*                                     *" << endl;
    cout << "***************************************" << endl;
  }
  else if(energy>1500){
    // energy เป็นค่าสมมุติเฉยๆ
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << "!!!!!                            !!!!!" << endl;
    cout << "!!!!!     -.-   Warning   -.-    !!!!!" << endl;
    cout << ">>> Your Avatar need exercise more <<<" << endl;
    cout << "!!!!!                            !!!!!" << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
  } 
}

void menuEX()
{
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
}

void menuF()
{
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
}