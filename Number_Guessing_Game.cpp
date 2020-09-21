// (1) Name of the Programmer: John Wilson
// (2) Date of Program: 09 Aug 2019
// (3) Name of Program: Number Guessing Game.
// (4) What is the Program version?:1.0
// (5) What are the Milestones of the game?: (a) Rules of the game explained.
//                                           (b) Name of the user.
//                                           (c) Random number form 1-100.
//                                           (d) Allowed five guesses only.
//                                           (e) Will provide guidance to pick higher or lower number per guess.
//                                           (f) Will provide a congratulation or loser statement.
//                                           (g) Can only use positive numbers.
//                                           (h) Only allow Numbers (no letters or symbols) for guessing portion

#include <iostream>
#include <string>  // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
#include <ostream>

using namespace std;

class Random_Number_Game
{

	public:
	Random_Number_Game ()
	{
		void rules ();
		void Game_Rules();
	}

	void Game_Rules ()
	{
		cout << "The rules are rather simple, unless you are a retard. \n";
		cout << "Rule #1: You have to guess the number from 1 to 100. \n";
		cout << "Rule #2: You only have five chances to guess the number. \n";
		cout << "Rule #3: Don't be an asshole and try to cheat. \n";
		cout << "Hint #1: So that you do not complain or get discouraged, a statement will appear after each moronic guess \n either letting you know your uneducated estimate was lower or higher, you lost or won the game.\n";
		cout << "Hint #2: This game is more fun when you are in a good mood." <<" " << "So if you are easily discouraged, then do not play this game as it ill break you. \n";
		cout << "So do you understand all of the rules?" << "\n (Y (for Yes) or N (for No) \n\n";

	}

};

int main()
{
/**< This is the function giving the classes a variable to identify and tie the specific class functions. */
	Random_Number_Game f;

/**<These name the type of variables like char, int, float. */
    char state1 [] = "Welcome to 'GUESS THE RANDOM NUMBER' Game. \n\n", state2 [] = "Are you ready to play? ";
    char state3 [] = "Thanks for NOT playing!?! ", state4 []= "Here are the RULES! ";
    char question1 [] = "Please enter your First Name: \n";
    string question2 = "Please enter your Second Name: \n";
    char question3 [] = "(Y (for Yes) or N (for No)): \n\n";
    char guess1 [] = "Please pick a number from 1 to 100 only";
	char Y, y, Yes, YES, N, n, No, NO, choice;
    char nam1 [25], nam2 [25], gues1 [3], gues2 [3], gues3 [3], gues4 [3], gues5 [3], ans1, answer1 [1], answer2 [1];

/**< This is the functions that print the welcome screen at the top of the program. */
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"+++--------------------------------+++\n";
        cout<<"++    RANDOM NUMBER GUESSING GAME   ++\n";
        cout<<"+++--------------------------------+++\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n\n";

/**< This is the beginning of the user interaction in the program. */
	cout << state1;
	cout << question1;
	cin >> nam1;
	cout << question2;
	cin >> nam2;
	cout << "Thank you for taking the time to play " << nam1 << " " << nam2 << "\n\n";
	cout << state2 <<  question3;
	cin >> ans1;
/**< This is a simple 'if/else' statement that makes the user make a yes or no decision.  */
		if (ans1 == 'N' || ans1 == 'n')
		{
			cout << state3 << nam1 << " "<< nam2;
		}
		else if (ans1 == 'Y' || ans1 == 'y')
		{
				cout << "Awesome " << nam1 <<" " <<nam2 << "\n";
				cout << state4 << "\n";
				f.Game_Rules();


		}
		else if (ans1 != 'Y' || ans1 != 'y' || ans1 != 'N' || ans1 != 'n')
		{
			cout << "Your choice was not a valid option, MORON!!!! "<<"Please follow the provided instructions and choose Y or N. \n\n";
		}


    return 0;
}

