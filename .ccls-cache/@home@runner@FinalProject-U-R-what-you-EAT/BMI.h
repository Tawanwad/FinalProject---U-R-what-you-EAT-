#include<iostream>
using namespace std;

void bmi_cal(float bmi);

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


