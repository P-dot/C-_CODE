#include <iostream>

using namespace std;

class MyNumber
{
    private:
	int mynumber;

    public:

	void setvalue(int a)
	{
	    mynumber = a;
	}

	void printvalue(void)
	{
	    cout << "mynumber = " << mynumber << endl; 
	}

	MyNumber operator+ (const MyNumber &num)
	{
	    MyNumber retnum;
      
            retnum.mynumber = this->mynumber + num.mynumber;

	    return retnum;
	}
};

int main(int argc, char *argv[])
{   
    MyNumber num1, num2, num3;

    num1.setvalue(5);
    num2.setvalue(8);

    num3 = num1 + num2;

    num3.printvalue();

    return 0;
}
