// Original Author:  Loic Quertenmont
// Modification by Tamas Almos Vami

#ifndef SUSYBSMAnalysis_Analyzer_Tuple_h
#define SUSYBSMAnalysis_Analyzer_Tuple_h

#include "SUSYBSMAnalysis/Analyzer/interface/Regions.h"


struct Tuple {
  //=============================================================
  //      Declare Trees & Branches
  //=============================================================

  TTree* Tree;
  unsigned int NCuts;
  unsigned int Tree_Trig;
  unsigned int Tree_Run;
  unsigned long Tree_Event;
  unsigned int Tree_Lumi;
  unsigned int Tree_PileUp;
  unsigned int Tree_nofVertices;
  unsigned int Tree_Hscp;
  unsigned int Tree_nmuons;
  unsigned int Tree_njets;
  float Tree_Weight;
  float Tree_GeneratorWeight;
  float Tree_GeneratorBinningValues;
  bool Tree_HLT_Mu50;
  bool Tree_HLT_PFMET120_PFMHT120_IDTight;
  bool Tree_HLT_PFHT500_PFMET100_PFMHT100_IDTight;
  bool Tree_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60;
  bool Tree_HLT_MET105_IsoTrk50;
  float Tree_CaloMET;
  float Tree_RecoPFMET;
  float Tree_RecoPFMHT;
  float Tree_HLTPFMET;
  float Tree_HLTPFMHT;
  float Tree_RecoPFMET_eta;
  float Tree_RecoPFMET_phi;
  float Tree_RecoPFMET_significance;
  float Tree_Muon1_Pt;
  float Tree_Muon1_eta;
  float Tree_Muon1_phi;
  float Tree_Muon2_Pt;
  float Tree_Muon2_eta;
  float Tree_Muon2_phi;

  std::vector<float> Tree_jet_pt;
  std::vector<float> Tree_jet_eta;
  std::vector<float> Tree_jet_phi;
  std::vector<float> Tree_jet_mass;
  std::vector<float> Tree_jet_energy;
  std::vector<float> Tree_jet_pdgId;
  std::vector<float> Tree_jet_et;
  std::vector<float> Tree_jet_chargedEmEnergyFraction;
  std::vector<float> Tree_jet_neutralEmEnergyFraction;

  std::vector<float> Tree_vect_mT;
  std::vector<bool> Tree_passCutPt55;
  std::vector<bool> Tree_passPreselection_noIsolation_noIh;
  std::vector<bool> Tree_passPreselection;
  std::vector<bool> Tree_passSelection;
  std::vector<float> Tree_Charge;
  std::vector<float> Tree_Pt;
  std::vector<float> Tree_PtErr;
  std::vector<float> Tree_Ias;
  std::vector<float> Tree_Ias_noTIBnoTIDno3TEC;
  std::vector<float> Tree_Ias_PixelOnly;
  std::vector<float> Tree_Ias_StripOnly;
  std::vector<float> Tree_Ias_PixelOnly_noL1;
  std::vector<float> Tree_Ih;
  std::vector<float> Tree_Ick;  //return (Ih-C)/K
  std::vector<float> Tree_Fmip;
  std::vector<float> Tree_ProbXY;
  std::vector<float> Tree_ProbXY_noL1;
  std::vector<float> Tree_ProbQ;
  std::vector<float> Tree_ProbQ_noL1;
  std::vector<float> Tree_ProbQ_dEdx;
  std::vector<float> Tree_Ndof;
  std::vector<float> Tree_Chi2;
  std::vector<int>   Tree_QualityMask;
  std::vector<bool>  Tree_isHighPurity;
  std::vector<float> Tree_EoverP;
  std::vector<float> Tree_muon_eta;
  std::vector<bool> Tree_isMuon;
  std::vector<int>  Tree_Muon_selector;
  std::vector<bool> Tree_isElectron;
  std::vector<bool> Tree_isChHadron;
  std::vector<bool> Tree_isNeutHadron;
  std::vector<float> Tree_ECAL_energy;
  std::vector<float> Tree_HCAL_energy;
  std::vector<float> Tree_TOF;
  std::vector<float> Tree_TOFErr;
  std::vector<unsigned int> Tree_TOF_ndof;
  std::vector<float> Tree_DTTOF;
  std::vector<float> Tree_DTTOFErr;
  std::vector<unsigned int> Tree_DTTOF_ndof;
  std::vector<float> Tree_CSCTOF;
  std::vector<float> Tree_CSCTOFErr;
  std::vector<unsigned int> Tree_CSCTOF_ndof;
  std::vector<float> Tree_Mass;
  std::vector<float> Tree_MassErr;
  std::vector<float> Tree_dZ;
  std::vector<float> Tree_dXY;
  std::vector<float> Tree_dR;
  std::vector<float> Tree_eta;
  std::vector<float> Tree_phi;
  std::vector<unsigned int> Tree_NOH;   //number of (valid) track pixel+strip hits
  std::vector<unsigned int> Tree_NOPH;  //number of (valid) track pixel hits
  std::vector<float> Tree_FOVH;         //fraction of valid track hits
  std::vector<unsigned int>
      Tree_NOMH;                  //number of missing hits from IP till last hit (excluding hits behind the last hit)
  std::vector<float> Tree_FOVHD;  //fraction of valid hits divided by total expected hits until the last one
  std::vector<unsigned int>
      Tree_NOM;  //number of dEdx hits (= #strip+#pixel-#ClusterCleaned hits, but this depend on estimator used)
  std::vector<float> Tree_iso_TK;
  std::vector<float> Tree_iso_ECAL;
  std::vector<float> Tree_iso_HCAL;
  
