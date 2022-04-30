#ifndef CONTADOR_H
#define CONTADOR_H

class Contador
{
    protected:
        int N ;
    public:
         Contador( ){N=0;}                    // Constructor
         Contador(int k ){N=k;}               // Constructor
         int GetCont() ;
         Contador operator++();
};
#endif