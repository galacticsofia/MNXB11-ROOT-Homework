#include "exercise1.h"
#include <iostream>

ClassImp(Ex1class);

Ex1class::Ex1class(): TObject(), ex1var(0){}

Ex1class::Ex1class(Int_t var): TObject(), ex1var(var){}

Ex1class::~Ex1class(){}