  std::vector<float> Tree_PFMiniIso_relative;
  std::vector<float> Tree_PFMiniIso_wMuon_relative;

  std::vector<float> Tree_track_PFIsolationR005_sumChargedHadronPt;
  std::vector<float> Tree_track_PFIsolationR005_sumNeutralHadronPt;
  std::vector<float> Tree_track_PFIsolationR005_sumPhotonPt;
  std::vector<float> Tree_track_PFIsolationR005_sumPUPt;

  std::vector<float> Tree_track_PFIsolationR01_sumChargedHadronPt;
  std::vector<float> Tree_track_PFIsolationR01_sumNeutralHadronPt;
  std::vector<float> Tree_track_PFIsolationR01_sumPhotonPt;
  std::vector<float> Tree_track_PFIsolationR01_sumPUPt;
 
  std::vector<float> Tree_track_PFIsolationR03_sumChargedHadronPt;
  std::vector<float> Tree_track_PFIsolationR03_sumNeutralHadronPt;
  std::vector<float> Tree_track_PFIsolationR03_sumPhotonPt;
  std::vector<float> Tree_track_PFIsolationR03_sumPUPt;

  std::vector<float> Tree_track_PFIsolationR05_sumChargedHadronPt;
  std::vector<float> Tree_track_PFIsolationR05_sumNeutralHadronPt;
  std::vector<float> Tree_track_PFIsolationR05_sumPhotonPt;
  std::vector<float> Tree_track_PFIsolationR05_sumPUPt;

  std::vector<float> Tree_muon_PFIsolationR03_sumChargedHadronPt;
  std::vector<float> Tree_muon_PFIsolationR03_sumNeutralHadronPt;
  std::vector<float> Tree_muon_PFIsolationR03_sumPhotonPt;
  std::vector<float> Tree_muon_PFIsolationR03_sumPUPt;

  std::vector<float> Tree_Ih_noL1;
  std::vector<float> Tree_Ih_15drop;
  std::vector<float> Tree_Ih_StripOnly;
  std::vector<float> Tree_Ih_StripOnly_15drop;
  std::vector<float> Tree_Ih_PixelOnly_noL1;
  std::vector<float> Tree_Ih_SaturationCorrectionFromFits;
  std::vector<std::vector<float>> Tree_clust_charge;  //dedx charge -> either strip or pixel
  std::vector<std::vector<float>> Tree_clust_pathlength;
  std::vector<std::vector<unsigned int>> Tree_clust_nstrip;
  std::vector<std::vector<bool>> Tree_clust_sat254;
  std::vector<std::vector<bool>> Tree_clust_sat255;
  std::vector<std::vector<uint32_t>> Tree_clust_detid;
  std::vector<std::vector<bool>> Tree_clust_isStrip;  //is it a SiStrip cluster?
  std::vector<std::vector<bool>> Tree_clust_isPixel;  //is it a Pixel hit?
  std::vector<float> Tree_GenId;
  std::vector<float> Tree_GenCharge;
  std::vector<float> Tree_GenMass;
  std::vector<float> Tree_GenPt;
  std::vector<float> Tree_GenEta;
  std::vector<float> Tree_GenPhi;

  TTree* GenTree;
  unsigned int GenTree_Run;
  unsigned int GenTree_Event;
  unsigned int GenTree_Lumi;
  unsigned int GenTree_Hscp;
  float GenTree_Weight;
  float GenTree_GeneratorWeight;
  float GenTree_GeneratorBinningValues;
  std::vector<float> GenTree_GenId;
  std::vector<float> GenTree_GenCharge;
  std::vector<float> GenTree_GenMass;
  std::vector<float> GenTree_GenPt;
  std::vector<float> GenTree_GenEta;
  std::vector<float> GenTree_GenPhi;


  //=============================================================
  //      Declare Histograms
  //=============================================================

  TH2F* Mass;
  TH2F* MassTOF;
  TH2F* MassComb;
  TH2F* MaxEventMass;

  TH2F* Mass_SystP;
  TH2F* MassTOF_SystP;
  TH2F* MassComb_SystP;
  TH2F* MaxEventMass_SystP;

  TH2F* Mass_SystI;
  TH2F* MassTOF_SystI;
  TH2F* MassComb_SystI;
  TH2F* MaxEventMass_SystI;

  TH2F* Mass_SystM;
  TH2F* MassTOF_SystM;
  TH2F* MassComb_SystM;
  TH2F* MaxEventMass_SystM;

  TH2F* Mass_SystT;
  TH2F* MassTOF_SystT;
  TH2F* MassComb_SystT;
  TH2F* MaxEventMass_SystT;

