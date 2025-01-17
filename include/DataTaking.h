#ifndef ANALYSIS_DATA_TACKING_H
#define ANALYSIS_DATA_TACKING_H

#include "BmnSiliconDigit.h"
#include "TGraphErrors.h"
#include "TTree.h"
#include "TBranch.h"
#include "TClonesArray.h"
#include "TCanvas.h"
#include "TH1.h"

// 
// 
// 
class DataTakinkg {
public:
  DataTakinkg(TTree *fTreeDigits);

  virtual ~DataTakinkg();

private:
  Double_t conversion;
  Int_t nEntries;
  Int_t count_processed;

  TTree *fTreeDigits;
  TBranch *fBranchSiDigits;
  TClonesArray *fSiliconDigits;

  TH1D* h1Signal[3];

  virtual void merging();
};
#endif