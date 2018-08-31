#include <iostream>
#include <string>
using namespace std;

int main(){
  string firstName;
  string lastName;

  cout << "My first name is:\n";
  cin >> firstName;
  cout << "My last name is:\n";
  cin >> lastName;

  cout << "My name is ";
  cout << firstName;
  cout << " ";
  cout << lastName;
  cout << "\n";
  cout << "\n";

  //Top row
  cout << "             Hello\n";

  //Second row
  cout << "      Hello";
  cout << "         Hello\n";

  //Third row
  cout << "Hello";
  cout << "       Hello";
  cout << "          Hello\n";

  //Fourth row
  cout << "      Hello";
  cout << "        Hello\n";

  //Fifth row
  cout << "             Hello\n";

  return 0;
}
