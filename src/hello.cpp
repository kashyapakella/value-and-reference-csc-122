#include <string>

void functionReference(int &a)
{
   ++a;
}

int functionValue(int a)
{

   return ++a;
}
