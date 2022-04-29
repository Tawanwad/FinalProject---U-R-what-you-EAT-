#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
#include "AVATA.h"
#include "status.h"

class boy:public AVATA{
  private:  
    int age;
    float height;
    float weight;
    float bmi;
  public:
    boy(string a, char b,int c, int d, float h, float w):AVATA(a, b, c)
    {
      age=d;
      height=h;
      weight=w;
      bmi=(w/(h*h/10000));
      cout<<"Consruct Male Avata ..."<<endl;
      cout<<"AGE : "<<age<<endl;
      cout<<"HEIGHT (CENTIMETERS) : "<<fixed<<setprecision(1)<<height<<endl;
      cout<<"WEIGHT (KILOGRAM) : "<<fixed<<setprecision(1)<<weight<<endl;
      cout<<"BMI : "<<fixed<<setprecision(2)<<bmi;
      bmi_cal(bmi);
      show_energy();
      show_status(energyNOW,energyMAX);
    }
    ~boy()
    {
      cout << "\033[0;31m";
      cout<<"Destruct Male Avata ..."<<endl;
      cout<<"AGE : "<<age<<endl;
      cout<<"HEIGHT (CENTIMETERS) : "<<fixed<<setprecision(1)<<height<<endl;
      cout<<"WEIGHT (KILOGRAM) : "<<fixed<<setprecision(1)<<weight<<endl;
      cout<<"BMI : "<<fixed<<setprecision(2)<<bmi;
      bmi_cal(bmi);
      show_energy();
    }
    void show_node(){
      AVATA::show_node();
      cout<<"     => AGE : "<<age<<"                        "<<endl;
      cout<<"     => HEIGHT (CENTIMETERS) : "<<fixed<<setprecision(1)<<height<<"    "<<endl;
      cout<<"     => WEIGHT (KILOGRAM) : "<<fixed<<setprecision(1)<<weight<<"       "<<endl;
      cout<<"     => BMI : "<<fixed<<setprecision(2)<<bmi<<"";
      bmi_cal(bmi);
      cout<<"     => ";
      show_energy();
      show_status(energyNOW,energyMAX);
    }
};

class girl:public AVATA{
  private:
    int age;
    float height;
    float weight;
    float bmi;
  public:
    girl(string a, char b,int c, int d, float h, float w):AVATA(a, b, c)
    {
      age=d;
      height=h;
      weight=w;
      bmi=(w/(h*h/10000));
      cout<<"Construct Female Avata ..."<<endl;
      cout<<"AGE : "<<age<<endl;
      cout<<"HEIGHT (CENTIMETERS) : "<<fixed<<setprecision(1)<<height<<endl;
      cout<<"WEIGHT (KILOGRAM) : "<<fixed<<setprecision(1)<<weight<<endl;
      cout<<"BMI : "<<fixed<<setprecision(2)<<bmi;
      bmi_cal(bmi);
      show_energy();
      show_status(energyNOW,energyMAX);
    }
    ~girl()
    {
      cout << "\033[0;31m";
      cout<<"Destruct Female Avata ..."<<endl;
      cout<<"AGE : "<<age<<endl;
      cout<<"HEIGHT (CENTIMETERS) : "<<fixed<<setprecision(1)<<height<<endl;
      cout<<"WEIGHT (KILOGRAM) : "<<fixed<<setprecision(1)<<weight<<endl;
      cout<<"BMI : "<<fixed<<setprecision(2)<<bmi;
      bmi_cal(bmi);
      show_energy();
    }
    void show_node(){
      AVATA::show_node();
      cout<<"     => AGE : "<<age<<"                        "<<endl;
      cout<<"     => HEIGHT (CENTIMETERS) : "<<fixed<<setprecision(1)<<height<<"    "<<endl;
      cout<<"     => WEIGHT (KILOGRAM) : "<<fixed<<setprecision(1)<<weight<<"       "<<endl;
      cout<<"     => BMI : "<<fixed<<setprecision(2)<<bmi<<"";
      bmi_cal(bmi);
      cout<<"     => ";
      show_energy();
      show_status(energyNOW,energyMAX);
    }
};