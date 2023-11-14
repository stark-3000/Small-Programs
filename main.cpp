/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <limits.h>
#include<math.h>

 int MinofArray(int arr[], int n){

  int MinNo = INT_MAX;
  for (int i=0; i< n; i++) {

    if ( arr[i] < MinNo){
      MinNo = arr[i];
    }
  }
  return MinNo;
 }

int main() {
 
  int n = 7;
  int arr[n];
  
  for (int i=0; i<n ; i++){
    cout << "Enter element no " << i << " ";
    cin >> arr[i];
  }
  cout << "Elements in the array are ";
  
  
  for (int i=0; i<n ; i++){
    cout << arr[i] << " ";
    
  }
  cout << endl;
  // n = sizeof(arr)/4;

  int Min = MinofArray(arr, n);

  cout << "Minimum no is "<< Min << endl;

  return 0;
}