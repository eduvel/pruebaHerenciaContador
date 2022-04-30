#include <contador.h>
int Contador::GetCont()     
    { return (N) ;}
Contador Contador::operator++()      // Prefix Operator         
    {  return Contador( ++N) ;   }