#include "exercise1.h"
#include <iostream>
#include <cmath>


ClassImp(Ex1class);

Ex1class::Ex1class(): px{0}, py{0}, pz{0}, pmag{0} {}

Ex1class::Ex1class(Double_t px, Double_t py, Double_t pz): 
    px{px},
    py{py},
    pz{pz} {pmag = std::sqrt(px*px + py*py + pz*pz);}

Ex1class::~Ex1class(){}