  TH2F* Mass_SystPU;
  TH2F* MassTOF_SystPU;
  TH2F* MassComb_SystPU;
  TH2F* MaxEventMass_SystPU;

  TH2F* Mass_SystHUp;
  TH2F* MassTOF_SystH;
  TH2F* MassComb_SystHUp;
  TH2F* MaxEventMass_SystHUp;

  TH2F* Mass_SystHDown;
  TH2F* MassComb_SystHDown;
  TH2F* MaxEventMass_SystHDown;

  TH2F* Mass_Flip;
  TH2F* MassTOF_Flip;
  TH2F* MassComb_Flip;

  TProfile* IntLumi;
  TProfile* XSection;
  TH1F* NumEvents;
  TH1F* ErrorHisto;
  TH1F* BefPreS_TriggerType;
  TH1F* HSCPCandidateType;
  TH1F* N1_Eta;
  TH1F* N1_Chi2oNdof;
  TH1F* N1_Qual;
  TH1F* N1_TNOPH;
  TH1F* N1_TNOHFraction;
  TH1F* N1_TNOM;
  TH1F* nDof;
  TH1F* tofError;
  TH1F* N1_Pt;
  TH1F* N1_Ih;
  TH1F* MTOF;
  TH1F* TIsol;
  TH1F* N1_EoP;
  TH1F* N1_SumpTOverpT;
  TH1F* N1_dRMinPfJet;
  TH1F* Pt;
  TH1F* N1_PtErrOverPt;
  TH1F* I;
  TH1F* TOF;
  TH1F* NVTrack;
  TH1F* N1_Stations;
  TH1F* N1_Dxy;
  TH1F* N1_Dz;
  TH1F* N1_SegSep;
  TH1F* FailDz;
  TH1F* N1_ProbQ;
  TH2F* N1_ProbQVsIas;
  TH1F* ProbQNoL1;
  TH1F* N1_ProbXY;
  TH1F* N1_pfType;
  TH1F* N1_MiniRelIsoAll;
  TH1F* ProbXYNoL1;

  TH1F* BefPreS_pfType;

  TH1F* HSCPE;
  TH1F* HSCPE_SystP;
  TH1F* HSCPE_SystI;
  TH1F* HSCPE_SystM;
  TH1F* HSCPE_SystT;
  TH1F* HSCPE_SystPU;
  TH1F* HSCPE_SystHUp;
  TH1F* HSCPE_SystHDown;

  TH1F* Gen_DecayLength;
  TH1F* Beta_Gen;
  TH1F* Beta_GenCharged;
  TH1F* Beta_Triggered;
  
  TH1F* Beta_Matched;
  TH1F* Beta_PreselectedA;
  TH1F* Beta_PreselectedB;
  TH1F* Beta_PreselectedC;
  TH2F* Beta_SelectedP;
  TH2F* Beta_SelectedI;
  TH2F* Beta_SelectedT;

  TH1F* BefPreS_massT;
  TH1F* BefPreS_MiniRelIsoAll;
  TH1F* BefPreS_MiniRelIsoChg;
  TH1F* BefPreS_RecoPFMET;
  TH1F* BefPreS_RecoPFHT;
  TH1F* BefPreS_CaloNumJets;

  TH1F* BefPreS_Chi2oNdof;
  TH1F* BefPreS_Qual;
  TH1F* BefPreS_TNOH_PUA;
  TH1F* BefPreS_TNOH_PUB;
  TH1F* BefPreS_TNOHFraction;
  TH1F* BefPreS_TNOPH;
  TH1F* BefPreS_TNOHFractionTillLast;
  TH1F* BefPreS_TNOMHTillLast;
  TH1F* BefPreS_Eta;
  TH1F* BefPreS_TNOM;
  TH1F* BefPreS_TNOM_PUA;
  TH1F* BefPreS_TNOM_PUB;
  TH1F* BefPreS_NOMoNOH;
  TProfile* BefPreS_NOMoNOHvsPV;
  TH1F* BefPreS_nDof;
  TH1F* BefPreS_TOFError;
  TH1F* BefPreS_PtErrOverPt;
  TH1F* BefPreS_PtErrOverPt2;
  TH1F* BefPreS_Pt;
  TH1F* BefPreS_Pt_PUA;
  TH1F* BefPreS_Pt_PUB;
  TH1F* BefPreS_Ias;
  TH1F* BefPreS_Ias_PUA;
  TH1F* BefPreS_Ias_PUB;
  TH1F* BefPreS_Ih;
  TH1F* BefPreS_Ih_PUA;
  TH1F* BefPreS_Ih_PUB;
  TH1F* BefPreS_MTOF;
  TH1F* BefPreS_TIsol;
  TH1F* BefPreS_EoP;
  TH1F* BefPreS_SumpTOverpT;
  TH1F* BefPreS_dR_NVTrack;
  TH1F* BefPreS_MatchedStations;
  TH1F* BefPreS_NVertex;
  TH1F* BefPreS_NVertex_NoEventWeight;
  TH1F* BefPreS_PV;
  TH1F* BefPreS_PV_NoEventWeight;
  TH1F* BefPreS_dzAll;
  TH1F* BefPreS_dxyAll;
  TH1F* BefPreS_dzMinv3d;
  TH1F* BefPreS_dxyMinv3d;
  TH1F* BefPreS_SegSep;
  TH1F* BefPreS_SegMinPhiSep;
  TH1F* BefPreS_SegMinEtaSep;
  TH1F* BefPreS_SegMinEtaSep_FailDz;
  TH1F* BefPreS_SegMinEtaSep_PassDz;
  TH1F* BefPreS_Dz_FailSep;
  TH1F* BefPreS_InnerInvPtDiff;
  TH1F* BefPreS_Phi;
  TH1F* BefPreS_TimeAtIP;
  TH1F* BefPreS_OpenAngle;
  TH1F* BefPreS_OpenAngle_Cosmic;

