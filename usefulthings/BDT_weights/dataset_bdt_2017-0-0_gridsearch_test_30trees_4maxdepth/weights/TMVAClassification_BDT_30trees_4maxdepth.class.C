// Class: ReadBDT_30trees_4maxdepth
// Automatically generated by MethodBase::MakeClass
//

/* configuration options =====================================================

#GEN -*-*-*-*-*-*-*-*-*-*-*- general info -*-*-*-*-*-*-*-*-*-*-*-

Method         : BDT::BDT_30trees_4maxdepth
TMVA Release   : 4.2.1         [262657]
ROOT Release   : 6.12/07       [396295]
Creator        : mjoyce
Date           : Thu Oct  8 15:39:56 2020
Host           : Linux cmsbuild16.cern.ch 3.10.0-1062.4.1.el7.x86_64 #1 SMP Fri Oct 18 17:15:30 UTC 2019 x86_64 x86_64 x86_64 GNU/Linux
Dir            : /uscms_data/d3/mjoyce/diPhoton/BDT_Training/tools
Training events: 17413
Analysis type  : [Classification]


#OPT -*-*-*-*-*-*-*-*-*-*-*-*- options -*-*-*-*-*-*-*-*-*-*-*-*-

# Set by User:
NTrees: "30" [Number of trees in the forest]
MaxDepth: "4" [Max depth of the decision tree allowed]
# Default:
V: "False" [Verbose output (short form of "VerbosityLevel" below - overrides the latter one)]
VerbosityLevel: "Default" [Verbosity level]
VarTransform: "None" [List of variable transformations performed before training, e.g., "D_Background,P_Signal,G,N_AllClasses" for: "Decorrelation, PCA-transformation, Gaussianisation, Normalisation, each for the given class of events ('AllClasses' denotes all events of all classes, if no class indication is given, 'All' is assumed)"]
H: "False" [Print method-specific help message]
CreateMVAPdfs: "False" [Create PDFs for classifier outputs (signal and background)]
IgnoreNegWeightsInTraining: "False" [Events with negative weights are ignored in the training (but are included for testing and performance evaluation)]
MinNodeSize: "5%" [Minimum percentage of training events required in a leaf node (default: Classification: 5%, Regression: 0.2%)]
nCuts: "20" [Number of grid points in variable range used in finding optimal cut in node splitting]
BoostType: "AdaBoost" [Boosting type for the trees in the forest (note: AdaCost is still experimental)]
AdaBoostR2Loss: "quadratic" [Type of Loss function in AdaBoostR2]
UseBaggedBoost: "False" [Use only a random subsample of all events for growing the trees in each boost iteration.]
Shrinkage: "1.000000e+00" [Learning rate for GradBoost algorithm]
AdaBoostBeta: "5.000000e-01" [Learning rate  for AdaBoost algorithm]
UseRandomisedTrees: "False" [Determine at each node splitting the cut variable only as the best out of a random subset of variables (like in RandomForests)]
UseNvars: "3" [Size of the subset of variables used with RandomisedTree option]
UsePoissonNvars: "True" [Interpret "UseNvars" not as fixed number but as mean of a Poisson distribution in each split with RandomisedTree option]
BaggedSampleFraction: "6.000000e-01" [Relative size of bagged event sample to original size of the data sample (used whenever bagging is used (i.e. UseBaggedBoost, Bagging,)]
UseYesNoLeaf: "True" [Use Sig or Bkg categories, or the purity=S/(S+B) as classification of the leaf node -> Real-AdaBoost]
NegWeightTreatment: "inverseboostnegweights" [How to treat events with negative weights in the BDT training (particular the boosting) : IgnoreInTraining;  Boost With inverse boostweight; Pair events with negative and positive weights in training sample and *annihilate* them (experimental!)]
Css: "1.000000e+00" [AdaCost: cost of true signal selected signal]
Cts_sb: "1.000000e+00" [AdaCost: cost of true signal selected bkg]
Ctb_ss: "1.000000e+00" [AdaCost: cost of true bkg    selected signal]
Cbb: "1.000000e+00" [AdaCost: cost of true bkg    selected bkg ]
NodePurityLimit: "5.000000e-01" [In boosting/pruning, nodes with purity > NodePurityLimit are signal; background otherwise.]
SeparationType: "giniindex" [Separation criterion for node splitting]
RegressionLossFunctionBDTG: "huber" [Loss function for BDTG regression.]
HuberQuantile: "7.000000e-01" [In the Huber loss function this is the quantile that separates the core from the tails in the residuals distribution.]
DoBoostMonitor: "False" [Create control plot with ROC integral vs tree number]
UseFisherCuts: "False" [Use multivariate splits using the Fisher criterion]
MinLinCorrForFisher: "8.000000e-01" [The minimum linear correlation between two variables demanded for use in Fisher criterion in node splitting]
UseExclusiveVars: "False" [Variables already used in fisher criterion are not anymore analysed individually for node splitting]
DoPreselection: "False" [and and apply automatic pre-selection for 100% efficient signal (bkg) cuts prior to training]
SigToBkgFraction: "1.000000e+00" [Sig to Bkg ratio used in Training (similar to NodePurityLimit, which cannot be used in real adaboost]
PruneMethod: "nopruning" [Note: for BDTs use small trees (e.g.MaxDepth=3) and NoPruning:  Pruning: Method used for pruning (removal) of statistically insignificant branches ]
PruneStrength: "0.000000e+00" [Pruning strength]
PruningValFraction: "5.000000e-01" [Fraction of events to use for optimizing automatic pruning.]
SkipNormalization: "False" [Skip normalization at initialization, to keep expectation value of BDT output according to the fraction of events]
nEventsMin: "0" [deprecated: Use MinNodeSize (in % of training events) instead]
UseBaggedGrad: "False" [deprecated: Use *UseBaggedBoost* instead:  Use only a random subsample of all events for growing the trees in each iteration.]
GradBaggingFraction: "6.000000e-01" [deprecated: Use *BaggedSampleFraction* instead: Defines the fraction of events to be used in each iteration, e.g. when UseBaggedGrad=kTRUE. ]
UseNTrainEvents: "0" [deprecated: Use *BaggedSampleFraction* instead: Number of randomly picked training events used in randomised (and bagged) trees]
NNodesMax: "0" [deprecated: Use MaxDepth instead to limit the tree size]
##


#VAR -*-*-*-*-*-*-*-*-*-*-*-* variables *-*-*-*-*-*-*-*-*-*-*-*-

NVar 10
mva_ST                        mva_ST                        mva_ST                        mva_ST                                                          'F'    [150.774047852,3966.25878906]
mva_Pt_jets                   mva_Pt_jets                   mva_Pt_jets                   mva_Pt_jets                                                     'F'    [0,1736.97509766]
mva_dPhi_GG                   mva_dPhi_GG                   mva_dPhi_GG                   mva_dPhi_GG                                                     'F'    [-3.14156007767,3.14131355286]
mva_Photons0Et                mva_Photons0Et                mva_Photons0Et                mva_Photons0Et                                                  'F'    [75.4916229248,1538.80529785]
mva_Photons1Et                mva_Photons1Et                mva_Photons1Et                mva_Photons1Et                                                  'F'    [75.0068206787,910.722717285]
mva_HardMET                   mva_HardMET                   mva_HardMET                   mva_HardMET                                                     'F'    [110.001327515,1060.98339844]
mva_Pt_GG                     mva_Pt_GG                     mva_Pt_GG                     mva_Pt_GG                                                       'F'    [1.40617668629,1568.46838379]
mva_ST_jets                   mva_ST_jets                   mva_ST_jets                   mva_ST_jets                                                     'F'    [0,3363.21850586]
mva_min_dPhi                  mva_min_dPhi                  mva_min_dPhi                  mva_min_dPhi                                                    'F'    [4.85611817567e-05,3.14130234718]
mva_dPhi_GGHardMET            mva_dPhi_GGHardMET            mva_dPhi_GGHardMET            mva_dPhi_GGHardMET                                              'F'    [-3.14159274101,3.14159274101]
NSpec 0


============================================================================ */

