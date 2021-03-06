// Class: ReadBDT
// Automatically generated by MethodBase::MakeClass
//

/* configuration options =====================================================

#GEN -*-*-*-*-*-*-*-*-*-*-*- general info -*-*-*-*-*-*-*-*-*-*-*-

Method         : BDT::BDT
TMVA Release   : 4.2.1         [262657]
ROOT Release   : 6.12/07       [396295]
Creator        : mjoyce
Date           : Tue Sep 15 12:32:32 2020
Host           : Linux cmsbuild06.cern.ch 3.10.0-1062.9.1.el7.x86_64 #1 SMP Fri Dec 6 15:49:49 UTC 2019 x86_64 x86_64 x86_64 GNU/Linux
Dir            : /uscms_data/d3/mjoyce/SUSY/CMSSW_10_2_21/src/diPhoton/BDT_Training/tools
Training events: 7229
Analysis type  : [Classification]


#OPT -*-*-*-*-*-*-*-*-*-*-*-*- options -*-*-*-*-*-*-*-*-*-*-*-*-

# Set by User:
NTrees: "20" [Number of trees in the forest]
MaxDepth: "8" [Max depth of the decision tree allowed]
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
UseNvars: "2" [Size of the subset of variables used with RandomisedTree option]
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

NVar 3
mva_ST                        mva_ST                        mva_ST                        mva_ST                                                          'F'    [161.282531738,3576.12890625]
mva_dPhi_GG                   mva_dPhi_GG                   mva_dPhi_GG                   mva_dPhi_GG                                                     'F'    [-3.14152336121,3.13957285881]
mva_Photons1Et                mva_Photons1Et                mva_Photons1Et                mva_Photons1Et                                                  'F'    [75.0455322266,565.674255371]
NSpec 0


============================================================================ */

#include <array>
#include <vector>
#include <cmath>
#include <string>
#include <iostream>

#define NN new BDTNode
   
#ifndef BDTNode__def
#define BDTNode__def
   
class BDTNode {
   
public:
   
   // constructor of an essentially "empty" node floating in space
   BDTNode ( BDTNode* left,BDTNode* right,
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

   virtual ~BDTNode();

   // test event if it descends the tree at this node to the right
   virtual bool GoesRight( const std::vector<double>& inputValues ) const;
   BDTNode* GetRight( void )  {return fRight; };

   // test event if it descends the tree at this node to the left 
   virtual bool GoesLeft ( const std::vector<double>& inputValues ) const;
   BDTNode* GetLeft( void ) { return fLeft; };   

   // return  S/(S+B) (purity) at this node (from  training)

   double GetPurity( void ) const { return fPurity; } 
   // return the node type
   int    GetNodeType( void ) const { return fNodeType; }
   double GetResponse(void) const {return fResponse;}

private:

   BDTNode*   fLeft;     // pointer to the left daughter node
   BDTNode*   fRight;    // pointer to the right daughter node
   int                     fSelector; // index of variable used in node selection (decision tree)   
   double                  fCutValue; // cut value applied on this node to discriminate bkg against sig
   bool                    fCutType;  // true: if event variable > cutValue ==> signal , false otherwise
   int                     fNodeType; // Type of node: -1 == Bkg-leaf, 1 == Signal-leaf, 0 = internal 
   double                  fPurity;   // Purity of node from training
   double                  fResponse; // Regression response value of node
}; 
   
//_______________________________________________________________________
   BDTNode::~BDTNode()
{
   if (fLeft  != NULL) delete fLeft;
   if (fRight != NULL) delete fRight;
}; 
   
//_______________________________________________________________________
bool BDTNode::GoesRight( const std::vector<double>& inputValues ) const
{
   // test event if it descends the tree at this node to the right
   bool result;
     result = (inputValues[fSelector] > fCutValue );
   if (fCutType == true) return result; //the cuts are selecting Signal ;
   else return !result;
}
   
//_______________________________________________________________________
bool BDTNode::GoesLeft( const std::vector<double>& inputValues ) const
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

class ReadBDT : public IClassifierReader {

 public:

   // constructor
   ReadBDT( std::vector<std::string>& theInputVars ) 
      : IClassifierReader(),
        fClassName( "ReadBDT" ),
        fNvars( 3 ),
        fIsNormalised( false )
   {      
      // the training input variables
      const char* inputVars[] = { "mva_ST", "mva_dPhi_GG", "mva_Photons1Et" };

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

      // initialize input variable types
      fType[0] = 'F';
      fType[1] = 'F';
      fType[2] = 'F';

      // initialize constants
      Initialize();

   }

