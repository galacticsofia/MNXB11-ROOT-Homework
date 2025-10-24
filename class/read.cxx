#include "exercise1.h"
#include "TH2F.h"
#include "TTree.h"
#include "TCanvas.h"

void read(){
    Ex1class *instmomentum = new Ex1class();

    TFile *file = new TFile("tree_file.root", "READ");
    TTree *tree = static_cast<TTree*>(file->Get("tree"));

    tree->SetBranchAddress("momentum_branch", &instmomentum);
    Long64_t N = tree->GetEntries();

    TH2F *h2 = new TH2F("h2", "px vs py; px; py", 100, -0.1, 0.1, 100, -0.1, 0.1);

    for (Long64_t i=0; i<N; i++){
        tree->GetEntry(i);
        h2->Fill(instmomentum->pxEntry(), instmomentum->pzEntry());
    }

    h2->Draw();


    TCanvas *plot = new TCanvas("plot", "scatter plot px*py vs pz", 600, 400);
    tree->Draw("momentum_branch.px*momentum_branch.py:momentum_branch.pz","momentum_branch.pmag > 0.02", "COLZ");

}