#include <array>
#include <vector>
#include <cmath>
#include <string>
#include <iostream>

#define NN new BDT_30trees_4maxdepthNode
   
#ifndef BDT_30trees_4maxdepthNode__def
#define BDT_30trees_4maxdepthNode__def
   
class BDT_30trees_4maxdepthNode {
   
public:
   
   // constructor of an essentially "empty" node floating in space
   BDT_30trees_4maxdepthNode ( BDT_30trees_4maxdepthNode* left,BDT_30trees_4maxdepthNode* right,
                          int selector, double cutValue, bool cutType, 
                          int nodeType, double purity, double response ) :
   fLeft         ( left         ),
   fRight        ( right        ),
   fSelector     ( selector     ),
   fCutValue     ( cutValue     ),
   fCutType      ( cutType      ),
   fNodeType     ( nodeType     ),
   fPurity       ( purity       ),
   fResponse     ( response     ){
   }

   virtual ~BDT_30trees_4maxdepthNode();

   // test event if it descends the tree at this node to the right
   virtual bool GoesRight( const std::vector<double>& inputValues ) const;
   BDT_30trees_4maxdepthNode* GetRight( void )  {return fRight; };

   // test event if it descends the tree at this node to the left 
   virtual bool GoesLeft ( const std::vector<double>& inputValues ) const;
   BDT_30trees_4maxdepthNode* GetLeft( void ) { return fLeft; };   

