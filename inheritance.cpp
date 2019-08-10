#include <iostream>

using namespace std;
// Base Class 
class MyClassA
{   
    private:

    public:
	void myfuncpriv()
	{
	   cout << "class MyClass myfuncpriv" << endl;
	}
    
	void myfunction()
	{
	
	   cout << "class MyClassA" << endl;
	}
};

// Derived class
class MyClassB: public MyClassA
{



};
int main(int argc, char *argv[])
{
    MyClassB myclassb;

    myclassb.myfunction();
    myclassb.myfuncpriv();

    return 0;
}
