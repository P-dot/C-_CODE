#include <iostream>

using namespace std;

class MYSHAPE
{
    private:
        int x, y;

    public:
	void get_x_y(int a, int b)
	{
	
	     x = a; 
	     y = b;
	};

       void print_x_y()
        {
	    cout << "x = " << x << endl;
            cout << "y = " << y << endl;
	}
};


int main(int argc, char *argv[])
{
    MYSHAPE shape;
    shape.get_x_y(4, 5);
    shape.print_x_y();
    return 0;
}