   // return  S/(S+B) (purity) at this node (from  training)

   double GetPurity( void ) const { return fPurity; } 
   // return the node type
   int    GetNodeType( void ) const { return fNodeType; }
   double GetResponse(void) const {return fResponse;}

private:

   BDT_30trees_4maxdepthNode*   fLeft;     // pointer to the left daughter node
   BDT_30trees_4maxdepthNode*   fRight;    // pointer to the right daughter node
   int                     fSelector; // index of variable used in node selection (decision tree)   
   double                  fCutValue; // cut value applied on this node to discriminate bkg against sig
   bool                    fCutType;  // true: if event variable > cutValue ==> signal , false otherwise
   int                     fNodeType; // Type of node: -1 == Bkg-leaf, 1 == Signal-leaf, 0 = internal 
   double                  fPurity;   // Purity of node from training
   double                  fResponse; // Regression response value of node
}; 
   
//_______________________________________________________________________
   BDT_30trees_4maxdepthNode::~BDT_30trees_4maxdepthNode()
{
   if (fLeft  != NULL) delete fLeft;
   if (fRight != NULL) delete fRight;
}; 
   
//_______________________________________________________________________
bool BDT_30trees_4maxdepthNode::GoesRight( const std::vector<double>& inputValues ) const
{
   // test event if it descends the tree at this node to the right
   bool result;
     result = (inputValues[fSelector] > fCutValue );
   if (fCutType == true) return result; //the cuts are selecting Signal ;
   else return !result;
}
   
//_______________________________________________________________________
bool BDT_30trees_4maxdepthNode::GoesLeft( const std::vector<double>& inputValues ) const
{
   // test event if it descends the tree at this node to the left
   if (!this->GoesRight(inputValues)) return true;
   else return false;
}
   
#endif
   
#ifndef IClassifierReader__def
#define IClassifierReader__def

class IClassifierReader {

 public:

   // constructor
   IClassifierReader() : fStatusIsClean( true ) {}
   virtual ~IClassifierReader() {}

   // return classifier response
   virtual double GetMvaValue( const std::vector<double>& inputValues ) const = 0;

   // returns classifier status
   bool IsStatusClean() const { return fStatusIsClean; }

 protected:

   bool fStatusIsClean;
};

#endif

class ReadBDT_30trees_4maxdepth : public IClassifierReader {

 public:

   // constructor
   ReadBDT_30trees_4maxdepth( std::vector<std::string>& theInputVars ) 
      : IClassifierReader(),
        fClassName( "ReadBDT_30trees_4maxdepth" ),
        fNvars( 10 ),
        fIsNormalised( false )
   {      
      // the training input variables
      const char* inputVars[] = { "mva_ST", "mva_Pt_jets", "mva_dPhi_GG", "mva_Photons0Et", "mva_Photons1Et", "mva_HardMET", "mva_Pt_GG", "mva_ST_jets", "mva_min_dPhi", "mva_dPhi_GGHardMET" };

      // sanity checks
      if (theInputVars.size() <= 0) {
         std::cout << "Problem in class \"" << fClassName << "\": empty input vector" << std::endl;
         fStatusIsClean = false;
      }

      if (theInputVars.size() != fNvars) {
         std::cout << "Problem in class \"" << fClassName << "\": mismatch in number of input values: "
                   << theInputVars.size() << " != " << fNvars << std::endl;
         fStatusIsClean = false;
      }

      // validate input variables
      for (size_t ivar = 0; ivar < theInputVars.size(); ivar++) {
         if (theInputVars[ivar] != inputVars[ivar]) {
            std::cout << "Problem in class \"" << fClassName << "\": mismatch in input variable names" << std::endl
                      << " for variable [" << ivar << "]: " << theInputVars[ivar].c_str() << " != " << inputVars[ivar] << std::endl;
            fStatusIsClean = false;
         }
      }

      // initialize min and max vectors (for normalisation)
      fVmin[0] = 0;
      fVmax[0] = 0;
      fVmin[1] = 0;
      fVmax[1] = 0;
      fVmin[2] = 0;
      fVmax[2] = 0;
      fVmin[3] = 0;
      fVmax[3] = 0;
      fVmin[4] = 0;
      fVmax[4] = 0;
      fVmin[5] = 0;
      fVmax[5] = 0;
      fVmin[6] = 0;
      fVmax[6] = 0;
      fVmin[7] = 0;
      fVmax[7] = 0;
      fVmin[8] = 0;
      fVmax[8] = 0;
      fVmin[9] = 0;
      fVmax[9] = 0;

      // initialize input variable types
      fType[0] = 'F';
      fType[1] = 'F';
      fType[2] = 'F';
      fType[3] = 'F';
      fType[4] = 'F';
      fType[5] = 'F';
      fType[6] = 'F';
      fType[7] = 'F';
      fType[8] = 'F';
      fType[9] = 'F';

      // initialize constants
      Initialize();

   }

