/*Program that read the enter of data standar of two numbers and show the exit of 
  its sum, difference, product and division*/

#include<iostream>

using namespace std;

int main(){
	int n1, n2, sum = 0, diff = 0, prod = 0, div = 0;

	cout << "Write a number: ";  cin >> n1;
	cout << "Write other number: "; cin >> n2;

	sum = n1 + n2;
	diff = n1 - n2;
	prod = n1 * n2;
	div = n1 / n2;

	cout << "\n The sum is: "<< sum << endl;
	cout << "The difference is: "<< diff << endl;
	cout << "The product is: " << prod << endl;
	cout << "The division is: " << div << endl;

}