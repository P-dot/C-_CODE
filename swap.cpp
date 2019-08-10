/*Write a fragment of program that interchange/swap the values of two variables.*/

#include <iostream>

using namespace std;

int main(){
	int x, y, aux;

	cout << "Write the value of x: "; cin >> x;
	cout << "Write the value of y: "; cin >> y;

	aux = x;
	x = y;
	y = aux;

	cout << "\nThe new value of x is: " << x << endl;
	cout << "The new value of y is: " << y << endl;

	return 0;
}