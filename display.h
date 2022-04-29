#include<iostream>
using namespace std;

void welcome();
void endprogram();
void AVATA_display();
void main_menu();
void menu_display();
void menuEX();
void menuF();
int check_switch(char m,int selec);
void disEX(int);
void disF(int);

void welcome()
{
  cout << "\033[0;93m";
  cout<<endl<<endl;
  cout << "OOOOOOOO======================================================OOOOOOOO" << endl;
  cout << "OOOOO                                                             OOOO" << endl;
  cout << "OO                    III    III      IIIIIIIIII                    OO" << endl;
  cout << "O                     III    III      III     III                    O" << endl;
  cout << "I                     III    III      III     III                    I" << endl;
  cout << "I                     III    III      IIIIIIIIII                     I" << endl;
  cout << "I                     III    III      III     III                    I" << endl;
  cout << "I                      IIIIIIII       III      III                   I" << endl;
  cout << "I                                                                    I" << endl;
  cout << "I   II     II II  II IIIIII IIIIII   II  II   IIIIII IIIIII IIIIII   I" << endl;
  cout << "O   II III II IIIIII II==II   II     II  II   II===  II==II   II     O" << endl;
  cout << "OO   III III  II  II II  II   II     IIIIII   IIIIII II  II   II    OO" << endl;
  cout << "OOOOO                                                             OOOO" << endl;
  cout << "OOOOOOOO======================================================OOOOOOOO" << endl;
  cout << "\033[0;92m";
  cout << "                      - EGCO112 FINAL PROJECT -                       " <<endl;
  cout<<endl<<endl;
  cout << "\033[0;0m";
}

void endprogram()
{
  cout << "\033[0;93m";
  cout<<endl<<endl;
  cout << "OOOOOOOO======================================================OOOOOOOO" << endl;
  cout << "OOOOO                                                             OOOO" << endl;
  cout << "OO               IIIIIIIII    III   III   IIIIIIIII                 OO" << endl;
  cout << "O                III    III    III III    III                        O" << endl;
  cout << "I                IIIIIIIII      IIIII     IIIIIIIII                  I" << endl;
  cout << "I                III    III      III      III                        I" << endl;
  cout << "I                IIIIIIIII       III      IIIIIIIII                  I" << endl;
  cout << "O                                                                    O" << endl;
  cout << "OO                      ";
  cout << "\033[0;34m";
  cout<<"--- SEE YOU AGAIN ---                       ";
  cout << "\033[0;93m";
  cout<<"OO" << endl;
  cout << "OOOOO                                                             OOOO" << endl;
  cout << "OOOOOOOO======================================================OOOOOOOO" << endl;
  cout<<endl<<endl;
  cout << "\033[0;0m";
}

void AVATA_display()
{
  cout << "\033[2J\033[0;0H";
  cout<<"                      _______________________"<<endl;
  cout<<"       /\\ /\\         |                       |"<<endl;
  cout<<"   __ ( oWo ) __   <<<  LET'S GO! LET'S GO!  |"<<endl;
  cout<<"  (             )    |_______________________|"<<endl;
  cout<<"  (( ) __ ) __)))"<<endl;
  cout<<"  (  )    |   | )"<<endl;
  cout<<"  \\ / \\   |   | /"<<endl;
  cout<<"  |_| /  \\_ / |_|"<<endl;
  cout<<"      \\  | \\  |"<<endl;
  cout<<"       \\ |  \\ |"<<endl;
  cout<<"       ( /  ( /"<<endl;
  cout<<"       \\/_  \\/_"<<endl<<endl;
}

void menu_display()
{
  cout << "\033[0;93m";
  cout<<endl<<endl;
  cout << " ====================================================" << endl;
  cout <<endl;
  cout << "    IIIII IIIII  IIIIIIII  IIIII    III  III   III   " << endl;
  cout << "    III III III  III       III II   III  III   III   " << endl;
  cout << "    III     III  IIIIIIII  III  II  III  III   III   "<<endl;
  cout << "    III     III  III       III   II III  III   III   " << endl;
  cout << "    III     III  IIIIIIII  III    IIIII   IIIIIII    " << endl;
  cout << endl;
  cout << " ====================================================" << endl;
  cout<<endl;
  cout << "\033[0;0m";
}

void main_menu()
{
  cout << "\033[0;92m";
  cout << "*** ======= MAIN MENU ======= ***" << endl;
  cout << "[1] Avatar Profile" << endl;
  cout << "[2] Feeding"<< endl;
  cout << "[3] Exercise"<< endl;
  cout << "[4] Exit" << endl<<endl;
  cout << "\033[0;0m";
}


