#include <iostream>

using namespace std;

int main() {
  int number;
  int primeFactor;
  bool first = true;

  cout << "Introduce a number: ";
  cin >> number;

  primeFactor = 2;
  cout << number << " = ";
  while( primeFactor <= number ) {
  	if((number % primeFactor) == 0 ) {
  	  if(first) {
  	  	first = false;
  	  	cout << primeFactor;
  	  }
  	  else{
  	  	cout << " * " << primeFactor;
  	  }
  	  number = number / primeFactor;
  	}
  	else  
  	  primeFactor++;
  }
  return 0;
}