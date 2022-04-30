#ifndef CONTADOR_DESCENDENTE_H
#define CONTADOR_DESCENDENTE_H
#include <contador.h>

class ContadorDescendente : public Contador
  {   public:
         ContadorDescendente( )  :  Contador() {}         // Constructor
         ContadorDescendente(int k )  :  Contador(k) {}
         Contador operator --();
  } ;
#endif