void menuEX()
{
  cout << endl;
  cout << endl;
  cout << "\033[0;93m";
  cout << "  !!!++++++++++++  Excercise Menu  +++++++++++!!!" << endl;
  cout << "  |---------------------------------------------|" << endl;
  cout << "  >>------:Each Exercise for 20 minutes:-------<<" << endl;
  cout << "  +                                             +" << endl;
  cout << "  !      1. Running (Energy -150)               !" << endl;
  cout << "  !      2. Swimmimg (Energy -300)              !" << endl;
  cout << "  !      3. Ride A Bike  (Energy -550)          !" << endl;
  cout << "  !      4. Playing Badminton (Energy -680)     !" << endl;
  cout << "  !      5. Cadio Dance (Energy -800)           !" << endl;
  cout << "  +                                             +" << endl;
  cout << "  =+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+=+" << endl;
  cout << endl;
  cout << "\033[0;0m";
}

void menuF()
{
  cout << endl;
  cout << endl;
  cout << "\033[0;93m";
  cout << "  !!!++++++++++++  Food Menu  ++++++++++++++!!!" << endl;
  cout << "  !                                           !" << endl;
  cout << "  !    1. Noodle (Energy +200)                !" << endl;
  cout << "  !    2. Chicken Roast (Energy +350)         !" << endl;
  cout << "  !    3. Fry Rice with Bacon (Energy +500)   !" << endl;
  cout << "  !    4. French Fries (Energy +750)          !" << endl;
  cout << "  !    5. Durian Sticky Rice (Energy +900)    !" << endl;
  cout << "  !                                           !" << endl;
  cout << "  =+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+" << endl;
  cout << endl;
  cout << "\033[0;0m";
}

int check_switch(char m,int selec)
{
  int energytrans=0;
  if(m=='F')
  {
    switch(selec)
    {
      case 1:
        energytrans=200;
        break;
      case 2:
        energytrans=350;
        break;
      case 3:
        energytrans=500;
        break;
      case 4:
        energytrans=750;
        break;
      case 5:
        energytrans=900;
        break;
    }   
  }
  else
  {
    switch(selec)
    {
      case 1:
        energytrans=(-1)*150;
        break;
      case 2:
        energytrans=(-1)*300;
        break;
      case 3:
        energytrans=(-1)*550;
        break;
      case 4:
        energytrans=(-1)*680;
        break;
      case 5:
        energytrans=(-1)*800;
        break;
    }
  }
  return energytrans;
}

void disEX(int E)
{
  cout << "\033[2J\033[0;0H";
  cout << "\033[0;91m";
  cout<<endl<<endl;
  cout<<"♪　  .∧__∧　　　　　　 .∧__∧　　♪    .∧__∧　　　　　 　  ∧__∧　 ♪　"<<endl;
  cout<<"　 (´・ω・`) )) 　(( (´・ω・`)　　　(´・ω・`) ))  　(( (　　　 )　 "<<endl;
  cout<<"(( (　つ　.ヽ　　♪  ./　⊂　) )) .(( (　つ　.ヽ　　♪　 ./　　　 ) )) "<<endl;
  cout<<"♪　 〉 とノ　) ))(( ( ヽつ .〈　♪　 .〉 とノ　) ) (( ( 　(　　〈　♪  "<<endl;
  cout<<"　（__ノ^(___)　　　 (＿)^ヽ__）　 （__ノ^(___)　　  .(＿)^ヽ__）　 "<<endl;
  cout<<endl;
  cout << "\033[0;93m";
  cout<<"                       LET'S EXERCISE                         "<<endl;
  cout<<"                      -ENERGY   ("<<E<<")-"<<endl;
  cout<<endl<<endl;
  cout << "\033[0;0m";
}

void disF(int E)
{
  cout << "\033[2J\033[0;0H";
  cout << "\033[0;91m";
  cout<<endl<<endl;
  cout<<"　            ∧__∧"<<endl;
  cout<<"　　         (´･ω･)"<<endl;
  cout<<"　　         /ヽ○==○　    ,.-、"<<endl;
  cout<<"　          /　　||　　旦 (,,■)"<<endl;
  cout<<"　　         し'￣(_))￣(_))￣(_))￣"<<endl;
  cout<<endl;
  cout<<endl;
  cout << "\033[0;93m";
  cout<<"                    LET'S EAT           "<<endl;
  cout<<"                 -ENERGY (+"<<E<<")-"<<endl;
  cout<<endl<<endl;
  cout << "\033[0;0m";
}