  TH1F* BefPreS_Pt_FailDz;
  TH1F* BefPreS_Pt_FailDz_DT;
  TH1F* BefPreS_Pt_FailDz_CSC;
  TH1F* BefPreS_TOF_FailDz;
  TH1F* BefPreS_TOF_FailDz_DT;
  TH1F* BefPreS_TOF_FailDz_CSC;
  TH1F* BefPreS_Dxy;
  TH1F* BefPreS_Dxy_Cosmic;
  TH1F* BefPreS_Dz;
  TH1F* BefPreS_Dz_Cosmic;
  TH1F* BefPreS_Dz_CSC;
  TH1F* BefPreS_Dz_DT;
  std::map<std::string, TH1F*> BefPreS_Pt_Binned;   //TH1F*  BefPreS_Pt_Binned[MaxPredBins];
  std::map<std::string, TH1F*> BefPreS_TOF_Binned;  //TH1F*  BefPreS_TOF_Binned[MaxPredBins];

  TH1F* BefPreS_LastHitDXY;
  TH1F* BefPreS_LastHitD3D;
  TH2F* BefPreS_PtErrOverPtVsPtErrOverPt2;
  TH2F* BefPreS_PtErrOverPtVsPt;
  
  TH1F* BefPreS_ProbQ;
  TH1F* BefPreS_ProbXY;
  TH1F* BefPreS_ProbQNoL1;
  TH1F* BefPreS_ProbXYNoL1;
  TH1F* BefPreS_MassErr;
  TH2F* BefPreS_ProbQVsIas;

  TH2F* BefPreS_CluProbQVsPixelLayer;
  TH2F* BefPreS_CluProbXYVsPixelLayer;
  TH2F* BefPreS_CluNormChargeVsPixelLayer;
  TH2F* BefPreS_CluNormChargeVsPixelLayer_lowBetaGamma;
  TH2F* BefPreS_CluSizeVsPixelLayer;
  TH2F* BefPreS_CluSizeXVsPixelLayer;
  TH2F* BefPreS_CluSizeYVsPixelLayer;
  TH2F* BefPreS_CluSpecInCPEVsPixelLayer;

  TH2F* BefPreS_CluCotBetaVsPixelLayer_lowProbXY;
  TH2F* BefPreS_CluCotAlphaVsPixelLayer_lowProbXY;
  TH2F* BefPreS_CluCotBetaVsPixelLayer;
  TH2F* BefPreS_CluCotAlphaVsPixelLayer;

  TH2F* BefPreS_CluNormChargeVsStripLayer_lowBetaGamma;

  TH1F* BefPreS_dRMinPfJet;
  TH2F* BefPreS_dRMinPfJetVsIas;
  TH1F* BefPreS_dRMinCaloJet;
  TH2F* BefPreS_dRMinCaloJetVsIas;
  TH2F* BefPreS_dRVsPtPfJet;
  TH2F* BefPreS_dRVsdPtPfCaloJet;

  // Post preselection plots
  TH1F* PostPreS_TriggerType;
  TH1F* PostPreS_pfType;
  TH2F* PostPreS_pfTypeVsIas;
  TH1F* PostPreS_massT;
  TH2F* PostPreS_massTVsIas;
  TH1F* PostPreS_MiniRelIsoAll;
  TH2F* PostPreS_MiniRelIsoAllVsIas;
  TH1F* PostPreS_MiniRelIsoChg;
  TH1F* PostPreS_RecoPFMET;
  TH1F* PostPreS_RecoPFHT;
  TH1F* PostPreS_CaloNumJets;
  
