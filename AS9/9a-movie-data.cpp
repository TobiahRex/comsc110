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
#include <iomanip>
using namespace std;

struct movie_data {
  string title;
  string director;
  string released;
  string run_time;
  double prod_cost;
  double revenue;
  double profit;
} movies[2];

void printResults(movie_data &movie) {
    cout << "\nTitle: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Released: " << movie.released << endl;
    cout << "Running Time: " << movie.run_time << endl;
    cout << setprecision(2) << fixed;
    cout << "Production Cost: $" << movie.prod_cost << endl;
    cout << "First Year Revenue: $" << movie.revenue << endl;
    cout << "First Year Profit: $" << movie.profit << endl;
};

int main() {
  movies[0].title = "War of the Worlds";
  movies[0].director = "Byron Haskin";
  movies[0].released = "1953";
  movies[0].run_time = "88 minutes";
  movies[0].prod_cost = "1500000";
  movies[0].revenue = "130000000";
  movies[0].profit = "28000000";

  movies[1].title = "War of the Worlds";
  movies[1].director = "Steven Spielberg";
  movies[1].released = "2005";
  movies[1].run_time = "118 minutes";
  movies[1].prod_cost = "1500000";
  movies[1].revenue = "130000000";
  movies[1].profit = "28000000";

  for (int i = 0; i < 2; i++) printResults(movies[i]);

  return 0;
}
