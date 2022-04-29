#include<iostream>
using namespace std;

void bmi_cal(float bmi);
void show_status(int Enow,int Emax);

void bmi_cal(float bmi){
  
    if(bmi<18.50){
        cout<<" (Underweight)"<<endl;
    }
    else if(bmi>=18.50 && bmi<=22.90){
        cout<<" (Normal)"<<endl;
    }
    else if(bmi>22.90 && bmi<=29.90){
        cout<<" (Overweight)"<<endl;
    }
    else {
        cout<<" (Obesity)"<<endl;
    }
}

void show_status(int Enow,int Emax){
  if(Enow==0&&Emax==0)
  {
    /*cout << "\033[0;31m";
    cout << ">>>> Your Avatar is DEAD. <<<<";
    cout << "\033[0;0m";
    cout<< endl; 
    cout << "\033[0;0m";*/
  }
  else if( Enow <= Emax*40/100 && Enow >= 0){
    cout << "\033[0;96m";
    cout << "   >>>> Your Avatar needs an energy boost. <<<<"<< endl; 
    cout << "\033[0;0m";
  }
  else if(Enow > Emax*40/100 && Enow <= Emax*69/100){
    cout << "\033[0;92m";
    cout << "   >>>>> Your Avatar have enough energy. <<<<<" << endl;
    cout << "\033[0;0m";
  }
  else if(Enow > Emax*69/100 && Enow <= Emax){
    cout << "\033[0;31m";
    cout << "  >>>> Your Avatar needs to burn energy. <<<<" << endl;
    cout << "\033[0;0m";
  } 
}