   // destructor
   virtual ~ReadBDT() {
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
   double fVmin[3];
   double fVmax[3];
   double NormVariable( double x, double xmin, double xmax ) const {
      // normalise to output range: [-1, 1]
      return 2*(x - xmin)/(xmax - xmin) - 1.0;
   }

   // type of input variable: 'F' or 'I'
   char   fType[3];

   // initialize internal variables
   void Initialize();
   double GetMvaValue__( const std::vector<double>& inputValues ) const;

   // private members (method specific)
   std::vector<BDTNode*> fForest;       // i.e. root nodes of decision trees
   std::vector<double>                fBoostWeights; // the weights applied in the individual boosts
};

double ReadBDT::GetMvaValue__( const std::vector<double>& inputValues ) const
{
   double myMVA = 0;
   double norm  = 0;
   for (unsigned int itree=0; itree<fForest.size(); itree++){
      BDTNode *current = fForest[itree];
      while (current->GetNodeType() == 0) { //intermediate node
         if (current->GoesRight(inputValues)) current=(BDTNode*)current->GetRight();
         else current=(BDTNode*)current->GetLeft();
      }
      myMVA += fBoostWeights[itree] *  current->GetNodeType();
      norm  += fBoostWeights[itree];
   }
   return myMVA /= norm;
};

void ReadBDT::Initialize()
{
  // itree = 0
  fBoostWeights.push_back(0.665372340987351);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 2.54158, 1, 1, 0.778596,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.644455,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.334999,-99) , 
2, 104.457, 0, 0, 0.500866,-99) , 
0, 532.765, 1, 0, 0.702291,-99) , 
NN(
0, 
0, 
-1, 98.4088, 0, -1, 0.121939,-99) , 
0, 811.729, 1, 0, 0.5,-99)    );
  // itree = 1
  fBoostWeights.push_back(0.488771);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.787645,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.66581,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.562413,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.427657,-99) , 
2, 85.4671, 0, 0, 0.519135,-99) , 
2, 118.379, 0, 0, 0.569027,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.312052,-99) , 
0, 708.24, 1, 0, 0.527297,-99) , 
0, 377.98, 1, 0, 0.634024,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.314358,-99) , 
1, 2.84047, 1, 0, 0.598129,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.579234,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.355836,-99) , 
2, 150.088, 0, 0, 0.459595,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.159752,-99) , 
0, 1206.72, 1, 0, 0.322531,-99) , 
NN(
0, 
0, 
-1, 1192.38, 1, -1, 0.0212147,-99) , 
2, 98.4088, 0, 0, 0.212684,-99) , 
0, 811.729, 1, 0, 0.473012,-99)    );
  // itree = 2
  fBoostWeights.push_back(0.425134);
  fForest.push_back( 
NN(
NN(
NN(
NN(
NN(
0, 
0, 
-1, 360.114, 1, 1, 0.754639,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.410792,-99) , 
1, 2.28576, 1, 0, 0.654322,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.597209,-99) , 
NN(
0, 
0, 
-1, 730.88, 1, -1, 0.397738,-99) , 
2, 128.703, 0, 0, 0.466184,-99) , 
0, 509.652, 1, 0, 0.574492,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.254847,-99) , 
1, -2.84242, 0, 0, 0.53709,-99) , 
NN(
0, 
0, 
-1, 98.4517, 0, -1, 0.196927,-99) , 
0, 974.341, 1, 0, 0.461303,-99)    );
  // itree = 3
  fBoostWeights.push_back(0.305547);
  fForest.push_back( 
NN(
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.814641,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.493675,-99) , 
1, 1.78676, 1, 0, 0.665589,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.6305,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.560434,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.459612,-99) , 
0, 594.557, 0, 0, 0.506131,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.356771,-99) , 
0, 742.031, 1, 0, 0.464443,-99) , 
1, 2.05477, 0, 0, 0.511073,-99) , 
0, 432.237, 1, 0, 0.57912,-99) , 
NN(
0, 
0, 
-1, 491.183, 0, -1, 0.381213,-99) , 
1, -2.54332, 0, 0, 0.542532,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.512034,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.326085,-99) , 
0, 1222.27, 1, 0, 0.402459,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0,-99) , 
2, 98.4517, 0, 0, 0.272797,-99) , 
0, 974.341, 1, 0, 0.485251,-99)    );
  // itree = 4
  fBoostWeights.push_back(0.266787);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 2.59928, 1, 1, 0.645071,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.417729,-99) , 
