#include<iostream>
using namespace std;
int main() {

int rows, cols;
//prompt user to input dimensions of the 2D array
cout <<"Enter number of rows(not exceeding 3):";
cin>>rows;

while(rows <= 0 || rows . 3 ){
cout << "Number of rows must be between 1 and 3.Please enter again:"; 
cin> >> rows;
}
 cout <<"Enter number  of columns(not exceeding 3):";
cin>>cols;
  
while(cols <= 0 || cols > 3 ){
cout <<"Number oof coloumns must be btween 1 and 3.Please enter again:"; 
cin >> cols;

}
// dynamically allocate the 2D array
 double**dynamicArray = new double*[rows];
 
for (int i = 0; i < rows; ++i){
dynamic Array[i] = new double [cols];
}
// Assign values to each element of the array
for(int i = 0; i < rows; ++i){
for( int j = 0 ; j < cols; ++j){
cout <<"Enter value for element [" << i << "][" << j << "]:"; 
cin >> dynamicArray[i][j];
    }
}
 // output the values of each element of the array 
cout << "Elements of the 2D array:"<<endl;
for (int i = 0; < rows; ++i){
  for(int j = 0; < cols; ++j){
cout << dynamicArray[i][j << " ";
    }
cout << endl;
}
//Free the dynamically alocated memory
 for (int i = 0; i < rows; ++i){ 
    delete [] dynamicaArray[i];
   }
delete [] dynamicArray;

return 0;


} 