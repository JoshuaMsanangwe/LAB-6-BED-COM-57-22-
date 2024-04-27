#include<iostream>
include<string>
using namespace std;
int main() {

// dynamically allocate an integer
int* dyanimicaInt = new int;
//prompt user to assign a value to the dynamically allocated integer

  cout <<"Enter a value for the dynamically allocated integer: ";
  cin >>*dynamicInt;

//Dynamically allocate a string string* dynamicString = new strig;

//prompt user to assign a value to the dynamically allocated string

cout <<"Enter a value for the dynamically allocated string : ";
cin.ignore();
getline(cin, *dynamicString);

// output the value of thedynamically allocated integer 

cout<<"Value of the dynamically allocated integer:" << *dynamicString << endl;

 //Free the dynamically allocated memory

delete dynamicInt;
delete dynamicString;

return 0;


} 