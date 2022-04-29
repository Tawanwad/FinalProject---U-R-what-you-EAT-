#include <iostream>
using namespace std;

class excep1: public exception
{
  virtual const char* what() const throw()
  {
    cout << "\033[0;31m";
    return "Please Enter Number";    
    cout << "\033[0;0m";
  }
};
class excep2: public exception
{
  virtual const char* what() const throw()
  {
    cout << "\033[0;31m";
    return "Please Enter 'F' or 'M'";  
    cout << "\033[0;0m";
  }
};
class excep3: public exception
{
  virtual const char* what() const throw()
  {
    cout << "\033[0;31m";
    return "Overvalue";
    cout << "\033[0;0m";
  }
};
class excep4: public exception
{
  virtual const char* what() const throw()
  {
    cout << "\033[0;31m";
    return "Undervalue"; 
    cout << "\033[0;0m";
  }
};
class excep5: public exception
{
  virtual const char* what() const throw()
  {
    cout << "\033[0;31m";
    return "Not In Order"; 
    cout << "\033[0;0m";
  }
};