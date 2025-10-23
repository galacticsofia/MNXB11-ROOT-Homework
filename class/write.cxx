#include "exercise1.h"
#include "TFile.h"
#include "TTree.h"
#include "TRandom.h"
#include <iostream>

void write(){

    Ex1class *object = nullptr;

    TFile *file = new TFile("momentum.root");
    TTree *tree = new TTree("tree", "TOjbect");

    tree->Branch("momentum_tree", "Ex1class", &object);

    Int_t datapoints = 500;
    for (Int_t i = 0; i < datapoints; i++){
        object = new Ex1class(i);
        float px = gRandom->Gaus(0, .02);
        float py = gRandom->Gaus(0, .02);
        float pz = gRandom->Gaus(0, .02);

        tree->Fill();
    }
    
    tree->Write();
    file->Close();
    delete object;
}