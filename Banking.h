#ifndef BANKING_H
#define BANKING_H
#include <string>

using namespace std;

class bank
{
  
  string name[50];

  
  string add[50];
  string cont[50];
  string email[50];
  double depo[50];
  double amt[50]{0};

  int total = 0;
  int ch;
  int num1;

public:
  void open();
  void show();
  void deposite();
  void withdraw();
  
};
#endif