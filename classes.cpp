#include<iostream>
#include<stdlib.h>

using namespace std;

class Person{
    private: //Attributes
	int age;
	string name;
    public:  //Methods
	Person(int, string);
	void read();
	void run();
};

Person::Person(int _age, string _name){
    age = _age;
    name = _name;
}

void Person::read(){
    cout<<"Soy "<<name<<" and i'm writing a book"<<endl;
}

void Person::run(){
    cout<<"I'm "<<name<<" and i´m running in the street"<<endl;
}

int main(){
    Person p1 = Person(36,"Polymath");
    p1.read();
    
    system("pause");
    return 0; 
}
