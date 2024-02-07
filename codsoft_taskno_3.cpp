// Muhammad Zohaib Raza
// Date: 02/07/2024
// CodSoft Internship
// Task3: Tic Tac Toe Game
// Description: This is a simple Tic Tac Toe game. It is a two player game.
// The game is played on a 3x3 grid. The first player is X and the second player is O.
// The players take turns to place their respective symbol on the grid.
// The first player to get 3 of their symbols in a row (up, down, across, or diagonally) is the winner.
// If the grid is full and no player has won, the game is a draw.

#include <iostream>
#include <string>
using namespace std;
void display_board(char board[3][3]) {
	cout << "-------------------" << endl;
	cout << "|  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  |" << endl;
	cout << "-------------------" << endl;
	cout << "|  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  |" << endl;
	cout << "-------------------" << endl;
	cout << "|  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  |" << endl;
	cout << "-------------------" << endl;
}
char check_winner(char board[3][3]) {
	for (int i = 0; i < 3; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
			return board[i][0];
		}
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
		return board[0][2];
	}
	return ' ';
}
bool check_draw(char board[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] != 'X' && board[i][j] != 'O') {
				return false;
			}
		}
	}
	return true;
}
int main() {
	char play_again = 'n';
	do {
		system("cls");
		cout << "******************************************" << endl;
		cout << "************ Tic Tac Toe Game ************" << endl;
		cout << "******************************************" << endl;
		char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
		int choice;
		int row, column;
		char turn = 'X';
		bool draw = false;
		bool game_over = false;
		while (!(game_over)) {
			cout << endl;
			cout << "Player 1: X and Player 2: O" << endl;
			display_board(board);
			draw = check_draw(board);
			if (draw == true) {
				cout << "Game Draw!!" << endl;
				game_over = true;
				break;
			}
			char winner = check_winner(board);
			if (winner != ' ') {
				cout << endl;
				cout << "******************************************" << endl;
				if (winner == 'X') {
					cout << "*********** Player 1 [X] wins!! **********" << endl;
				}
				else {
					cout << "*********** Player 2 [O] wins!! **********" << endl;
				}
				cout << "******************************************" << endl;
				game_over = true;
				break;
			}
			if (turn == 'X') {
				cout << "Player 1 [X] turn: " << endl;
			}
			else if (turn == 'O') {
				cout << "Player 2 [O] turn: " << endl;
			}
			cout << "Enter the choice: ";
			cin >> choice;
			switch (choice) {
			case 1: row = 0; column = 0; break;
			case 2: row = 0; column = 1; break;
			case 3: row = 0; column = 2; break;
			case 4: row = 1; column = 0; break;
			case 5: row = 1; column = 1; break;
			case 6: row = 1; column = 2; break;
			case 7: row = 2; column = 0; break;
			case 8: row = 2; column = 1; break;
			case 9: row = 2; column = 2; break;
			default:
				cout << "Invalid Move" << endl;
				continue;
			}
			if (turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O') {
				board[row][column] = 'X';
				turn = 'O';
			}
			else if (turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O') {
				board[row][column] = 'O';
				turn = 'X';
			}
			else {
				cout << "Box already filled! Please choose another!!" << endl;
				continue;
			}
		}
		cout << endl;
		cout << "Do you want to play again? (y/n): ";
		cin >> play_again;
	} while (play_again == 'y' || play_again == 'Y');
	if (play_again == 'n' || play_again == 'N') {
		cout << endl;
		cout << "******************************************" << endl;
		cout << "** Thanks for playing Tic Tac Toe Game! **" << endl;
		cout << "******************************************" << endl;
	}

	return 0;
}