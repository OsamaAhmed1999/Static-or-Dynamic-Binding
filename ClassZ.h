#include <iostream>
#include "ClassA.h"
using namespace std;

class ClassZ : public ClassA
{
  public:
  ClassZ()
  {}
  void print()
  {
    cout << "ClassZ" << endl;
  }
};