#include <iostream>
#include "profile.hpp"
using namespace std;

Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns)
  : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {

  if (new_age >= 18) {
    age = new_age;
  } else {
    age = 0;
  }

}

string Profile::view_profile() {

  string bio = "Name: " + name;
  bio += "\nAge: " + to_string(age);
  bio += "\nPronouns: " + pronouns;
  string hobby_string = "Hobbies:\n";

  for (string hobby : hobbies) {

    hobby_string += " - " + hobby + "\n";

  }

  return bio + "\n" + hobby_string;

}

void Profile::add_hobby(string new_hobby) {

  hobbies.push_back(new_hobby);

}