#include<iostream>
#include<cstdlib>
#include<cstring>
#include<unistd.h>
using namespace std;

#include "AVATA.h"
#include "person.h"
#include "LL.h"
#include "display.h"
#include "exceptions.h"

int main()
{
  LL A;
  int i;
  AVATA *t;

  int move;
  int EXmenu,Fmenu;
  
  string names;
  char genders;
  int ages;
  float heights;
  float weights;
  int E;
  
  //exception
  int a; 
  excep1 e1; //error เพราะรับผิด (ต้องรับตัวเลข)
  excep2 e2; //ชาย-หญิง
  excep3 e3; //ค่ามากเกิน
  excep4 e4; //ค่าน้อยเกิน
  excep5 e5; //ไม่มีเมนูที่เลือก

  int tranfE; //พลังงานที่เพิ่ม/ลด เมื่อออกกำลังกาย/กินอาหาร
  int Aselec; //เลือก avata
  int live; //check ว่าอยู่/ตาย
  int checkA; //check เลือกตัว

  cout << "\033[2J\033[0;0H";
  welcome();
  sleep(5);
  cout << "\033[2J\033[0;0H";

  /*-----------------------------------------------------------*/
  //รับข้อมูลตัวละครตัวแรก
  AVATA_display();
  cout << "\033[0;36m";
  cout<<"======== LET'S CREATE YOUR FIRST AVATAR ========"<<endl;
  cout << "\033[0;0m";
  cout<<"NAME : ";
  cin>>names;
  do
  {
    a=0;
    try{
      cout << "\033[0;37m";
      cout<<"GENDER 'Male(M)' OR 'Female(F)' [INPUT : M/F] : ";
      cin>>genders;
      if(cin.fail()) throw e2;
      else if(genders!='f'&&genders!='F'&&genders!='m'&&genders!='M') throw e2;
    }
    catch(exception &e){
      cout<<e.what();
      cout<<endl;
      a=1;
      cin.clear();
      cin.ignore(100,'\n');
    }
  }while(a);
  
  do
  {
    a=0;
    try
    {
      cout << "\033[0;37m";
      cout<<"AGE : ";
      cin>>ages;
      if(cin.fail()) throw e1;
      else if(ages<0) throw e4;
      else if(ages>100) throw e3;
    }
    catch(exception &e){
      cout<<e.what();
      cout<<endl;
      a=1;
      cin.clear();
      cin.ignore(100,'\n');
    }
  }while(a);
  
  do
  {
    a=0;
    try
    {
      cout << "\033[0;37m";
      cout<<"HEIGHT (CENTIMETERS) : ";
      cin>>heights;
      if(cin.fail()) throw e1;
      else if(heights<50) throw e4;
      else if(heights>220) throw e3;
    }
    catch(exception &e){
      cout<<e.what();
      cout<<endl;
      a=1;
      cin.clear();
      cin.ignore(100,'\n');
    }
  }while(a);
  
  do
  {
    a=0;
    try
    {
      cout << "\033[0;37m";
      cout<<"WEIGHT (KILOGRAM) : ";
      cin>>weights;
      if(cin.fail()) throw e1;
      else if(weights<10) throw e4;
      else if(weights>200) throw e3;
    }
    catch(exception &e){
      cout<<e.what();
      cout<<endl;
      a=1;
      cin.clear();
      cin.ignore(100,'\n');
    }
  }while(a);
  
  cout<<endl<<endl;
  cout << "\033[0;92m";
  if(genders=='m'||genders=='M')
  {
    E=66.5+(13.75*weights)+(5.003*heights)-(6.775*ages);
    t=new boy(names,genders,E,ages,heights,weights);
  }
  else
  {
    E=655.1+(9.563*weights)+(1.850*heights)-(4.676*ages);
    t=new girl(names,genders,E,ages,heights,weights);
  }
  A.add_node(t);
  sleep(5);
  /*-----------------------------------------------------------*/


  /*-----------------------------------------------------------*/
  //เข้าสู่ main menu (ดูโปรไฟล์/กิน/ออกกำลังกาย/สร้างตัวละคร/ออกเกม)
  while(1)
  {
    cout << "\033[0;0m";
    cout << "\033[2J\033[0;0H";
    menu_display();
    main_menu();
    do
    {
      a=0;
      try
      {
        cout << "\033[0;37m";
        cout << "--> Please select menu [1-4] : ";
        cin>>move;
        if(cin.fail()) throw e1;
        else if(move!=1&&move!=2&&move!=3&&move!=4) throw e5;
      }
      catch(exception &e){
        cout<<e.what();
        cout<<endl;
        a=1;
        cin.clear();
        cin.ignore(100,'\n');
      }
    }while(a);
    
    cout << "\033[2J\033[0;0H";
    switch(move)
    {

/*---------------------------------------*/
      
      case 1 : //profile+สร้างตัวละครใหม่
        A.show_all(); //แสดงข้อมูลตัวละครทั้งหมดที่มี
        cout << "\033[0;93m";
        cout<<endl<<"[1] CREATE NEW AVATAR"<<endl;
        cout<<"[2] BACK TO MAIN MENU"<<endl;
        cout << "\033[0;37m";
        do
        {
          a=0;
          try
          {
            cout << "\033[0;37m";
            cout << "--> Please select menu [1-2] : ";
            cin>>move;
            if(cin.fail()) throw e1;
            else if(move!=1&&move!=2) throw e5;
          }
          catch(exception &e){
            cout<<e.what();
            cout<<endl;
            a=1;
            cin.clear();
            cin.ignore(100,'\n');
          }
        }while(a);
  
        cout << "\033[0;0m";
        //สามารถเข้าไปสร้างตัวละครใหม่ได้
        
        if(move==1)
        {
          cout << "\033[2J\033[0;0H";
          AVATA_display();
          cout << "\033[0;36m";
          cout<<"======== LET'S CREATE YOUR AVATAR ========"<<endl;
          cout << "\033[0;0m";
          cout<<"NAME : ";
          cin>>names;
          do
          {
              a=0;
              try{
                cout << "\033[0;37m";
                cout<<"GENDER 'Male(M)' OR 'Female(F)' [INPUT : M/F] : ";
                cin>>genders;
                if(cin.fail()) throw e2;
                else if(genders!='f'&&genders!='F'&&genders!='m'&&genders!='M') throw e2;
              }
              catch(exception &e){
                cout<<e.what();
                cout<<endl;
                a=1;
                cin.clear();
                cin.ignore(100,'\n');
              }
            }while(a);

          do
          {
              a=0;
              try
              {
                cout << "\033[0;37m";
                cout<<"AGE : ";
                cin>>ages;
                if(cin.fail()) throw e1;
                else if(ages<0) throw e4;
                else if(ages>100) throw e3;
              }
              catch(exception &e){
                cout<<e.what();
                cout<<endl;
                a=1;
                cin.clear();
                cin.ignore(100,'\n');
              }
            }while(a);

          do
          {
              a=0;
              try
              {
                cout << "\033[0;37m";
                cout<<"HEIGHT (CENTIMETERS) : ";
                cin>>heights;
                if(cin.fail()) throw e1;
                else if(heights<50) throw e4;
                else if(heights>220) throw e3;
              }
              catch(exception &e){
                cout<<e.what();
                cout<<endl;
                a=1;
                cin.clear();
                cin.ignore(100,'\n');
              }
            }while(a);
  
          do
          {
              a=0;
              try
              {
                cout << "\033[0;37m";
                cout<<"WEIGHT (KILOGRAM) : ";
                cin>>weights;
                if(cin.fail()) throw e1;
                else if(weights<10) throw e4;
                else if(weights>200) throw e3;
              }
              catch(exception &e){
                cout<<e.what();
                cout<<endl;
                a=1;
                cin.clear();
                cin.ignore(100,'\n');
              }
            }while(a);
            
          cout << "\033[0;92m";
          cout<<endl<<endl;
          if(genders=='m'||genders=='M')
          {
            E=66.5+(13.75*weights)+(5.003*heights)-(6.775*ages);
            t=new boy(names,genders,E,ages,heights,weights);
          }
          else
          {
            E=655.1+(9.563*weights)+(1.850*heights)-(4.676*ages);
            t=new girl(names,genders,E,ages,heights,weights);
          }
          A.add_node(t);
          sleep(5);
        }
        
        if(move==2) break;
      
        break;
//เช็คว่าตัวละครตายหรือยัง
/*---------------------------------------*/
      
      case 2 : //feed
        A.show_all();
        
        do
        {
          a=0;
          try
          {
            cout << "\033[0;37m";
            cout<<endl<<">>> Please select your Avatar : ";
            cin>>Aselec;
            if(cin.fail()) throw e1;
          }
          catch(exception &e){
            cout<<e.what();
            cout<<endl;
            a=1;
            cin.clear();
            cin.ignore(100,'\n');
          }
        }while(a);
        
        checkA=A.check_choose(Aselec);
        if(checkA==0)
        {
          cout << "\033[0;31m";
          cout<<"Don't have Avatar you choose!!!"<<endl;
          sleep(3);
        }
        live=A.avatar_alive(Aselec);
        if(live==0) //ตัวละครตาย
        {
          sleep(3);
          break;
        }
        cout << "\033[2J\033[0;0H"; 
        AVATA_display();
        A.avata_info(Aselec);
        menuF();
        do
        {
          a=0;
          try
          {
            cout << "\033[0;37m";
            cout << "  >>> Please select the Menu [1-5] : ";
            cin>>move;
            if(cin.fail()) throw e1;
            else if(move!=1&&move!=2&&move!=3&&move!=4&&move!=5) throw e5;
          }
          catch(exception &e){
            cout<<e.what();
            cout<<endl;
            a=1;
            cin.clear();
            cin.ignore(100,'\n');
          }
        }while(a);
        
        tranfE=check_switch('F',move);
        A.select_avata(Aselec,tranfE);
        cout << "\033[2J\033[0;0H";
        disF(tranfE);
        A.avata_info(Aselec);
        sleep(5);
        break;

/*---------------------------------------*/
      
      case 3 : //exercise
        A.show_all();
        
        do
        {
          a=0;
          try
          {
            cout << "\033[0;37m";
            cout<<endl<<">>> Please select your Avatar : ";
            cin>>Aselec;
            if(cin.fail()) throw e1;
          }
          catch(exception &e){
            cout<<e.what();
            cout<<endl;
            a=1;
            cin.clear();
            cin.ignore(100,'\n');
          }
        }while(a);
        
        checkA=A.check_choose(Aselec);
        if(checkA==0)
        {
          cout<<"Don't have Avatar to choose!!!"<<endl;
          sleep(3);
        }
        live=A.avatar_alive(Aselec);
        if(live==0) //ตัวละครตาย
        {
          sleep(3);
          break;
        }
        cout << "\033[2J\033[0;0H";
        AVATA_display();
        A.avata_info(Aselec);
        menuEX();
        do
        {
          a=0;
          try
          {
            cout << "\033[0;37m";
            cout << "  >>> Please select the Menu [1-5] : ";
            cin>>move;
            if(cin.fail()) throw e1;
            else if(move!=1&&move!=2&&move!=3&&move!=4&&move!=5) throw e5;
          }
          catch(exception &e){
            cout<<e.what();
            cout<<endl;
            a=1;
            cin.clear();
            cin.ignore(100,'\n');
          }
        }while(a);
        
        tranfE=check_switch('E',move);
        A.select_avata(Aselec,tranfE);
        cout << "\033[2J\033[0;0H";
        disEX(tranfE);
        A.avata_info(Aselec);
        sleep(5);
        break;

/*---------------------------------------*/
      
      case 4 :
        cout << "\033[2J\033[0;0H";
        endprogram();
        sleep(5);
        cout << "\033[2J\033[0;0H";
        return 0;
    }
  }
  /*-----------------------------------------------------------*/
  
  return 0;
}