1, -2.54135, 0, 0, 0.599267,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.526653,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.595057,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.456424,-99) , 
1, -1.1938, 0, 0, 0.511274,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.316278,-99) , 
1, 0.271338, 1, 0, 0.465559,-99) , 
1, 1.63913, 0, 0, 0.48318,-99) , 
0, 548.36, 1, 0, 0.555321,-99) , 
NN(
0, 
0, 
-1, 98.4517, 0, -1, 0.291611,-99) , 
0, 974.341, 1, 0, 0.500843,-99)    );
  // itree = 5
  fBoostWeights.push_back(0.272089);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.657171,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, -0.861283, 0, 1, 0.648366,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.571509,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.436161,-99) , 
0, 495.986, 0, 0, 0.492592,-99) , 
0, 388.005, 1, 0, 0.571458,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.437006,-99) , 
1, 2.84056, 1, 0, 0.554557,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.623353,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.498511,-99) , 
2, 112.526, 1, 0, 0.549251,-99) , 
NN(
0, 
0, 
-1, 1.98952, 0, -1, 0.320748,-99) , 
1, 0.140532, 1, 0, 0.448015,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.244836,-99) , 
2, 90.4728, 0, 0, 0.400703,-99) , 
0, 594.791, 1, 0, 0.497582,-99) , 
2, 183.476, 0, 0, 0.515673,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.225408,-99) , 
0, 1462.18, 1, 0, 0.494681,-99)    );
  // itree = 6
  fBoostWeights.push_back(0.205366);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.649388,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.584726,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.579091,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.358695,-99) , 
1, 0.140532, 1, 0, 0.479618,-99) , 
2, 177.306, 0, 0, 0.526636,-99) , 
0, 536.255, 1, 0, 0.565682,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0.142457, 0, 1, 0.573627,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.557661,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.464336,-99) , 
1, 1.45072, 1, 0, 0.508749,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.430216,-99) , 
1, -1.94362, 0, 0, 0.48874,-99) , 
2, 83.3858, 1, 0, 0.514435,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.255378,-99) , 
0, 904.316, 1, 0, 0.484633,-99) , 
2, 118.418, 0, 0, 0.513692,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.276411,-99) , 
0, 1462.18, 1, 0, 0.497214,-99)    );
  // itree = 7
  fBoostWeights.push_back(0.158026);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, -1.71696, 0, 1, 0.569829,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.465378,-99) , 
1, 2.84068, 1, 0, 0.551967,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.55144,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.486952,-99) , 
1, 2.34563, 1, 0, 0.519421,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.524831,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.455881,-99) , 
2, 105.42, 0, 0, 0.496555,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.336442,-99) , 
1, -0.15543, 1, 0, 0.460279,-99) , 
1, 1.04351, 0, 0, 0.483121,-99) , 
0, 432.237, 1, 0, 0.512966,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.618516,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.407471,-99) , 
1, -0.157421, 0, 0, 0.515153,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.258362,-99) , 
2, 121.813, 0, 0, 0.395592,-99) , 
0, 974.341, 1, 0, 0.49011,-99)    );
  // itree = 8
  fBoostWeights.push_back(0.171135);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 2.75461, 0, 1, 0.60563,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.4361,-99) , 
0, 363.503, 0, 0, 0.546245,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.563299,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.610466,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.482506,-99) , 
2, 105.047, 0, 0, 0.559948,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.481371,-99) , 
1, -2.84931, 0, 0, 0.532717,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.501006,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.389906,-99) , 
1, 0.226332, 0, 0, 0.451627,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.239359,-99) , 
0, 931.211, 1, 0, 0.406333,-99) , 
1, -1.60414, 1, 0, 0.457988,-99) , 
0, 347.072, 1, 0, 0.479833,-99) , 
1, 2.24227, 0, 0, 0.495998,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.334617,-99) , 
0, 1462.18, 1, 0, 0.485281,-99)    );
  // itree = 9
  fBoostWeights.push_back(0.168757);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.569853,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.571354,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.485818,-99) , 
2, 115.887, 0, 0, 0.527785,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.578888,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.437489,-99) , 
2, 150.088, 1, 0, 0.516678,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.419407,-99) , 
0, 771.08, 0, 0, 0.470559,-99) , 
0, 526.018, 1, 0, 0.496262,-99) , 
0, 1168.3, 0, 0, 0.508637,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.552909,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.592845,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.4489,-99) , 
0, 491.408, 0, 0, 0.487753,-99) , 
2, 88.4272, 0, 0, 0.510538,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.0729709,-99) , 
0, 792.118, 1, 0, 0.445159,-99) , 
2, 98.4088, 0, 0, 0.482527,-99)    );
  // itree = 10
  fBoostWeights.push_back(0.1584);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 363.503, 0, 1, 0.543658,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.614551,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.574917,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.51082,-99) , 
