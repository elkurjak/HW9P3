#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
// prototype:
void printMatrix(int myMat[][5], int N_ROWS, int N_COLS);

  const int N_ROWS = 6;
  const int N_COLS = 5;
  int myMat[N_ROWS][N_COLS] = {{1,0,1,1,1}, {1,1,1,1,1}, {1,1,0,0,1}, {0,1,0,0,0},{0,0,0,0,0},{1,1,0,1,0}};

  printMatrix(myMat, N_ROWS, N_COLS);
  
  return 0;
}


int* gradeCalculator(string grades[][5], int cases){
int* scores = new int[cases];

for (int row = 0; row < cases; row++){
  int score = 0;

 if(grades[row][0] == "1") {

score += 5;
}
if(grades[row][1] == "1") {

score += 5;
}

 if(grades [row][2] == "0"){

score += 5;
   }
if(grades [row][3] == "0"){

score += 5;
}
if(grades [row][4] == "1" ){

score += 5;
}
}

return scores;
}
void printMatrix(int myMat[][5], int N_ROWS, int N_COLS) {
  for (int r = 0; r < N_ROWS; r++) {
    for (int c = 0; c < N_COLS; c++) {
      cout << setw(8) << myMat[r][c];
    }
    cout << endl;
  }
  return;
}




