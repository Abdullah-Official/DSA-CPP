#include<iostream>
using namespace std;


int main(){
    // Patter #16

    /*    
      ****
      ***
      **
      *
    */
  int rows;
  cout << "Enter the number of rows: ";
  cin >> rows;

  int i = rows;
  while (i >= 1) {
    int j = 1;
    while (j <= i) {
      cout << "*";
      j++;
    }
    cout << endl;
    i--;
  }
  return 0;
}