///**********************************************************************************
/// Description: Creates a struct of movies and prints their data.
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
} movies[2];

void printResults(movie_data &movie) {
    cout << "\nTitle: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Released: " << movie.released << endl;
    cout << "Running Time: " << movie.run_time << endl;
};

int main() {
  movies[0].title = "War of the Worlds";
  movies[0].director = "Byron Haskin";
  movies[0].released = "1953";
  movies[0].run_time = "88 minutes";

  movies[1].title = "War of the Worlds";
  movies[1].director = "Steven Spielberg";
  movies[1].released = "2005";
  movies[1].run_time = "118 minutes";

  for (int i = 0; i < 2; i++) printResults(movies[i]);

  return 0;
}
