#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numbers[100][100], rows, columns;

    cout<<"Write the number of rows: ";
    cin>>rows;
    cout<<"Write the number of columns: ";
    cin>>columns;
    
    //Storing elements int the matrix 
    for(int i=0;rows;i++){
    	for(int j=0;j<columns;j++){
    		cout<<"Write a number ["<<i<<"]["<<j<<"";
    	    cin>>numbers[i][j];
    	}
    }

     for(int i=0;rows;i++){
    	for(int j=0;j<columns;j++){
    		cout<<numbers[i][j];
     	}
     	cout<<"\n";
    }

    getch();
	return 0;
}