NN(
0, 
0, 
-1, 559.094, 0, -1, 0.416223,-99) , 
2, 116.325, 0, 0, 0.446553,-99) , 
1, -2.3953, 1, 0, 0.473106,-99) , 
0, 352.951, 1, 0, 0.507884,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.407827,-99) , 
1, -2.88534, 0, 0, 0.492834,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.38542,-99) , 
0, 966.37, 1, 0, 0.478083,-99) , 
1, 2.24227, 0, 0, 0.494058,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.351409,-99) , 
0, 1462.18, 1, 0, 0.48483,-99)    );
  // itree = 11
  fBoostWeights.push_back(0.182682);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.646773,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.556091,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.46925,-99) , 
2, 153.16, 0, 0, 0.511849,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.398946,-99) , 
1, -1.58183, 1, 0, 0.478734,-99) , 
2, 112.747, 1, 0, 0.530683,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.572638,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.55402,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.435487,-99) , 
1, 1.98325, 1, 0, 0.478121,-99) , 
1, 2.75763, 0, 0, 0.508485,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.366859,-99) , 
1, 1.126, 0, 0, 0.477658,-99) , 
1, -0.148369, 1, 0, 0.504077,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.588579,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.465857,-99) , 
1, 0.143497, 0, 0, 0.533935,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.468973,-99) , 
2, 87.3212, 1, 0, 0.507203,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.0828382,-99) , 
0, 792.118, 1, 0, 0.449114,-99) , 
2, 98.4088, 0, 0, 0.481785,-99)    );
  // itree = 12
  fBoostWeights.push_back(0.14199);
  fForest.push_back( 
NN(
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.586385,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.615043,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.472329,-99) , 
1, -1.56529, 1, 0, 0.554347,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.43118,-99) , 
2, 135.049, 1, 0, 0.508926,-99) , 
0, 534.188, 1, 0, 0.542732,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.463254,-99) , 
1, -2.85671, 0, 0, 0.523791,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.563166,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.423886,-99) , 
0, 293.896, 0, 0, 0.515237,-99) , 
NN(
0, 
0, 
-1, 2.05331, 0, -1, 0.437141,-99) , 
0, 470.88, 1, 0, 0.474339,-99) , 
1, -0.150525, 1, 0, 0.497237,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.377258,-99) , 
0, 1462.18, 1, 0, 0.489937,-99)    );
  // itree = 13
  fBoostWeights.push_back(0.146835);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, -0.455374, 1, 1, 0.608689,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.561166,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.462677,-99) , 
1, -0.148832, 0, 0, 0.50996,-99) , 
2, 142.97, 1, 0, 0.560557,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.532927,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.500804,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.372086,-99) , 
0, 601.331, 1, 0, 0.473332,-99) , 
2, 139.031, 0, 0, 0.493619,-99) , 
0, 847.255, 0, 0, 0.517998,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.583759,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.573521,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.44153,-99) , 
2, 82.1028, 1, 0, 0.514018,-99) , 
2, 88.4272, 0, 0, 0.539958,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.444169,-99) , 
1, 2.54155, 1, 0, 0.522887,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.109568,-99) , 
0, 792.118, 1, 0, 0.471337,-99) , 
2, 98.4088, 0, 0, 0.499155,-99)    );
  // itree = 14
  fBoostWeights.push_back(0.125979);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.618884,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.48937,-99) , 
0, 966.681, 0, 0, 0.525414,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.571278,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.583247,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.517159,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.396775,-99) , 
0, 582.851, 1, 0, 0.494366,-99) , 
2, 90.5339, 0, 0, 0.514028,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.41222,-99) , 
2, 96.7803, 1, 0, 0.489684,-99) , 
2, 103.652, 0, 0, 0.50339,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.428345,-99) , 
2, 115.247, 1, 0, 0.490034,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.370896,-99) , 
0, 966.236, 1, 0, 0.479459,-99) , 
2, 140.104, 0, 0, 0.489784,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.403266,-99) , 
0, 1462.18, 1, 0, 0.484626,-99)    );
  // itree = 15
  fBoostWeights.push_back(0.132614);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 169.35, 1, 1, 0.601684,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.550568,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.369568,-99) , 
