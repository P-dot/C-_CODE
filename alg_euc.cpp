#include<iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4, r;
    cout<<"Enter an integer posive number please \n";
    cin>>n1;
    cout<<"Enter another positive number please \n";
    cin>>n2;
    if (n1>n2)
    {
       n3=n1;
       n4=n2;
    }
    else 
    {
       n4=n1;
       n3=n2;
    }
    while (r!=0){
        r=n3%n4;
        n3=n4;
        n4=r;
        cout<<"The greatest commun divisor of the two numbers is: "<<n3;
    }
}