   // destructor
   virtual ~ReadBDT_30trees_4maxdepth() {
      Clear(); // method-specific
   }

   // the classifier response
   // "inputValues" is a vector of input values in the same order as the 
   // variables given to the constructor
   double GetMvaValue( const std::vector<double>& inputValues ) const;

 private:

   // method-specific destructor
   void Clear();

   // common member variables
   const char* fClassName;

   const size_t fNvars;
   size_t GetNvar()           const { return fNvars; }
   char   GetType( int ivar ) const { return fType[ivar]; }

   // normalisation of input variables
   const bool fIsNormalised;
   bool IsNormalised() const { return fIsNormalised; }
   double fVmin[10];
   double fVmax[10];
   double NormVariable( double x, double xmin, double xmax ) const {
      // normalise to output range: [-1, 1]
      return 2*(x - xmin)/(xmax - xmin) - 1.0;
   }

   // type of input variable: 'F' or 'I'
   char   fType[10];

   // initialize internal variables
   void Initialize();
   double GetMvaValue__( const std::vector<double>& inputValues ) const;

   // private members (method specific)
   std::vector<BDT_30trees_4maxdepthNode*> fForest;       // i.e. root nodes of decision trees
   std::vector<double>                fBoostWeights; // the weights applied in the individual boosts
};

double ReadBDT_30trees_4maxdepth::GetMvaValue__( const std::vector<double>& inputValues ) const
{
   double myMVA = 0;
   double norm  = 0;
   for (unsigned int itree=0; itree<fForest.size(); itree++){
      BDT_30trees_4maxdepthNode *current = fForest[itree];
      while (current->GetNodeType() == 0) { //intermediate node
         if (current->GoesRight(inputValues)) current=(BDT_30trees_4maxdepthNode*)current->GetRight();
         else current=(BDT_30trees_4maxdepthNode*)current->GetLeft();
      }
      myMVA += fBoostWeights[itree] *  current->GetNodeType();
      norm  += fBoostWeights[itree];
   }
   return myMVA /= norm;
};

void ReadBDT_30trees_4maxdepth::Initialize()
{
  // itree = 0
  fBoostWeights.push_back(0.811724192117098);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.931552,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.451968,-99) , 
7, 318.799, 1, 0, 0.843478,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.723606,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.218173,-99) , 
6, 92.1707, 0, 0, 0.592811,-99) , 
NN(
0, 
0, 
-1, 0.603583, 0, -1, 0.139271,-99) , 
1, 81.8495, 1, 0, 0.29203,-99) , 
5, 155.286, 0, 0, 0.5,-99)    );
  // itree = 1
  fBoostWeights.push_back(0.661266);
  fForest.push_back( 
NN(
NN(
0, 
0, 
-1, 0.299628, 0, 1, 0.807071,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.725522,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.346882,-99) , 
7, 280.229, 1, 0, 0.642127,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.19589,-99) , 
6, 58.9172, 0, 0, 0.528704,-99) , 
NN(
0, 
0, 
-1, 320.307, 1, -1, 0.174449,-99) , 
8, 0.533439, 0, 0, 0.351976,-99) , 
5, 155.286, 0, 0, 0.519004,-99)    );
  // itree = 2
  fBoostWeights.push_back(0.439887);
  fForest.push_back( 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.86072,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.676805,-99) , 
NN(
0, 
0, 
-1, 76.0282, 0, -1, 0.338847,-99) , 
5, 172.735, 0, 0, 0.404224,-99) , 
8, 1.3463, 0, 0, 0.503157,-99)    );
  // itree = 3
  fBoostWeights.push_back(0.497521);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0.96173, 0, 1, 0.811582,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.529271,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.230046,-99) , 
