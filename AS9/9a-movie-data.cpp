///**********************************************************************************
/// Description: Searches for a string inside a file.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 14, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <strings>
using namespace std;

void printResults(movie_data & movie) {
  vector<string> outputFields = {"Title: ", "Director: ", "Released: ", "Running Time: "};
  vector<string> structFields = {"title", "director", "released", "run_time"};

  for (int i = 0; i < movie.size(); i++) {
    cout << outputFields[i] << movie[structFields[i]] << endl;
  }
};

int main() {
  struct movie_data {
    string title
    string director
    int released
    int run_time
    vector<int> size
  } movie1, movie2;



  return 0;
}
