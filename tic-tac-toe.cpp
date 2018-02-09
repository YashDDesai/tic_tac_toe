#include <iostream>
using namespace std;

int main() {
	char cell1('1');
	char cell2('2');
	char cell3('3');
	char cell4('4');
	char cell5('5');
	char cell6('6');
	char cell7('7');
	char cell8('8');
	char cell9('9');
	int playerTurn(1);
	bool gameOver(true);

	// Main game loop 
	do {
        system("cls");
		// Print board
        cout << "" << endl;
        cout << "\t\tTIC TAC TOE" << endl << endl;
        cout << "--------------------------------------------" << endl << endl;

		cout << "\t" << "   " << cell1 << "   |" << "   " << cell2 << "   |" << "   " << cell3 << "   " << endl;
		cout << "\t" << "-------|" << "-------|" << "-------" << endl;
		cout << "\t" << "   " << cell4 << "   |" << "   " << cell5 << "   |" << "   " << cell6 << "   " << endl;
		cout << "\t" << "-------|" << "-------|" << "-------" << endl;
		cout << "\t" << "   " << cell7 << "   |" << "   " << cell8 << "   |" << "   " << cell9 << "   " << endl;

        cout << endl << "--------------------------------------------" << endl << endl;

		// Set player marker: Player 1 uses X and Player 2 uses O
		char playerMark;
		if (playerTurn == 1) {
			playerMark = 'X';
		} else {
			playerMark = 'O';
		}

		// Prompt the player for a move
		cout << endl << "Player" << playerTurn << "'s move : " << endl;
		bool validMove;
		// Loop until we get a valid move
		do {
			char nextMove;
			cin >> nextMove;
			validMove = true;

			// Check for a valid move
			if (nextMove == '1' && cell1 == '1') {
				cell1 = playerMark;
			} else if (nextMove == '2' && cell2 == '2') {
				cell2 = playerMark;
			} else if (nextMove == '3' && cell3 == '3') {
				cell3 = playerMark;
			} else if (nextMove == '4' && cell4 == '4') {
				cell4 = playerMark;
			} else if (nextMove == '5' && cell5 == '5') {
				cell5 = playerMark;
			} else if (nextMove == '6' && cell6 == '6') {
				cell6 = playerMark;
			} else if (nextMove == '7' && cell7 == '7') {
				cell7 = playerMark;
			} else if (nextMove == '8' && cell8 == '8') {
				cell8 = playerMark;
			} else if (nextMove == '9' && cell9 == '9') {
				cell9 = playerMark;
			} else {
				cout << endl << "\t\tInvalid Move. Try again." << endl;
				validMove = false;
			}
		} while (!validMove);

		gameOver		= false;
		bool winGame	= true;
		// Check for end of game conditions
		if (cell1 != '1') {
			if (cell2 == cell1 && cell3 == cell1) {
				gameOver = true;
			}
			if (cell4 == cell1 && cell7 == cell1) {
				gameOver = true;
			}
		}
		if (cell5 != '5') {
			if (cell1 == cell5 && cell9 == cell5) {
				gameOver = true;
			}
			if (cell2 == cell5 && cell8 == cell5) {
				gameOver = true;
			}
			if (cell4 == cell5 && cell6 == cell5) {
				gameOver = true;
			}
			if (cell3 == cell5 && cell7 == cell5) {
				gameOver = true;
			}
		}
		if (cell9 != '9') {
			if (cell3 == cell9 && cell6 == cell9) {
				gameOver = true;
			}
			if (cell7 == cell9 && cell8 == cell9) {
				gameOver = true;
			}
		}
		// Need to check the board full (no-win condition)
		if (cell1 != '1' && cell2 != '2' && cell3 != '3' &&
			cell4 != '4' && cell5 != '5' && cell6 != '6' &&
			cell7 != '7' && cell8 != '8' && cell9 != '9' && !gameOver)
		{
			gameOver = true;
			winGame = false;
            system("cls");
			cout << endl << "\t\tMatch Draw !!!" << endl;
		}

		if (gameOver) {
			if (winGame) {
                system("cls");
				cout << endl << "\t\tPlayer" << playerTurn << " wins!" << endl;
			}
			// Print ending board
			/*cout << cell1 << "|" << cell2 << "|" << cell3 << endl;
			cout << "-+-+-"<< endl;
			cout << cell4 << "|" << cell5 << "|" << cell6 << endl;
			cout << "-+-+-"<< endl;
			cout << cell7 << "|" << cell8 << "|" << cell9 << endl;*/

			cout << "" << endl;
			cout << "\t" << "   " << cell1 << "   |" << "   " << cell2 << "   |" << "   " << cell3 << "   " << endl;
			cout << "\t" << "-------|" << "-------|" << "-------" << endl;
			cout << "\t" << "   " << cell4 << "   |" << "   " << cell5 << "   |" << "   " << cell6 << "   " << endl;
			cout << "\t" << "-------|" << "-------|" << "-------" << endl;
			cout << "\t" << "   " << cell7 << "   |" << "   " << cell8 << "   |" << "   " << cell9 << "   " << endl;

            cout << endl << "\t\tGame Over!\n\t\t\t\t\t\t\t\t\t\t\t-by Yash Desai" << endl;
			cout << endl << "\tPlay again (y/n) ?" << endl;
			char playAgain;
			cin >> playAgain;

			if (playAgain == 'y') {
				gameOver = false;
				// Clear the board
				cell1 = '1';
				cell2 = '2';
				cell3 = '3';
				cell4 = '4';
				cell5 = '5';
				cell6 = '6';
				cell7 = '7';
				cell8 = '8';
				cell9 = '9';
			}
			playerTurn = 1;
		} else {
			// Alternate player turns
			if (playerTurn == 1) {
				playerTurn = 2;
			} else {
				playerTurn = 1;
			}
		}
	} while (!gameOver);
}

// Author: Yash Desai