7, 121.502, 0, 0, 0.338924,-99) , 
6, 94.6466, 0, 0, 0.673589,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.622729,-99) , 
NN(
0, 
0, 
-1, 78.5481, 0, -1, 0.373134,-99) , 
1, 68.7811, 1, 0, 0.45898,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.0280314,-99) , 
7, 640.613, 1, 0, 0.38687,-99) , 
8, 0.598383, 0, 0, 0.534792,-99)    );
  // itree = 4
  fBoostWeights.push_back(0.47682);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.85145,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.660328,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.355733,-99) , 
8, 0.634575, 0, 0, 0.495025,-99) , 
7, 190.545, 1, 0, 0.693234,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.627108,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.387901,-99) , 
8, 0.974789, 0, 0, 0.468099,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.203375,-99) , 
6, 34.6894, 0, 0, 0.41739,-99) , 
6, 141.267, 0, 0, 0.554547,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.0545553,-99) , 
7, 800.766, 1, 0, 0.523062,-99)    );
  // itree = 5
  fBoostWeights.push_back(0.368693);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.776255,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.580986,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.234467,-99) , 
7, 381.09, 1, 0, 0.535552,-99) , 
5, 155.286, 0, 0, 0.620243,-99) , 
NN(
NN(
0, 
0, 
-1, 0.421019, 1, 1, 0.585393,-99) , 
NN(
0, 
0, 
-1, -0.448435, 0, -1, 0.301011,-99) , 
0, 385.266, 0, 0, 0.410042,-99) , 
6, 94.6466, 0, 0, 0.556838,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.0850507,-99) , 
7, 800.766, 1, 0, 0.530598,-99)    );
  // itree = 6
  fBoostWeights.push_back(0.253159);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.634648,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.674462,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.499904,-99) , 
2, 0.448653, 1, 0, 0.609632,-99) , 
NN(
0, 
0, 
-1, 342.981, 1, -1, 0.403486,-99) , 
5, 133.719, 0, 0, 0.459641,-99) , 
5, 155.286, 0, 0, 0.511073,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.118477,-99) , 
7, 800.766, 1, 0, 0.491266,-99)    );
  // itree = 7
  fBoostWeights.push_back(0.21576);
  fForest.push_back( 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.678125,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.654618,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.53213,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.416459,-99) , 
6, 153.154, 0, 0, 0.464156,-99) , 
4, 154.599, 0, 0, 0.492669,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.260786,-99) , 
7, 640.613, 1, 0, 0.470253,-99) , 
8, 1.3463, 0, 0, 0.504778,-99)    );
  // itree = 8
  fBoostWeights.push_back(0.287061);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.693935,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.58023,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.583314,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.152888,-99) , 
9, -0.448188, 0, 0, 0.428886,-99) , 
1, 63.4509, 1, 0, 0.498149,-99) , 
6, 141.267, 0, 0, 0.562523,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.553277,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.405009,-99) , 
9, -1.04734, 1, 0, 0.466746,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.307243,-99) , 
1, 126.032, 0, 0, 0.439704,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.289442,-99) , 
7, 617.741, 1, 0, 0.409316,-99) , 
7, 160.153, 1, 0, 0.500163,-99)    );
  // itree = 9
  fBoostWeights.push_back(0.176964);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.643476,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.475423,-99) , 
1, 111.027, 1, 0, 0.581954,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.58239,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.523207,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.409024,-99) , 
9, 1.6456, 0, 0, 0.446776,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.223571,-99) , 
7, 640.613, 1, 0, 0.429592,-99) , 
4, 154.599, 0, 0, 0.453966,-99) , 
8, 1.19672, 0, 0, 0.481194,-99)    );
  // itree = 10
  fBoostWeights.push_back(0.20233);
  fForest.push_back( 
NN(
NN(
0, 
0, 
-1, 111.027, 1, 1, 0.571395,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, -2.28705, 0, 1, 0.579786,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.509182,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.346396,-99) , 
8, 0.398754, 0, 0, 0.43934,-99) , 
9, 1.0472, 0, 0, 0.502763,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.601449,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.423336,-99) , 
4, 101.515, 1, 0, 0.533702,-99) , 
NN(
0, 
0, 
-1, 0.512483, 0, -1, 0.300292,-99) , 
9, -2.24399, 1, 0, 0.402295,-99) , 
2, 0.448653, 1, 0, 0.460795,-99) , 
8, 1.19672, 0, 0, 0.484272,-99)    );
  // itree = 11
  fBoostWeights.push_back(0.22812);
  fForest.push_back( 
NN(
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.623414,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.484497,-99) , 
9, -1.3464, 1, 0, 0.556849,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.548274,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.288813,-99) , 
8, 0.510851, 0, 0, 0.418783,-99) , 
7, 320.307, 1, 0, 0.518681,-99) , 
NN(
0, 
0, 
-1, 121.593, 0, -1, 0.327331,-99) , 
6, 76.0433, 0, 0, 0.492634,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.559954,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.35815,-99) , 
2, -2.88559, 1, 0, 0.483423,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.260863,-99) , 
9, -0.448799, 0, 0, 0.387993,-99) , 
2, -2.54319, 0, 0, 0.468297,-99)    );
  // itree = 12
  fBoostWeights.push_back(0.235184);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.630429,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.558167,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.362696,-99) , 
