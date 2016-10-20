#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cerr << "Invalid number of arguments" <<endl;
    return 1;
  }

  string choice = argv[1];
  string best = "best";
  string worst = "worst";

  if (choice.compare(best) == 0) {
    cout << "BEST" << endl;
  } else if (choice.compare(worst) == 0) {
    cout << "WORST" << endl;
  } else {
    cout << "Invalid algorithm name" << endl;
  }

  int n;
  bool validInput = false;
  // Print menu
  while (!validInput || n!=5) {
    cout << "Enter 1-5" << endl;
    cin >> n;
    if (cin.fail()) {
      cin.clear();
      cin.ignore(256, '\n');
      validInput = false;
    }
    if (n>=1 && n<=5) {
      validInput = true;
      cout << "Do option(" << n << ") using algorithm " << choice << endl;
    } else {
      cout << "Invalid input" << endl;
      validInput = false;
    }

  }


  return 0;
}
