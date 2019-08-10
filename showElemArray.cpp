#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numbers[100], n;
    
    cout<<"Write the element's numbers will have the array: ";
    cin>>n;

    for(int i=0;i<n;i++){
    	cout<<"Write a number: ";
    	cin>>numbers[i]; //Saving all elements' vector
    }

    //Now, we will show all the elements with its associeated indexes
    for(int i=0;i<n;i++){
    	cout<<i<<"-> "<<numbers[i]<<endl;
    }


    getch();
    return 0;	
}