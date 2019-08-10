#include <iostream>

using namespace std;

// Base class a

class MyClassA
{
    public:
	void myfunction()
        {
	    cout << "class MyClassA" << endl;
	}
};

//Derived class 

class MyClassB: public MyClassA
{
    public:
	void myfunction()
	{
	    cout << "class MyClassB" << endl;
	}
};


int main(int argc, char *argv[])
{   
    MyClassA *p;

    MyClassB classb;

    p = &classb;

    p->myfunction();

    return 0;
}