2, -0.149663, 1, 0, 0.477421,-99) , 
9, 1.6456, 0, 0, 0.535176,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.618648,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.422305,-99) , 
0, 511.536, 1, 0, 0.540238,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.537484,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.359149,-99) , 
2, 2.95853, 0, 0, 0.425496,-99) , 
2, 1.85961, 1, 0, 0.48887,-99) , 
NN(
0, 
0, 
-1, -0.448799, 0, -1, 0.32894,-99) , 
2, -2.24401, 0, 0, 0.447153,-99) , 
4, 114.803, 0, 0, 0.476312,-99)    );
  // itree = 13
  fBoostWeights.push_back(0.220069);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.6084,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.384549,-99) , 
8, 0.299628, 0, 0, 0.532652,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.58356,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.441844,-99) , 
8, 0.666945, 1, 0, 0.519308,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.351628,-99) , 
7, 320.307, 1, 0, 0.490909,-99) , 
NN(
0, 
0, 
-1, 114.81, 0, -1, 0.305194,-99) , 
5, 114.314, 0, 0, 0.45323,-99) , 
5, 155.286, 0, 0, 0.47657,-99)    );
  // itree = 14
  fBoostWeights.push_back(0.212001);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.625661,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.479726,-99) , 
3, 121.033, 0, 0, 0.574262,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.615384,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.457076,-99) , 
9, 1.04616, 0, 0, 0.52778,-99) , 
NN(
0, 
0, 
-1, 1.34622, 1, -1, 0.405655,-99) , 
2, 0.436498, 1, 0, 0.46061,-99) , 
8, 0.89755, 0, 0, 0.502293,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.609181,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.336754,-99) , 
8, 0.442367, 0, 0, 0.462927,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.259887,-99) , 
8, 0.845087, 1, 0, 0.412294,-99) , 
2, -2.54319, 0, 0, 0.481614,-99)    );
  // itree = 15
  fBoostWeights.push_back(0.207506);
  fForest.push_back( 
NN(
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.579945,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.402479,-99) , 
1, 221.727, 1, 0, 0.556733,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.626882,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.399464,-99) , 
1, 416.014, 0, 0, 0.466953,-99) , 
7, 320.307, 1, 0, 0.532352,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.570826,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.264191,-99) , 
7, 121.593, 0, 0, 0.417317,-99) , 
6, 76.0433, 0, 0, 0.516875,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.568649,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.413722,-99) , 
7, 91.2248, 0, 0, 0.49574,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.325259,-99) , 
9, -0.448799, 0, 0, 0.42582,-99) , 
2, -2.54319, 0, 0, 0.49622,-99)    );
  // itree = 16
  fBoostWeights.push_back(0.124019);
  fForest.push_back( 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.598719,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.582085,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.501783,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.403142,-99) , 
3, 181.49, 1, 0, 0.463335,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.261024,-99) , 
7, 410.082, 1, 0, 0.449455,-99) , 
5, 168.205, 0, 0, 0.475095,-99) , 
6, 374.516, 0, 0, 0.485537,-99)    );
  // itree = 17
  fBoostWeights.push_back(0.150862);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.625499,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.444891,-99) , 
3, 302.69, 1, 0, 0.556856,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.582592,-99) , 
NN(
0, 
0, 
-1, 115.973, 0, -1, 0.431937,-99) , 
5, 172.735, 0, 0, 0.459897,-99) , 
4, 154.599, 0, 0, 0.474117,-99)    );
  // itree = 18
  fBoostWeights.push_back(0.101229);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.614741,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.468343,-99) , 
