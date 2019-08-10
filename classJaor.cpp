#include <iostream>

using namespace std;

struct stcTest
{
   int iDato;
   string sDato
};

class Test
{
   public:


   	  int    xInteger=10;    
   	  int    xArray[3]={1,2,3};
   	  struct stcTest xstruct={28,"sData"};
   	  string xStrings ="String";

   	  int FnIntDoubleInteger()
   	  {
   	      return xInteger * 2;	
   	  }

   	  void FnDisplayString()
   	  {
   	  	   cout << String << endl << endl;
   	  }
}xObject1;

cout << "Class Definition" << endl << endl;

cout << "we access the objects of the Object1" << endl;

cout << "xInteger      : " << xObject1.xInteger   << endl;
cout << "xArray[0]     : " << xObject1.xArray[[0] << endl;   