  TH1F* PostPreS_Chi2oNdof;
  TH2F* PostPreS_Chi2oNdofVsIas;
  TH1F* PostPreS_Qual;
  TH1F* PostPreS_TNOH_PUA;
  TH1F* PostPreS_TNOH_PUB;
  TH1F* PostPreS_TNOHFraction;
  TH2F* PostPreS_TNOHFractionVsIas;
  TH1F* PostPreS_TNOPH;
  TH2F* PostPreS_TNOPHVsIas;
  TH1F* PostPreS_TNOHFractionTillLast;
  TH1F* PostPreS_TNOMHTillLast;
  TH1F* PostPreS_Eta;
  TH2F* PostPreS_EtaVsIas;
  TH1F* PostPreS_TNOM;
  TH2F* PostPreS_TNOMVsIas;
  TH1F* PostPreS_TNOM_PUA;
  TH1F* PostPreS_TNOM_PUB;
  TH1F* PostPreS_NOMoNOH;
  TProfile* PostPreS_NOMoNOHvsPV;
  TH1F* PostPreS_nDof;
  TH1F* PostPreS_TOFError;
  TH1F* PostPreS_PtErrOverPt;
  TH2F* PostPreS_PtErrOverPtVsIas;
  TH1F* PostPreS_PtErrOverPt2;
  TH1F* PostPreS_Pt;
  TH2F* PostPreS_PtVsIas;
  TH1F* PostPreS_P;
  TH1F* PostPreS_Ias;
  TH1F* PostPreS_Ias_NoEventWeight;
  TH1F* PostPreS_Ih;
  TH2F* PostPreS_IhVsIas;
  TH1F* PostPreS_Ih_NoEventWeight;
  TH1F* PostPreS_MTOF;
  TH1F* PostPreS_TIsol;
  TH2F* PostPreS_TIsolVsIas;
  TH1F* PostPreS_EoP;
  TH2F* PostPreS_EoPVsIas;
  TH1F* PostPreS_SumpTOverpT;
  TH2F* PostPreS_SumpTOverpTVsIas;
  TH1F* PostPreS_dR_NVTrack;
  TH1F* PostPreS_MatchedStations;
  TH1F* PostPreS_NVertex;
  TH1F* PostPreS_NVertex_NoEventWeight;
  TH1F* PostPreS_PV;
  TH1F* PostPreS_PV_NoEventWeight;
  TH1F* PostPreS_dzAll;
  TH1F* PostPreS_dxyAll;
  TH1F* PostPreS_Dz;
  TH1F* PostPreS_Dxy;
  TH1F* PostPreS_SegSep;
  TH1F* PostPreS_SegMinPhiSep;
  TH1F* PostPreS_SegMinEtaSep;
  TH1F* PostPreS_SegMinEtaSep_FailDz;
  TH1F* PostPreS_SegMinEtaSep_PassDz;
  TH1F* PostPreS_Dz_FailSep;
  TH1F* PostPreS_InnerInvPtDiff;
  TH1F* PostPreS_Phi;
  TH1F* PostPreS_TimeAtIP;
  TH1F* PostPreS_OpenAngle;
  TH1F* PostPreS_OpenAngle_Cosmic;
  
  TH1F* PostPreS_Pt_FailDz;
  TH1F* PostPreS_Pt_FailDz_DT;
  TH1F* PostPreS_Pt_FailDz_CSC;
  TH1F* PostPreS_TOF_FailDz;
  TH1F* PostPreS_TOF_FailDz_DT;
  TH1F* PostPreS_TOF_FailDz_CSC;
  TH1F* PostPreS_Dxy_Cosmic;
  TH1F* PostPreS_Dz_Cosmic;
  TH1F* PostPreS_Dz_CSC;
  TH1F* PostPreS_Dz_DT;
  
  TH1F* PostPreS_LastHitDXY;
  TH2F* PostPreS_LastHitDXYVsEta;
  TH1F* PostPreS_LastHitD3D;
  TH2F* PostPreS_LastHitD3DVsEta;
  TH2F* PostPreS_PtErrOverPtVsPtErrOverPt2;
  TH2F* PostPreS_PtErrOverPtVsPt;
  
  TH1F* PostPreS_ProbQ;
  TH2F* PostPreS_ProbQVsIas;
  TH1F* PostPreS_ProbXY;
  TH1F* PostPreS_ProbXY_highIas;
  TH2F* PostPreS_ProbXYVsIas;
  TH2F* PostPreS_ProbXYVsIas_highIas;
  TH2F* PostPreS_ProbXYVsProbQ;
  TH2F* PostPreS_ProbXYVsProbQ_highIas;
  TH1F* PostPreS_ProbQNoL1;
  TH2F* PostPreS_ProbQNoL1VsIas;
  TH1F* PostPreS_ProbXYNoL1;
  TH1F* PostPreS_ProbXYNoL1_highIas;
  TH2F* PostPreS_ProbXYNoL1VsIas;
  TH2F* PostPreS_ProbXYNoL1VsIas_highIas;
  TH2F* PostPreS_ProbXYNoL1VsProbQNoL1;
  TH2F* PostPreS_ProbXYNoL1VsProbQNoL1_highIas;
  TH1F* PostPreS_MassErr;
  TH2F* PostPreS_MassErrVsIas;

  TH2F* PostPreS_EtaVsGenID;
  TH2F* PostPreS_ProbQVsGenID;
  TH2F* PostPreS_ProbQVsGenEnviromentID;
  TH2F* PostPreS_ProbXYVsGenID;
  TH2F* PostPreS_PtVsGenID;
  TH2F* PostPreS_EoPVsGenID;
  TH2F* PostPreS_IhVsGenID;
  TH2F* PostPreS_IasVsGenID;
  TH2F* PostPreS_IasVsGenEnviromentID;
  TH2F* PostPreS_massTVsGenID;
  TH2F* PostPreS_miniIsoChgVsGenID;
  TH2F* PostPreS_miniIsoAllVsGenID;
  TH2F* PostPreS_MassVsGenID;