1, 2.2395, 0, 0, 0.460888,-99) , 
1, 0.445929, 1, 0, 0.547098,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.504936,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.420386,-99) , 
1, -2.24058, 0, 0, 0.477401,-99) , 
0, 686.733, 0, 0, 0.510335,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.552709,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.432292,-99) , 
2, 79.7443, 0, 0, 0.499088,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.440731,-99) , 
2, 87.3212, 1, 0, 0.476516,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.384835,-99) , 
0, 634.409, 1, 0, 0.454523,-99) , 
2, 98.4088, 0, 0, 0.487972,-99)    );
  // itree = 16
  fBoostWeights.push_back(0.157571);
  fForest.push_back( 
NN(
NN(
NN(
NN(
NN(
0, 
0, 
-1, 112.014, 1, 1, 0.597835,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.546218,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.447525,-99) , 
2, 102.181, 0, 0, 0.509479,-99) , 
1, -2.14359, 0, 0, 0.553655,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.409766,-99) , 
2, 86.53, 0, 0, 0.522023,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.409056,-99) , 
2, 196.848, 1, 0, 0.50992,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.553072,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.45705,-99) , 
1, 2.36501, 1, 0, 0.505447,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.580342,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.424535,-99) , 
1, 2.84305, 1, 0, 0.517669,-99) , 
NN(
0, 
0, 
-1, 86.4526, 1, -1, 0.420983,-99) , 
1, 1.8931, 0, 0, 0.470712,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.377637,-99) , 
2, 101.738, 1, 0, 0.443053,-99) , 
2, 121.813, 0, 0, 0.462779,-99) , 
1, -0.150525, 1, 0, 0.484823,-99)    );
  // itree = 17
  fBoostWeights.push_back(0.0930944);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.549816,-99) , 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0.141271, 1, 1, 0.541461,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.549909,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.48575,-99) , 
2, 85.1066, 0, 0, 0.511793,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.463733,-99) , 
2, 98.622, 1, 0, 0.496891,-99) , 
0, 506.202, 0, 0, 0.512682,-99) , 
NN(
0, 
0, 
-1, 548.824, 1, -1, 0.448046,-99) , 
2, 116.252, 1, 0, 0.495794,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.426305,-99) , 
0, 966.37, 1, 0, 0.488265,-99) , 
2, 183.476, 0, 0, 0.495247,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.410482,-99) , 
0, 1462.18, 1, 0, 0.490317,-99)    );
  // itree = 18
  fBoostWeights.push_back(0.102398);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.555279,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.481613,-99) , 
0, 856.653, 1, 0, 0.524645,-99) , 
NN(
NN(
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.585517,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.557499,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.51075,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.428341,-99) , 
2, 92.1259, 0, 0, 0.478782,-99) , 
1, -1.00673, 0, 0, 0.510953,-99) , 
2, 80.7547, 1, 0, 0.527352,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.542662,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.459548,-99) , 
1, 2.79805, 0, 0, 0.486309,-99) , 
1, 1.34497, 1, 0, 0.510612,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.450987,-99) , 
2, 115.247, 1, 0, 0.49991,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.39676,-99) , 
0, 966.236, 1, 0, 0.491151,-99) , 
2, 140.104, 0, 0, 0.498687,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.433182,-99) , 
0, 1462.18, 1, 0, 0.494893,-99)    );
  // itree = 19
  fBoostWeights.push_back(0.084687);
  fForest.push_back( 
NN(
NN(
NN(
NN(
0, 
0, 
-1, 115.364, 1, 1, 0.598495,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.53571,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.484307,-99) , 
1, -0.148832, 0, 0, 0.508772,-99) , 
2, 142.97, 1, 0, 0.554985,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.519862,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.460025,-99) , 
0, 378.783, 0, 0, 0.495715,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.452127,-99) , 
0, 570.857, 1, 0, 0.480332,-99) , 
0, 847.255, 0, 0, 0.507589,-99) , 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.536104,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.49709,-99) , 
2, 84.0009, 0, 0, 0.514249,-99) , 
NN(
0, 
0, 
-1, 619.415, 1, -1, 0.434784,-99) , 
0, 476.7, 1, 0, 0.480513,-99) , 
2, 98.4088, 0, 0, 0.496803,-99)    );
   return;
};
 
// Clean up
inline void ReadBDT::Clear() 
{
   for (unsigned int itree=0; itree<fForest.size(); itree++) { 
      delete fForest[itree]; 
   }
}
   inline double ReadBDT::GetMvaValue( const std::vector<double>& inputValues ) const
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
