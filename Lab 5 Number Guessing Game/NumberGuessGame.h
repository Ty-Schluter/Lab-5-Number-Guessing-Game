#ifndef NGG
#define NGG
class NumberGuessGame
{
public:
	NumberGuessGame(); // creates constructor
	~NumberGuessGame(); // deconstructor

	void game(); // typically class stuff
	int getGame();

	void WinStatements();
	int getWinStatments();

	void LoseStatements();
	int getLoseStatements();

	void PlayAgainStatements();
	int getPlayAgainStatement();

	void EndGame();
	int getEndGame();

	void PlayAgain();
	int getPlayAgain();

private:
	// creates variables for tracking
	int wins = 0;
	int losses = 0;
	int guesses = 20;
	int guess = 0;
	int PlayAgains = 0;

};


#endif 
