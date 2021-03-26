#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//forward declarations
int linearIndx(int, int, int);
int inverseIndx(int);
int generateRandomNumber();
void generateAndPrintFirstMatrix();
void generateAndPrintSecondMatrix();
void generateAndPrintThirdMatrix();

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

  /*Section for generating 3 lower triangular arrays */
  //Displaying 8x8 array
  generateAndPrintFirstMatrix();

  //Display 32x32 array
  generateAndPrintSecondMatrix();

  //Display 128x128 generateAndPrintFirstMatrix
  generateAndPrintThirdMatrix();
}


int linearIndx(int rowIndex, int columnIndex, int numberOfColumns) {
  int I = rowIndex * numberOfColumns + columnIndex;
  return I;
}

int inverseIndx(int index) {
  return 0;
}

//Function to generate a random number
int generateRandomNumber() {
  int randomNumber = rand() % 1000 + 1;
  return randomNumber;
}

//Function to generate and display 8x8 matrix
void generateAndPrintFirstMatrix() {
  int multiDimensionalArray[8][8] = {};
  //generating the array
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if(i >= j) {
        multiDimensionalArray[i][j] = generateRandomNumber();
      } else {
        multiDimensionalArray[i][j] = 0;
      }
    }
    cout << endl;
  }

  //printing out the array
  for (int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
      cout << multiDimensionalArray[i][j] << " ";
    }
    cout << endl;
  }
}

//Function to generate and display 32x32 matrix
void generateAndPrintSecondMatrix() {
  int multiDimensionalArray[32][32] = {};
  //generating the array
  for (int i = 0; i < 32; i++) {
    for (int j = 0; j < 32; j++) {
      if(i >= j) {
        multiDimensionalArray[i][j] = generateRandomNumber();
      } else {
        multiDimensionalArray[i][j] = 0;
      }
    }
    cout << endl;
  }

  //printing out the array
  for (int i = 0; i < 32; i++) {
    for(int j = 0; j < 32; j++) {
      cout << multiDimensionalArray[i][j] << " ";
    }
    cout << endl;
  }
}

//Function to generate and display 128x128 function
void generateAndPrintThirdMatrix() {
  int multiDimensionalArray[128][128] = {};
  //generating the array
  for (int i = 0; i < 128; i++) {
    for (int j = 0; j < 128; j++) {
      if(i >= j) {
        multiDimensionalArray[i][j] = generateRandomNumber();
      } else {
        multiDimensionalArray[i][j] = 0;
      }
    }
    cout << endl;
  }

  //printing out the array
  for (int i = 0; i < 128; i++) {
    for(int j = 0; j < 128; j++) {
      cout << multiDimensionalArray[i][j] << " ";
    }
    cout << endl;
  }
}
