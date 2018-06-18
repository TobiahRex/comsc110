#include <iostream>
#include <vector>
#include <cstdlib>  // srand, rand
#include <ctime>    // time

using namespace std;

int main() {
    srand ( time(NULL) ); // seed the random generator
	int size, cap, pick=1, opt=1;
	vector<int> list(size+1,0);

	cout << "waitlist: ";
	cin >> size;
	cout << "capacity: ";
	cin >> cap;
	cin.ignore();

	int lotto=0;
	while(pick <= cap) {
		if(pick > size) break;
		lotto = rand() % size + 1;
		if ( list[lotto] != 0 ) continue;
		list[lotto]++;
		if(opt==1) {
		    string s = ((pick==1) ? "st" :
		               ((pick==2) ? "nd" :
		               ((pick==3) ? "rd" :"th")));
		    cout << pick++ << s << " pick: " << lotto << endl;
		}
	    else {
    		cout << "The winner " << pick++ << " is " << lotto << "  ... press for next ";
    		cin.clear();
    		getchar();
	    }
	}
	cout << "\nDone!";
	return 0;
}
