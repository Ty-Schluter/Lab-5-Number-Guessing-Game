/*Name Ty Schluter
* Due: 11/10/23
* C++ Fall 23
Lab Name: Lab 5 Number Guessing Game
• Description: Write a number-guessing game in which the computer selects a random
number in the range of 0 to 100, and users get a maximum of 20 attempts to guess it. At
the end of each game, users should be told whether they won or lost, and then be asked
whether they want to play again. When the user quits, the program should output the
total number of wins and losses. To make the game more interesting, the program
should vary the wording of the messages that it outputs for winning, for losing, and for
asking for another game. Create 10 different messages for each of these cases, and use
random numbers to choose among them. This application should use at least one Do-
While loop and at least one Switch statement. Write your C++ code using good style and
documenting comments. You should use classes in your code as well. Your source code
file should be called Lab5.cpp.
*/
#include "NumberGuessGame.h"
#include <iostream>
#include <time.h>

using namespace std;

void StartMessage(); // creates StartMessage function

int main()
{
	StartMessage(); // calls start message function

	NumberGuessGame g; 
	g.game(); // calls game function from cass
	
 return 0;
}

void StartMessage() // creates start message function
{
	std::cout << "Hello! Welcome to THE Number Guessing Game. You'll have 20 guesses to guess the number correctly. If you don't...";
	std::cout << std::endl << "I'm think of a number between 1 and 100. Please guess now :)" << endl;
}