  TH2F* PostPreS_EtaVsMomGenID;
  TH2F* PostPreS_ProbQVsMomGenID;
  TH2F* PostPreS_ProbXYVsMomGenID;
  TH2F* PostPreS_PtVsMomGenID;
  TH2F* PostPreS_EoPVsMomGenID;
  TH2F* PostPreS_IhVsMomGenID;
  TH2F* PostPreS_IasVsMomGenID;
  TH2F* PostPreS_massTVsMomGenID;
  TH2F* PostPreS_miniIsoChgVsMomGenID;
  TH2F* PostPreS_miniIsoAllVsMomGenID;
  TH2F* PostPreS_MassVsMomGenID;

  TH2F* PostPreS_EtaVsSiblingGenID;
  TH2F* PostPreS_ProbQVsSiblingGenID;
  TH2F* PostPreS_ProbXYVsSiblingGenID;
  TH2F* PostPreS_PtVsSiblingGenID;
  TH2F* PostPreS_EoPVsSiblingGenID;
  TH2F* PostPreS_IhVsSiblingGenID;
  TH2F* PostPreS_IasVsSiblingGenID;
  TH2F* PostPreS_massTVsSiblingGenID;
  TH2F* PostPreS_MassVsSiblingGenID;

  TH2F* PostPreS_EtaVsGenAngle;
  TH2F* PostPreS_ProbQVsGenAngle;
  TH2F* PostPreS_ProbXYVsGenAngle;
  TH2F* PostPreS_PtVsGenAngle;
  TH2F* PostPreS_EoPVsGenAngle;
  TH2F* PostPreS_IhVsGenAngle;
  TH2F* PostPreS_IasVsGenAngle;
  TH2F* PostPreS_massTVsGenAngle;
  TH2F* PostPreS_miniIsoChgVsGenAngle;
  TH2F* PostPreS_miniIsoAllVsGenAngle;
  TH2F* PostPreS_MassVsGenAngle;

  TH2F* PostPreS_EtaVsGenMomAngle;
  TH2F* PostPreS_ProbQVsGenMomAngle;
  TH2F* PostPreS_ProbXYVsGenMomAngle;
  TH2F* PostPreS_PtVsGenMomAngle;
  TH2F* PostPreS_EoPVsGenMomAngle;
  TH2F* PostPreS_IhVsGenMomAngle;
  TH2F* PostPreS_IasVsGenMomAngle;
  TH2F* PostPreS_massTVsGenMomAngle;
  TH2F* PostPreS_miniIsoChgVsGenMomAngle;
  TH2F* PostPreS_miniIsoAllVsGenMomAngle;
  TH2F* PostPreS_MassVsGenMomAngle;

  TH2F* PostPreS_EtaVsGenNumSibling;
  TH2F* PostPreS_ProbQVsGenNumSibling;
  TH2F* PostPreS_ProbXYVsGenNumSibling;
  TH2F* PostPreS_PtVsGenNumSibling;
  TH2F* PostPreS_EoPVsGenNumSibling;
  TH2F* PostPreS_IhVsGenNumSibling;
  TH2F* PostPreS_IasVsGenNumSibling;
  TH2F* PostPreS_massTVsGenNumSibling;
  TH2F* PostPreS_miniIsoChgVsGenNumSibling;
  TH2F* PostPreS_miniIsoAllVsGenNumSibling;
  TH2F* PostPreS_EoPVsPfType;


  TH1F* PostPreS_Mass;
  TH2F* PostPreS_MassVsPfType;
  TH2F* PostPreS_MassVsPt;
  TH2F* PostPreS_MassVsP;
  TH2F* PostPreS_MassVsTNOHFraction;
  TH2F* PostPreS_MassVsTNOPH;
  TH2F* PostPreS_MassVsTNOM;
  TH2F* PostPreS_MassVsProbQNoL1;
  TH2F* PostPreS_MassVsProbXYNoL1;
  TH2F* PostPreS_MassVsEoP;
  TH2F* PostPreS_MassVsSumpTOverpT;
  TH2F* PostPreS_MassVsPtErrOverPt;
  TH2F* PostPreS_MassVsTIsol;
  TH2F* PostPreS_MassVsIh;
  TH2F* PostPreS_MassVsMassT;
  TH2F* PostPreS_MassVsMiniRelIsoAll;
  TH2F* PostPreS_MassVsMassErr;
  
  TH1F* CutFlow;
  TH1F* CutFlowReverse;
  
  TH2F* CutFlowEta;
  TH2F* CutFlowPfType;
  TH2F* CutFlowProbQ;

  TH3F* PostPreS_IasAllIhVsLayer;
  TH3F* PostPreS_IasPixelIhVsLayer;
  TH3F* PostPreS_IasStripIhVsLayer;

