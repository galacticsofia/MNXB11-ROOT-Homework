#ifndef EXERCISE1_H
#define EXERCISE1_H

#include <TObject.h>
#include <cmath>

class Ex1class: public TObject{
    public:
        Ex1class();
        Ex1class(Double_t px, Double_t py, Double_t pz);
        virtual ~Ex1class();

        Double_t pxEntry() const {return px;}
        Double_t pyEntry() const {return py;}
        Double_t pzEntry() const {return pz;}
        Double_t pMag() const {return pmag;}

 
    private:
        Double_t px;
        Double_t py;
        Double_t pz;

        Double_t pmag;
    
    ClassDef(Ex1class, 1);
};

#endif