#include <iostream>

using namespace std;

int main()
{
   cout << "Course of C++ \n";
   cout << "Lesson 04 - Literals"<<endl<<endl;

   cout << "Displaying Boolean Literals"<< endl;
   cout << "FALSE      :"<<    false << endl;
   cout << "TRUE       :"<<     true << endl<<endl;

   cout << "Displaying Integer Literals"<< endl;
   cout << "Decimal    :"<<       19 << endl;
   cout << "Octal      :"<<      023 << endl;
   cout << "Hexadecimal:"<<     0x13 << endl<<endl;

   cout << "Displaying Floating Point Literals"<< endl;
   cout <<    3.1416     << endl;
   cout <<    3.1416e3   << endl;	
   cout <<  314.16e-2    << endl;
   cout <<    0.16       << endl;
   cout <<     .16       << endl<<endl;

   cout << "Displaying Literal Characters"<< endl;
   cout << "Literal Character x         :"<<       'x' << endl;
   cout << "Literal Character \\        :"<<       '\\'<< endl;
   cout << "Literal Character \'        :"<<       '\''<< endl;
   cout << "Literal BackSpace           :"<<       '\b'<< "Hello" << endl;
   cout << "Literak Character Tab       :"<<       '\t'<< "Hello" << endl;
   cout << "Literal Character Return    :"<<       '\r'<< "Hello" << endl;
   cout << "Literal Universal Character :"<<   "\u02C0"<< endl;
   cout << "Literal Octal Character     :"<<      '\50'<< endl;
   cout << "Displaying Hexadecimal Character:"<< '\x50'<< endl;
   cout << "Displaying String LIterals"<< endl;
   cout << "Hello World" << endl;

   return 0;
}