  TH2F* PostPreS_CluProbQVsPixelLayer;
  TH2F* PostPreS_CluProbXYVsPixelLayer;
  TH2F* PostPreS_CluSizeVsPixelLayer;
  TH2F* PostPreS_CluSizeXVsPixelLayer;
  TH2F* PostPreS_CluSizeYVsPixelLayer;
  TH2F* PostPreS_CluSpecInCPEVsPixelLayer;
  TH2F* PostPreS_CluProbQVsPixelLayer_highIas;
  TH2F* PostPreS_CluProbXYVsPixelLayer_highIas;
  TH2F* PostPreS_CluSizeVsPixelLayer_highIas;
  TH2F* PostPreS_CluSizeXVsPixelLayer_highIas;
  TH2F* PostPreS_CluSizeYVsPixelLayer_highIas;
  TH2F* PostPreS_CluSpecInCPEVsPixelLayer_highIas;

  TH2F* PostPreS_CluCotBetaVsPixelLayer_lowProbXY;
  TH2F* PostPreS_CluCotAlphaVsPixelLayer_lowProbXY;
  TH2F* PostPreS_CluCotBetaVsPixelLayer;
  TH2F* PostPreS_CluCotAlphaVsPixelLayer;

  TH1F* PostPreS_dRMinPfJet;
  TH2F* PostPreS_dRMinPfJetVsIas;
  TH1F* PostPreS_dRMinCaloJet;
  TH2F* PostPreS_dRMinCaloJetVsIas;

  TH2F* AS_Eta_RegionA;
  TH2F* AS_Eta_RegionB;
  TH2F* AS_Eta_RegionC;
  TH2F* AS_Eta_RegionD;
  TH2F* AS_Eta_RegionE;
  TH2F* AS_Eta_RegionF;
  TH2F* AS_Eta_RegionG;
  TH2F* AS_Eta_RegionH;

  TH1F* BefPreS_P;
  TH2F* AS_P;
  TH2F* AS_Pt;
  TH1F* BefPreS_Pt_DT;
  TH1F* BefPreS_Pt_CSC;
  TH2F* AS_Ias;
  TH2F* AS_Ih;
  TH1F* BefPreS_TOF;
  TH2F* AS_TOF;
  TH1F* BefPreS_TOF_PUA;
  TH1F* BefPreS_TOF_PUB;
  TH1F* BefPreS_TOF_DT;
  TH1F* BefPreS_TOF_CSC;
  TH1F* BefPreS_Ias_Cosmic;
  TH1F* BefPreS_Ih_Cosmic;
  TH1F* BefPreS_Pt_Cosmic;

  TH2F* BefPreS_EtaVsIas;   //TH3F*  AS_EtaIas;
  TH2F* BefPreS_EtaVsIh;   //TH3F*  AS_EtaIh;
  TH2F* BefPreS_EtaVsP;    //TH3F*  AS_EtaP;
  TH2F* BefPreS_EtaVsPt;   //TH3F*  AS_EtaPt;
  TH2F* BefPreS_EtaVsTOF;  //TH3F*  AS_EtaTOF;
  TH2F* BefPreS_EtaVsDz;
  TH2F* BefPreS_EtaVsNBH;  // number of bad hits vs Eta

  TH2F* BefPreS_PVsIas;
  TH3F* AS_PIs;
  TH2F* BefPreS_IhVsIas;
  TH2F* BefPreS_PVsIh;
  TH3F* AS_PIh;
  TH2F* BefPreS_PtVsIas;
  TH3F* AS_PtIs;
  TH2F* BefPreS_PtVsIh;
  TH3F* AS_PtIh;
  TH2F* BefPreS_PtTOF;
  TH2F* BefPreS_TOFIs;
  TH3F* AS_TOFIs;
  TH2F* BefPreS_TOFIh;
  TH3F* AS_TOFIh;

  //Prediction histograms
  TH1D* H_A;
  TH1D* H_B;
  TH1D* H_C;
  TH1D* H_D;
  TH1D* H_E;
  TH1D* H_F;
  TH1D* H_G;
  TH1D* H_H;

  //Prediction histograms for muon only analysis which is binned depending on eta nd number of muon stations
  std::map<std::string, TH1D*> H_B_Binned;  //TH1D* H_B_Binned[MaxPredBins];
  std::map<std::string, TH1D*> H_D_Binned;  //TH1D* H_D_Binned[MaxPredBins];
  std::map<std::string, TH1D*> H_F_Binned;  //TH1D* H_F_Binned[MaxPredBins];
  std::map<std::string, TH1D*> H_H_Binned;  //TH1D* H_H_Binned[MaxPredBins];

  TH1D* HCuts_Pt;
  TH1D* HCuts_Is;
  TH1D* HCuts_TOF;

  TH1D* Hist_Pt;
  TH1D* Hist_Is;
  TH1D* Hist_TOF;

  TH3F* Pred_EtaP;
  TH2F* Pred_I;
  TH3F* Pred_EtaI;
  TH2F* Pred_TOF;
  TH2F* Pred_EtaB;
  TH2F* Pred_EtaS;
  TH2F* Pred_EtaS2;

