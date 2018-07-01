#include <iostream>
#include "ClassZ.h"
using namespace std;

int main()
{
  ClassZ* Zpointer = new ClassZ;
  ClassA* Apointer = new ClassA;
  ClassA Avariable;
  
  Zpointer->print();
  Apointer->print();

  Apointer = Zpointer;
  Avariable = *Zpointer;

  Apointer->print();
  Avariable.print();

  system("pause");
}