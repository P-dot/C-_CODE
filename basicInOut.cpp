#include <iostream>
using namespace std;
//Programa that realice the basic enter and exit of different types of data 

int  main(){

  int i = 0;
  float f = 0.0f;
  double d = 0.0f;
  char c;
  char enter[255];

  //Read of numbers from the console
  cout << "Writes a integer number: ";
  cin >> i; // Reads a number form keyboard
  cout << "The number is " << f << endl;

  cout << "Writes a float number: ";
  cin >> i; // Reads a number form keyboard
  cout << "The number is " << f << endl;

  cout << "Writes a double number: ";
  cin >> i; // Reads a number form keyboard
  cout << "The number is " << f << endl;

  // Read of string characters from the console
  cout << "Writes a string: ";
  cin >> enter; // Reads a value introduced by keyboard
  cout << "The string is " << enter << endl;

  return 0;
}