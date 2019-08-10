#include <iostream>
// Program that continously receives a temperature from a machine and generate a exception in error case 
// the temperature must found between two temperatures 
using namespace std;

int main(){
  int temperature;

  for(;;) {
  	try {
  	  cout << "Introduce the temperature : ";
  	  cin >> temperature;
  	  if((temperature<0)||(temperature>42))
  	  	throw temperature;
  	  cout << "Temperature readed = " << temperature ;
  	}catch(int temp) {
  	  cout << "Incorrect temperature readed = " << temp;
  	}
  }
  return 0;
}