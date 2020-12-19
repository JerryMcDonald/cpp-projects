#include <iostream>
#include <cstdlib>

using namespace std;

void showHand(int num) {
  switch(num) {
    case 1:
    cout << "rock! ✊ \n";
    break;
    case 2:
    cout << "paper! ✋ \n";
    break;
    case 3:
    cout << "scissors! ✌️ \n";
    break;
    case 4:
    cout << "lizard! 🦎 \n";
    break;
    case 5:
    cout << "spock! 🖖 \n";
    break;
  }
}

main() {

  srand(time(NULL));
  int computer = 1 + rand() % 5;
  int user;
  
  cout << "=================================\n";
  cout << "rock paper scissors lizard spock!\n";
  cout << "=================================\n";

  cout << "1) ✊ rock\n";
  cout << "2) ✋ paper\n";
  cout << "3) ✌️  scissors\n";
  cout << "4) 🦎 lizard\n";
  cout << "5) 🖖 Spock\n\n";

  cout << "shoot: ";
  
  cin >> user;

  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;

  cout << "You chose ";
  showHand(user);

  
  
  /* 
  rock > scissors
  scissors > paper
  paper > rock
  lizard > spock
  spock > scissors
  scissors > lizard
  lizard > paper
  paper > spock
  spock > rock
  rock > lizard
  */
  
  cout << "The computer chose ";
  showHand(computer);

  cout << "\n";
  cout << "==========\n";
  
  if (user == rock && computer == scissors) {
      
    cout << " You Win!\n";
    
  } else if (user == scissors && computer == paper) {
    
    cout << " You Win!\n";
    
  } else if (user == paper && computer == rock) {
    
    cout << " You Win!\n";
      
  } else if (user == lizard && computer == spock) {
      
    cout << " You Win!\n";
      
  } else if (user == spock && computer == scissors) {
      
    cout << " You Win!\n";
      
  } else if (user == scissors && computer == lizard) {
      
    cout << " You Win!\n";
      
  } else if (user == lizard && computer == paper) {
      
    cout << " You Win!\n";
      
  } else if (user == paper && computer == spock) {
      
    cout << " You Win!\n";
      
  } else if (user == spock && computer == rock) {
      
    cout << " You Win!\n";
      
  } else if (user == rock && computer == lizard) {
      
    cout << " You Win!\n";
      
  } else if (user == computer) {
      
    cout << " Tie!\n";
      
  } else {
      
    cout << "You Lose!\n";
      
  }

  cout << "==========\n";
  
}