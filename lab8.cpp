#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//forward declarations
int linearIndx(int, int, int);
int inverseIndx(int);
int generateRandomNumber();

int main() {
  srand(time(nullptr));   // set initial seed value to 5323
  int rows, columns;

  cout << "Enter the rows and columns of the array to be generated (separated by spaces): ";
  cin >> rows;
  cin >> columns;

  //generating the multidimensional array and filling it in a lower triangular manner:
  int multiDimensionalArray[rows][columns];

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if(i >= j) {
        multiDimensionalArray[i][j] = generateRandomNumber();
      } else {
        multiDimensionalArray[i][j] = 0;
      }
    }
    cout << endl;
  }


  // declaring the linear array
  int linearArray[rows + columns] = {};

  //Computing the position in the linear array:
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if(multiDimensionalArray[i][j] != 0){
        cout << "The position of element " << multiDimensionalArray[i][j] << " from the multidimensional array is " << linearArray[0] + linearIndx(i, j, columns) << " in the linear array." << endl;
        linearArray[linearArray[0] + linearIndx(i, j, columns)] = multiDimensionalArray[i][j];
      }
    }
  }

}


int linearIndx(int rowIndex, int columnIndex, int numberOfColumns) {
  int I = rowIndex * numberOfColumns + columnIndex;
  return I;
}

int inverseIndx(int index) {
  return 0;
}

int generateRandomNumber() {
  int randomNumber = rand() % 1000 + 1;
  return randomNumber;
}
