#include "NumberGuessGame.h"
#include <iostream>
#include <time.h>

using namespace std;

NumberGuessGame::NumberGuessGame()
{
	
	int wins = 0; // Counts wins
	int losses = 0; // Counts losses
	int guesses = 20; // guesses
	int guess = 0; // user input guess
	int PlayAgains = 0; // Counts times of playing the game

	
}

NumberGuessGame::~NumberGuessGame()
{
}

void NumberGuessGame::game()
{
	char i;
	srand(time(NULL));
		
	
		do // keeps repeating until guesses hit 0
		{
			int number = rand() % 100 + 1; // makes random number 20 times
			std::cout << "Your guess: ";
			std::cin >> guess; // takes users guess
			guesses--; // subtracts guesses
			if (guess == number) // keeps track of winning guesses
			{
				WinStatements();
				wins++; // adds one to wins
			}
			if (guess != number) // tracks losing guesses
			{
				LoseStatements();
				losses++; // adds one to losses
			}
			if (guesses == 1 || guesses > 1) // outputs guesses
			{
				std::cout << "You have " << guesses << " guesses left!" << endl;
			}
		} while (guesses > 0);
	
			PlayAgain(); // calls the playagain function
}

int NumberGuessGame::getGame()
{
	return 0;
}

void NumberGuessGame::WinStatements()
{
	int number1 = rand() % 10 + 1;
	
		switch (number1) // creates a "random" winning phrase generator
		{
		case 1: // 10 cases f phrases to output if the random number is a specific number
			if (number1 == 1) 
			{
				std::cout << "Congratulations! You won this time."<< endl;
			}
		case 2:
			if (number1 == 2)
			{
				std::cout << "You won a game..."<< endl;
			}
		case 3:
			if (number1 == 3)
			{
				std::cout << "Great job on winning this one." << endl;
			}
		case 4:
			if (number1 == 4)
			{
				std::cout << "You're winning son!" << endl;
			}
		case 5:
			if (number1 == 5)
			{
				std::cout << "You made it." << endl;
			}
		case 6:
			if (number1 == 6)
			{
				std::cout << "Good job" << endl;
			}
		case 7:
			if (number1 == 7)
			{
				std::cout << "Good enough" << endl;
			}
		case 8:
			if (number1 == 8)
			{
				std::cout << "Awesome job!" << endl;
			}
		case 9:
			if (number1 == 9)
			{
				std::cout << "Congratulations!" << endl;
			}
		case 10:
			if (number1 == 10)
			{
				std::cout << "Congratulations! You won a game..." << endl;
			}
		}
}

int NumberGuessGame::getWinStatments()
{
	return 0;
}

void NumberGuessGame::LoseStatements()
{
	int number2 = rand() % 10 + 1;
	switch (number2) // creates a "random" losing phrase generator
	{
	case 1:
		if (number2 == 1) // Same as winning statements 
		{
			std::cout << "Terrible Job! You lost" << endl;
		}
	case 2:
		if (number2 == 2)
		{
			std::cout << "You lost" << endl;
		}
	case 3:
		if (number2 == 3)
		{
			std::cout << "Just guess correctly" << endl;
		}
	case 4:
		if (number2 == 4)
		{
			std::cout << "Nope you're wrong" << endl;
		}
	case 5:
		if (number2 == 5)
		{
			std::cout << "I know you can do it" << endl;
		}
	case 6:
		if (number2 == 6)
		{
			std::cout << "You better win the next one" << endl;
		}
	case 7:
		if (number2 == 7)
		{
			std::cout << "How do you lose?" << endl;
		}
	case 8:
		if (number2 == 8)
		{
			std::cout << "This is the easiest game ever. How are you losing?" << endl;
		}
	case 9:
		if (number2 == 9)
		{
			std::cout << "You'll get it eventually" << endl;
		}
	case 10:
		if (number2 == 10)
		{
			std::cout << "Anyday now!" << endl;
		}
	}
}

int NumberGuessGame::getLoseStatements()
{
	return 0;
}

void NumberGuessGame::PlayAgainStatements()
{
	int number3 = rand() % 10 + 1;
	if (guesses == 0)
	{
		switch (guesses == 0) // creates a "random" play again phrases generator
		{
		case 1:
			if (number3 == 1) // same as number 1 and 2
			{
				std::cout << "Play again? y or n" << endl;
			}
		case 2:
			if (number3 == 2)
			{
				std::cout << "You've come to the end of game. Want to play again? y or n" << endl;
			}
		case 3:
			if (number3 == 3)
			{
				std::cout << "You should play again and let some friends watch. So what do you say? y or n" << endl;
			}
		case 4:
			if (number3 == 4)
			{
				std::cout << "Just give up and play again? y or n" << endl;
			}
		case 5:
			if (number3 == 5)
			{
				std::cout << "Play another game? y or n" << endl;
			}
		case 6:
			if (number3 == 6)
			{
				std::cout << "You'll probably want to play again I assume? y or n" << endl;
			}
		case 7:
			if (number3 == 7)
			{
				std::cout << "Want to go again? y or n" << endl;
			}
		case 8:
			if (number3 == 8)
			{
				std::cout << "Another game? You'll do better this time. y or n" << endl;
			}
		case 9:
			if (number3 == 9)
			{
				std::cout << "You ran out of guesses... Want to go again? y or n" << endl;
			}
		case 10:
			if (number3 == 10)
			{
				std::cout << "Do you want to play again? y or n" << endl;
			}
		}

		}
	PlayAgains++; // adds to the counter for PlayAgains
	
	}


int NumberGuessGame::getPlayAgainStatement()
{
	return 0;
}

void NumberGuessGame::EndGame()
{
			std::cout << "Thank you for playing the Number Guessing Game" << endl;
			cout << "It's too bad you ended the game but here is your win/loss/play again ratio." << endl;
			cout << "You won " << wins << " times." << endl; // displays wins and losses
			cout << "You lost " << losses << " times." << endl;
			cout << "You played the game " << PlayAgains << " times." << endl;
			while (true)
			{
				break; // stops code from outputting anything more.
			}
}

int NumberGuessGame::getEndGame()
{
	return 0;
}

void NumberGuessGame::PlayAgain()
{
	char i;
	PlayAgainStatements(); // calls function for play again phrases
	cin >> i;

		if (i == 'y') // creates if/else statment for playing the game again.
		{
			guesses + 20;
			do {
				game(); // Should repeat the game again but it will not, and I've been trying to figure it out for the past 3 hours.
			} while (guesses > 0); // I can get the stuff to repeat if you type y in for as many times as you want to play. But that's not how it should function.

		}
		else
		{
			EndGame(); // ends the game if user decides to stop playing
		}
}

int NumberGuessGame::getPlayAgain()
{
	return 0;
}
