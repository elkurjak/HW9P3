#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int* gradeCalculator(string grades[][5], int cases){
int* scores = new int[cases];

for (int row = 0; row < cases; row++){
  int score = 0;

 if(grades[row][0] == "T") {

score += 5;
}
if(grades[row][1] == "T") {

score += 5;
}

 if(grades [row][2] == "F"){

score += 5;
   }
if(grades [row][3] == "F"){

score += 5;
}
if(grades [row][4] == "T" ){

score += 5;
}
*(scores + row ) = score;
}
return scores;

}

int main() {  
  string myMat[6][5] = {{"T","F","T","T","T"}, 
                        {"T","T","T","T","T"},
                        {"T","T","F","F","T"}, 
                        {"F","T","F","F","F"},
                        {"F","F","F","F","F"},
                        {"T","T","F","T","F"}};
int cases = 6;
  
  int* scores = new int [cases];
  scores = gradeCalculator(myMat, cases);
  cout << *scores << endl;
  cout << *(scores +1) << endl;
  cout << *(scores +2) << endl;
  cout << *(scores +3) << endl;
  cout << *(scores +4) << endl;
  cout << *(scores +5) << endl;  
}

