from ROOT import *
from utils import *
import sys
import numpy as np

fname = sys.argv[1]
print 'Loading {0}'.format(fname)
ch = TChain('TreeMaker2/PreSelection')
if '/store/' in fname:
    ch.Add('root://cmseos.fnal.gov/{0}'.format(fname))

#else:
#    ch.Add(fname)
print fname.split('/')[-1]
fnameout = 'copy_{0}'.format(fname.split('/')[-1])
#fnameout = 'copy_'+fname.strip('/')[-1]
fout = TFile.Open(fnameout, 'recreate')


fout.mkdir('TreeMaker2')
fout.cd('TreeMaker2')
tree = ch.CloneTree(0)

xsec = np.zeros(1, dtype=float)
IsZGG = False
IsT6 = False

if 'ZGG' in fname:
    print 'updating xsection for ZGG process!'
    ch.SetBranchAddress('CrossSection', xsec)
    IsZGG = True

if 'T6Wg' in fname:
    print 'updating xsection for squark-antisquark production!'
    ch.SetBranchAddress('CrossSection', xsec)
    IsT6 = True
#    dict_xsec = mkXsec_dict('/usefulthings/xsec/json/pp13_squark_NNLO+NNLL.json')
    dict_xsec = mkXsec_dict('usefulthings/pp13_squark_NNLO+NNLL.json')
    

susymass = -99.9
nentries = ch.GetEntries()
#nentries = 1000

for jentry in range(0, nentries):

    ientry = ch.LoadTree(jentry)
    if ientry<0:
        break
    nb = ch.GetEntry(jentry)
    if nb<=0:
        continue

    if IsZGG: xsec[0] = 0.07477
    
    
    if IsT6: 
        for i, pdgid in enumerate(ch.GenParticles_PdgId):
            if (abs(pdgid) > 1000000 and abs(pdgid) < 1000011) or (abs(pdgid) > 2000000 and abs(pdgid) < 2000011):
                susymass = round(ch.GenParticles[i].M(),6)
                xsec[0] = getXsec(dict_xsec, susymass)
                continue
    tree.Fill()
    #b.Fill()

#tree.Write("", TFile.kOverwrite)
fout.Write()
fout.Close()
print "complete!!"