  //pz

  TH2F* PDF_E_Eta;
  TH2F* PDF_A_Eta;
  TH3F* PDF_H_EtaMass;
  TH3F* PDF_G_EtaP;
  TH3F* PDF_C_EtaP;
  TH3F* PDF_F_EtaICK;
  TH3F* PDF_B_EtaICK;

  TH2F* PDF_E_Eta_Flip;
  TH2F* PDF_A_Eta_Flip;
  TH3F* PDF_H_EtaMass_Flip;
  TH3F* PDF_G_EtaP_Flip;
  TH3F* PDF_C_EtaP_Flip;
  TH3F* PDF_F_EtaICK_Flip;
  TH3F* PDF_B_EtaICK_Flip;

  // end FIXME

  TH2F* RegionD_P;
  TH2F* RegionD_I;
  TH2F* RegionD_Ias;
  TH2F* RegionD_TOF;

  TH2F* RegionH_Ias;

  TH1D* H_A_Flip;
  TH1D* H_B_Flip;
  TH1D* H_C_Flip;
  TH1D* H_D_Flip;
  TH1D* H_E_Flip;
  TH1D* H_F_Flip;
  TH1D* H_G_Flip;
  TH1D* H_H_Flip;

  std::map<std::string, TH1D*> H_B_Binned_Flip;  //TH1D* H_B_Binned_Flip[MaxPredBins];
  std::map<std::string, TH1D*> H_D_Binned_Flip;  //TH1D* H_D_Binned_Flip[MaxPredBins];
  std::map<std::string, TH1D*> H_F_Binned_Flip;  //TH1D* H_F_Binned_Flip[MaxPredBins];
  std::map<std::string, TH1D*> H_H_Binned_Flip;  //TH1D* H_H_Binned_Flip[MaxPredBins];

  TH3F* Pred_EtaP_Flip;
  TH2F* Pred_I_Flip;
  TH2F* Pred_TOF_Flip;
  TH2F* Pred_EtaB_Flip;
  TH2F* Pred_EtaS_Flip;
  TH2F* Pred_EtaS2_Flip;

  TH2F* RegionD_P_Flip;
  TH2F* RegionD_I_Flip;
  TH2F* RegionD_Ias_Flip;
  TH2F* RegionD_TOF_Flip;

  TH2F* RegionH_Ias_Flip;

  TH2F* H_D_DzSidebands;

  TH2F* BefPreS_GenPtVsdRMinGen;
  TH1F* BefPreS_GendRMin;
  TH2F* BefPreS_GenPtVsdRMinGenPostCut;
  TH2F* BefPreS_GenPtVsGenMinPt;
  TH2F* BefPreS_GenPtVsRecoPt;
  TH2F* PostPreS_GenPtVsRecoPt;
  TH1F* GenLevelBinning;
  TH1F* GenLevelpT;
  TH1F* GenLevelEta;
  TH1F* GenLevelBeta;
  TH1F* GenLevelBetaGamma;

  TH1D* CtrlPt_S1_Is;
  TH1D* CtrlPt_S2_Is;
  TH1D* CtrlPt_S3_Is;
  TH1D* CtrlPt_S4_Is;

  TH1D* CtrlIs_S1_TOF;
  TH1D* CtrlIs_S2_TOF;
  TH1D* CtrlIs_S3_TOF;
  TH1D* CtrlIs_S4_TOF;

  TH1D* CtrlIh_S1_TOF;
  TH1D* CtrlIh_S2_TOF;
  TH1D* CtrlIh_S3_TOF;
  TH1D* CtrlIh_S4_TOF;

  TH1D* CtrlPt_S1_Ih;
  TH1D* CtrlPt_S2_Ih;
  TH1D* CtrlPt_S3_Ih;
  TH1D* CtrlPt_S4_Ih;

  TH1D* CtrlPt_S1_TOF;
  TH1D* CtrlPt_S2_TOF;
  TH1D* CtrlPt_S3_TOF;
  TH1D* CtrlPt_S4_TOF;

  std::map<std::string, TH1D*> CtrlPt_S1_TOF_Binned;  //TH1D* CtrlPt_S1_TOF_Binned[MaxPredBins];
  std::map<std::string, TH1D*> CtrlPt_S2_TOF_Binned;  //TH1D* CtrlPt_S2_TOF_Binned[MaxPredBins];
  std::map<std::string, TH1D*> CtrlPt_S3_TOF_Binned;  //TH1D* CtrlPt_S3_TOF_Binned[MaxPredBins];
  std::map<std::string, TH1D*> CtrlPt_S4_TOF_Binned;  //TH1D* CtrlPt_S4_TOF_Binned[MaxPredBins];
   
  Region rA_ias50;
  Region rC_ias50;
  
  Region rB_50ias60;
  Region rB_60ias70;
  Region rB_70ias80;
  Region rB_80ias90;
  Region rB_50ias90;
  Region rB_90ias100;

  Region rD_50ias60;
  Region rD_60ias70;
  Region rD_70ias80;
  Region rD_80ias90;
  Region rD_50ias90;
  Region rD_90ias100;

};

#endif
