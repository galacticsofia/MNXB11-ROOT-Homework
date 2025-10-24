#include "exercise1.h"
#include "TFile.h"
#include "TTree.h"
#include "TRandom.h"
#include <iostream>
#include <cmath>


void write(){

    Ex1class *instmomentum = nullptr;

    TFile *file = new TFile("tree_file.root", "RECREATE");
    TTree *tree = new TTree("tree", "exercise tree");

    tree->Branch("momentum_branch", "Ex1class", &instmomentum);

    Int_t instances = 500;
    for (Int_t i = 0; i < instances; i++){
        
        Double_t px = gRandom->Gaus(0, .02);
        Double_t py = gRandom->Gaus(0, .02);
        Double_t pz = gRandom->Gaus(0, .02);

        instmomentum = new Ex1class(px, py, pz);
        tree->Fill();
    }
    tree->Write();
    file->Close();
}