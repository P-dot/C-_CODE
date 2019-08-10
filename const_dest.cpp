#include <iostream>

using namespace std;

class MYSHAPE 
{
    public:
       MYSHAPE()
       {
           cout << "Constructor!" << endl;
       }
       MYSHAPE(int a, int b)
       {
           cout << "Constructor #2!" << endl;
           x = a;
           y = b;
       }

       ~MYSHAPE()
       {
           cout << "Destructor!" << endl;
       }
       void print_x_y()
       {
           cout << "x = " << x << endl;
	   cout << "y = " << y << endl;
       }
     
    private:
        int x, y;       

};


int main(int argc, char *argv[])
{
    MYSHAPE shape(4, 5);
    shape.print_x_y();
    return 0;
}