2, -1.34718, 0, 0, 0.562488,-99) , 
NN(
NN(
0, 
0, 
-1, -3.04193, 1, 1, 0.559987,-99) , 
NN(
0, 
0, 
-1, 2.84213, 1, -1, 0.460069,-99) , 
9, -2.84239, 1, 0, 0.479726,-99) , 
3, 284.536, 0, 0, 0.492912,-99)    );
  // itree = 19
  fBoostWeights.push_back(0.103243);
  fForest.push_back( 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.556497,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.553076,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.520679,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.388644,-99) , 
5, 155.638, 1, 0, 0.50165,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.31669,-99) , 
5, 112.99, 0, 0, 0.481666,-99) , 
5, 172.738, 0, 0, 0.495064,-99) , 
9, 2.84239, 0, 0, 0.504676,-99)    );
  // itree = 20
  fBoostWeights.push_back(0.11045);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.606052,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.480601,-99) , 
9, 0.1496, 0, 0, 0.539267,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.567912,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.480214,-99) , 
4, 110.643, 0, 0, 0.506192,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.343912,-99) , 
6, 270.742, 1, 0, 0.493246,-99) , 
NN(
0, 
0, 
-1, 3.02746, 0, -1, 0.387996,-99) , 
2, 2.84213, 1, 0, 0.477363,-99) , 
3, 284.536, 0, 0, 0.487182,-99)    );
  // itree = 21
  fBoostWeights.push_back(0.127337);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.591489,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.626818,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.497618,-99) , 
9, 2.92464, 0, 0, 0.533895,-99) , 
NN(
0, 
0, 
-1, -0.373655, 1, -1, 0.439588,-99) , 
9, 0.862027, 0, 0, 0.490775,-99) , 
9, -2.84239, 1, 0, 0.509608,-99) , 
NN(
NN(
0, 
0, 
-1, 150.975, 1, 1, 0.54109,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.302432,-99) , 
8, 0.0641475, 0, 0, 0.451397,-99) , 
8, 0.149632, 0, 0, 0.499931,-99)    );
  // itree = 22
  fBoostWeights.push_back(0.132932);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.621895,-99) , 
NN(
NN(
0, 
0, 
-1, 45.0099, 1, 1, 0.531978,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.571842,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.327088,-99) , 
8, 0.217449, 1, 0, 0.431705,-99) , 
8, 0.434559, 0, 0, 0.508163,-99) , 
4, 162.872, 0, 0, 0.521787,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.537266,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.481385,-99) , 
6, 150.975, 1, 0, 0.509347,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.329951,-99) , 
8, 0.0641475, 0, 0, 0.442775,-99) , 
8, 0.149632, 0, 0, 0.508712,-99)    );
  // itree = 23
  fBoostWeights.push_back(0.161309);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.644204,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.543169,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.437595,-99) , 
2, 1.78772, 1, 0, 0.509608,-99) , 
6, 48.0415, 1, 0, 0.527903,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.555617,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.381974,-99) , 
9, -2.54322, 0, 0, 0.498077,-99) , 
NN(
0, 
0, 
-1, -1.64596, 1, -1, 0.390127,-99) , 
8, 0.313442, 1, 0, 0.465397,-99) , 
8, 0.598383, 0, 0, 0.499764,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.562226,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.405174,-99) , 
9, -0.448799, 0, 0, 0.499989,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.29952,-99) , 
2, -2.80016, 1, 0, 0.454508,-99) , 
2, -2.54319, 0, 0, 0.489593,-99)    );
  // itree = 24
  fBoostWeights.push_back(0.14552);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.609362,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.583058,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.42594,-99) , 
8, 0.563625, 1, 0, 0.491962,-99) , 
9, -2.97096, 1, 0, 0.553101,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.424929,-99) , 
7, 152.623, 1, 0, 0.519231,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.625868,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.488998,-99) , 
6, 48.0264, 1, 0, 0.518561,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.505221,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.225778,-99) , 
2, 0.448653, 1, 0, 0.43626,-99) , 
8, 0.559402, 0, 0, 0.482816,-99) , 
NN(
0, 
0, 
-1, 0.747879, 1, -1, 0.390181,-99) , 
9, -0.448751, 0, 0, 0.464004,-99) , 
9, -2.24399, 1, 0, 0.483198,-99)    );
  // itree = 25
  fBoostWeights.push_back(0.185659);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.611214,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.57395,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.44816,-99) , 
