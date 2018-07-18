///**********************************************************************************
/// Description: Searches for a string inside a file.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 14, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct movie_data {
  string title;
  string director;
  string released;
  string run_time;
  int member_size = 4;
} movie1, movie2;

void printResults(movie_data &movie) {
    cout << "\nTitle: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Released: " << movie.released << endl;
    cout << "Running Time: " << movie.run_time << endl;
};

int main() {
  movie1.title = "War of the Worlds";
  movie1.director = "Byron Haskin";
  movie1.released = "1953";
  movie1.run_time = "88 minutes";

  movie2.title = "War of the Worlds";
  movie2.director = "Steven Spielberg";
  movie2.released = "2005";
  movie2.run_time = "118 minutes";

  vector<movie_data> movies = {movie1, movie2};
  for (int i = 0; i < 2; i++) printResults(movies[i]);

  return 0;
}
