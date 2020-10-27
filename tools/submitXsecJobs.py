import os




filelist = open('../usefulthings/filelist_Summer16T6.txt','r')
for line in filelist:
    fpath = 'root://cmseos.fnal.gov//store/group/lpcsusyphotons/TreeMakerRandS_signal/{0}'.format(line.strip())
    cmd1 = 'xrdcp -f {0} .'.format(fpath)
    cmd2 = 'python applyXsec.py {0}'.format(line.strip())
    cmd3 = 'xrdcp -f {0} {1}'.format(line.strip(), fpath)
    cmd4 = 'rm {0}'.format(line.strip())
    print cmd1
    os.system(cmd1)
    print cmd2
    os.system(cmd2)
    print cmd3
    os.system(cmd3)
    os.system(cmd4)
    
