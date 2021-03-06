#include "L1Trigger/L1TNtuples/interface/L1AnalysisL1Upgrade.h"

L1Analysis::L1AnalysisL1Upgrade::L1AnalysisL1Upgrade()
{
}

L1Analysis::L1AnalysisL1Upgrade::~L1AnalysisL1Upgrade()
{

}

void L1Analysis::L1AnalysisL1Upgrade::SetEm(const edm::Handle<l1t::EGammaBxCollection> em, unsigned maxL1Upgrade)
{
  for (int ibx = em->getFirstBX(); ibx <= em->getLastBX(); ++ibx) {
    for (l1t::EGammaBxCollection::const_iterator it=em->begin(ibx); it!=em->end(ibx) && l1upgrade_.nEGs<maxL1Upgrade; it++){
      if (it->pt() > 0){
	l1upgrade_.egEt .push_back(it->pt());
	l1upgrade_.egEta.push_back(it->eta());
	l1upgrade_.egPhi.push_back(it->phi());
	l1upgrade_.egIEt .push_back(it->hwPt());
	l1upgrade_.egIEta.push_back(it->hwEta());
	l1upgrade_.egIPhi.push_back(it->hwPhi());
	l1upgrade_.egIso.push_back(it->hwIso());
	l1upgrade_.egBx .push_back(ibx);
	l1upgrade_.nEGs++;
      }
    }
  }
}


void L1Analysis::L1AnalysisL1Upgrade::SetTau(const edm::Handle<l1t::TauBxCollection> tau, unsigned maxL1Upgrade)
{
  for (int ibx = tau->getFirstBX(); ibx <= tau->getLastBX(); ++ibx) {
    for (l1t::TauBxCollection::const_iterator it=tau->begin(ibx); it!=tau->end(ibx) && l1upgrade_.nTaus<maxL1Upgrade; it++){
      if (it->pt() > 0){
	l1upgrade_.tauEt .push_back(it->et());
	l1upgrade_.tauEta.push_back(it->eta());
	l1upgrade_.tauPhi.push_back(it->phi());
	l1upgrade_.tauIEt .push_back(it->hwPt());
	l1upgrade_.tauIEta.push_back(it->hwEta());
	l1upgrade_.tauIPhi.push_back(it->hwPhi());
	l1upgrade_.tauIso.push_back(it->hwIso());
	l1upgrade_.tauBx .push_back(ibx);
	l1upgrade_.tauRawEt.push_back(it->rawEt());
	l1upgrade_.tauIsoEt.push_back(it->isoEt());
	l1upgrade_.tauNTT.push_back(it->nTT());
	l1upgrade_.tauHasEM.push_back(it->hasEM());
	l1upgrade_.tauIsMerged.push_back(it->isMerged());
	l1upgrade_.nTaus++;
      }
    }
  }
}


void L1Analysis::L1AnalysisL1Upgrade::SetJet(const edm::Handle<l1t::JetBxCollection> jet, unsigned maxL1Upgrade)
{
  for (int ibx = jet->getFirstBX(); ibx <= jet->getLastBX(); ++ibx) {
    for (l1t::JetBxCollection::const_iterator it=jet->begin(ibx); it!=jet->end(ibx) && l1upgrade_.nJets<maxL1Upgrade; it++){
      if (it->pt() > 0){
	l1upgrade_.jetEt .push_back(it->et());
	l1upgrade_.jetEta.push_back(it->eta());
	l1upgrade_.jetPhi.push_back(it->phi());
	l1upgrade_.jetIEt .push_back(it->hwPt());
	l1upgrade_.jetIEta.push_back(it->hwEta());
	l1upgrade_.jetIPhi.push_back(it->hwPhi());
	l1upgrade_.jetBx .push_back(ibx);
	l1upgrade_.nJets++;
      }
    }
  }
}


void L1Analysis::L1AnalysisL1Upgrade::SetMuon(const edm::Handle<l1t::MuonBxCollection> muon, unsigned maxL1Upgrade)
{
  for (int ibx = muon->getFirstBX(); ibx <= muon->getLastBX(); ++ibx) {
    for (l1t::MuonBxCollection::const_iterator it=muon->begin(ibx); it!=muon->end(ibx) && l1upgrade_.nMuons<maxL1Upgrade; it++){
      if (it->pt() > 0){
	l1upgrade_.muonEt .push_back(it->et());
	l1upgrade_.muonEta.push_back(it->eta());
	l1upgrade_.muonPhi.push_back(it->phi());
	l1upgrade_.muonIEt .push_back(it->hwPt());
	l1upgrade_.muonIEta.push_back(it->hwEta());
	l1upgrade_.muonIPhi.push_back(it->hwPhi());
	l1upgrade_.muonChg.push_back(it->charge());
	l1upgrade_.muonIso.push_back(it->hwIso());
	l1upgrade_.muonQual.push_back(it->hwQual());
	l1upgrade_.muonTfMuonIdx.push_back(it->tfMuonIndex());
	l1upgrade_.muonBx .push_back(ibx);
	l1upgrade_.nMuons++;
      }
    }
  }
}

void L1Analysis::L1AnalysisL1Upgrade::SetSum(const edm::Handle<l1t::EtSumBxCollection> sums, unsigned maxL1Upgrade)
{
  for (int ibx = sums->getFirstBX(); ibx <= sums->getLastBX(); ++ibx) {
    for (l1t::EtSumBxCollection::const_iterator it=sums->begin(ibx); it!=sums->end(ibx) && l1upgrade_.nSums<maxL1Upgrade; it++) {
      int type = static_cast<int>( it->getType() ); 
      l1upgrade_.sumType. push_back( type ); 
      l1upgrade_.sumEt. push_back( it->et() ); 
      l1upgrade_.sumPhi.push_back( it->phi() );
      l1upgrade_.sumIEt. push_back( it->hwPt() ); 
      l1upgrade_.sumIPhi.push_back( it->hwPhi() );
      l1upgrade_.sumBx. push_back( ibx );
      l1upgrade_.nSums++;
    }
  }
}


