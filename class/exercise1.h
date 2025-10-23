#ifndef EXERCISE1_H
#define EXERCISE1_H

#include <TObject.h>

class Ex1class: public TObject{
    public:
        Ex1class();
        Ex1class(Int_t x);
        virtual ~Ex1class();

    private:
        Int_t ex1var;
    
    ClassDef(Ex1class, 1);
};

#endif