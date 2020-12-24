#include <iostream>
#include "profile.hpp"
using namespace std;

int hobby() {
  // call this function to ask the user if they would like to add another hobby
  string a;
  cout << "Would you like to add a hobby?\n";
  cout << "yes/no : ";
  cin >> a;
  if (a == "yes" || a == "y") {
    return 1;
  } else {
    return 0;
  }
}

int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  sam.add_hobby("listening to audiobooks and podcasts");
  sam.add_hobby("playing rec sports like bowling and kickball");
  sam.add_hobby("writing a speculative fiction novel");
  sam.add_hobby("reading advice columns");
  cout << sam.view_profile();
  cout << "-----------------------------\n";

  Profile jerry("Jerry McDonald", 33, "Louisiana", "USA", "he/him");
  jerry.add_hobby("Coding in JS and C++");
  jerry.add_hobby("Playing Tennis");
  jerry.add_hobby("Spending time with the kidos");
  cout << jerry.view_profile();
  cout << "-----------------------------\n";
  cout << "Would you like to add your own profile?\n";
  
  string answer, name, state, country, pronoun;
  int age;

  cout << "yes / no\n";

  cin >> answer;

  // check if the user would like to create a profile card. 
  if (answer == "yes" || answer == "y") {
    cout << "Please provide your information\n";
    cout << "Name Please: ";
    cin >> name;
    cout << "\n" << "Age: ";
    cin >> age;
    cout << "\n" << "What state do you live in: ";
    cin >> state;
    cout << "\n" << "What Country: ";
    cin >> country;
    cout << "\n" << "What pronoun do you go by: ";
    cin >> pronoun;

    // create the users profile
    Profile guest(name, age, state, country, pronoun);

    int add = 0;
    add = hobby();
    
    while (add == 1) {
    string hobbie;
    cout << "\n" << "Please add a hobby \n";
    cin >> hobbie;
    guest.add_hobby(hobbie);

    // call the hobby function again
    add = hobby();
    }

    // show the user their own card
    cout << "\n" << "Here is your profile card!\n";
    cout << guest.view_profile();
  }



}