4, 93.2915, 1, 0, 0.517372,-99) , 
6, 141.28, 0, 0, 0.560478,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.627346,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.445818,-99) , 
7, 283.693, 0, 0, 0.510576,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.357533,-99) , 
9, 0.747844, 1, 0, 0.469397,-99) , 
8, 0.598383, 0, 0, 0.51714,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.560468,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.40988,-99) , 
2, -2.37406, 1, 0, 0.500182,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.556493,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.412464,-99) , 
4, 88.2717, 0, 0, 0.483432,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.312125,-99) , 
8, 0.411612, 0, 0, 0.434575,-99) , 
4, 114.813, 0, 0, 0.459954,-99) , 
2, -0.4489, 0, 0, 0.489018,-99)    );
  // itree = 26
  fBoostWeights.push_back(0.119608);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 119.316, 1, 1, 0.53312,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.40923,-99) , 
7, 640.613, 1, 0, 0.522752,-99) , 
NN(
0, 
0, 
-1, 1.00348, 0, -1, 0.408527,-99) , 
6, 76.0433, 0, 0, 0.50799,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.555317,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.386459,-99) , 
8, 0.442367, 0, 0, 0.465159,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.315151,-99) , 
8, 0.845087, 1, 0, 0.428856,-99) , 
2, -2.54319, 0, 0, 0.490244,-99)    );
  // itree = 27
  fBoostWeights.push_back(0.140805);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.584353,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.484266,-99) , 
3, 121.033, 0, 0, 0.546788,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.5763,-99) , 
NN(
0, 
0, 
-1, 1.34622, 1, -1, 0.446887,-99) , 
3, 284.915, 0, 0, 0.475224,-99) , 
8, 0.89755, 0, 0, 0.500398,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.625558,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.436105,-99) , 
9, -0.1496, 1, 0, 0.52769,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.500307,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.370187,-99) , 
9, 1.0472, 0, 0, 0.434188,-99) , 
6, 123.133, 1, 0, 0.478421,-99) , 
NN(
0, 
0, 
-1, -1.9448, 0, -1, 0.412926,-99) , 
8, 0.832268, 1, 0, 0.45533,-99) , 
2, -0.4489, 0, 0, 0.478251,-99)    );
  // itree = 28
  fBoostWeights.push_back(0.111206);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, -0.0643946, 0, 1, 0.550479,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.569332,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.436216,-99) , 
3, 146.14, 1, 0, 0.475819,-99) , 
1, 165.426, 1, 0, 0.517964,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.506947,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.368622,-99) , 
9, 2.79991, 0, 0, 0.457389,-99) , 
9, 2.24399, 1, 0, 0.501737,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.501178,-99) , 
NN(
0, 
0, 
-1, 123.686, 1, -1, 0.384807,-99) , 
0, 381.146, 0, 0, 0.446409,-99) , 
2, -2.54319, 0, 0, 0.489452,-99)    );
  // itree = 29
  fBoostWeights.push_back(0.117067);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.5729,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.580408,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.460694,-99) , 
5, 166.298, 0, 0, 0.491782,-99) , 
9, 0.961338, 0, 0, 0.50723,-99) , 
NN(
0, 
0, 
-1, 143.882, 1, -1, 0.449226,-99) , 
9, 2.24399, 1, 0, 0.491685,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.525063,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.419182,-99) , 
1, 99.1248, 1, 0, 0.473379,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.346528,-99) , 
2, -2.80016, 1, 0, 0.44444,-99) , 
2, -2.54319, 0, 0, 0.481194,-99)    );
   return;
};
 
// Clean up
inline void ReadBDT_30trees_4maxdepth::Clear() 
{
   for (unsigned int itree=0; itree<fForest.size(); itree++) { 
      delete fForest[itree]; 
   }
}
   inline double ReadBDT_30trees_4maxdepth::GetMvaValue( const std::vector<double>& inputValues ) const
   {
      // classifier response value
      double retval = 0;

      // classifier response, sanity check first
      if (!IsStatusClean()) {
         std::cout << "Problem in class \"" << fClassName << "\": cannot return classifier response"
                   << " because status is dirty" << std::endl;
         retval = 0;
      }
      else {
         if (IsNormalised()) {
            // normalise variables
            std::vector<double> iV;
            iV.reserve(inputValues.size());
            int ivar = 0;
            for (std::vector<double>::const_iterator varIt = inputValues.begin();
                 varIt != inputValues.end(); varIt++, ivar++) {
               iV.push_back(NormVariable( *varIt, fVmin[ivar], fVmax[ivar] ));
            }
            retval = GetMvaValue__( iV );
         }
         else {
            retval = GetMvaValue__( inputValues );
         }
      }

      return retval;
   }
