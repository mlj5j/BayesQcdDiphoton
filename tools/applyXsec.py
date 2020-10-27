from ROOT import *
from utils import *
import sys
import numpy as np

fname = sys.argv[1]

fin = TFile(fname,'update')

#fnameout = 'copy_'+fname
#fout = TFile(fnameout, 'recreate')

#keys = fin.GetListOfKeys()
#keys = sorted(keys, key=lambda thing: thing.GetName())
#for key in keys:
#    name = key.GetName()
#    dodad = fin.Get(name)
#    fout.cd()
#    dodad.Write()


tree = fin.Get("TreeMaker2/PreSelection")

#fout.mkdir('TreeMaker2')
#fout.cd('TreeMaker2')
#treeout = tree.CloneTree(0)

xsec = np.zeros(1, dtype=float)
IsZGG = False
IsT6 = False

b = tree.GetBranch('CrossSection')

if 'ZGG' in fname:
    print 'updating xsection for ZGG process!'
    tree.SetBranchAddress('CrossSection', xsec)
    IsZGG = True

if 'T6Wg' in fname:
    print 'updating xsection for squark-antisquark production!'
    tree.SetBranchAddress('CrossSection', xsec)
    IsT6 = True
    dict_xsec = mkXsec_dict('../usefulthings/xsec/json/pp13_squark_NNLO+NNLL.json')
    

susymass = -99.9
nentries = tree.GetEntries()
print nentries
for jentry in range(0, nentries):

    print 'Doing entry {0}'.format(jentry)

    tree.GetEntry(jentry)

    print 'Got the entry'
    b.Reset()
    if IsZGG: xsec[0] = 0.07477
    
    
    if IsT6: 
        for i, pdgid in enumerate(tree.GenParticles_PdgId):
            if (abs(pdgid) > 1000001 and abs(pdgid) < 1000011) or (abs(pdgid) > 2000001 and abs(pdgid) < 2000011):
                susymass = round(tree.GenParticles[i].M(),6)
                xsec[0] = getXsec(dict_xsec, susymass)
                continue

    b.Fill()

#tree.Write("", TFile.kOverwrite)
fin.Write("", TFile.kOverwrite)
fin.Close()
print "complete!!"

