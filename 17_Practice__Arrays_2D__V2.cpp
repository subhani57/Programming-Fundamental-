#include<iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 3;
bool draw = false;
char turn = 1;
void displaysquare(int matrix[ROWS][COLS],char player1_symbol, char player2_symbol)
{
	for (int i = 0;i < ROWS;i++)
	{
		for (int j = 0;j < COLS;j++)
		{
			if (matrix[i][j] == player1_symbol || matrix[i][j] == player2_symbol) {
				cout << (char)matrix[i][j] << "\t";
			}
			else
			{
				cout << matrix[i][j] << "\t";

			}

		}
		cout << endl;
	}
}
void playGame(int matrix[ROWS][COLS], char player1_symbol, char player2_symbol)
{
	int choice;
	if (turn == 1) {
		cout << "Player 1 Turn: Enter Cell #: ";
	}
	else if (turn == 2) {
		cout << "Player 1 Turn: Enter Cell #: ";
	}

	cin >> choice;
	int row, column;
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
		cout << "Invalid Move";
	}
	if (turn == 1 && matrix[row][column] != player1_symbol && matrix[row][column] != player2_symbol) {
		matrix[row][column] = player1_symbol;
		turn = 2;
	}
	else if (turn == 2 && matrix[row][column] != player1_symbol && matrix[row][column] != player2_symbol) {
		matrix[row][column] = player2_symbol;
		turn = 1;
	}
	else {
		cout << "Box already filled! Please choose another!!";
		playGame(matrix,player1_symbol,player2_symbol);
	}
	displaysquare(matrix, player1_symbol, player2_symbol);
}
bool checkWin(int square[ROWS][COLS], char player1_symbol, char player2_symbol)
{
	for (int i = 0; i < ROWS; i++)
		if (square[i][0] == square[i][1] && square[i][0] == square[i][2] || square[0][i] == square[1][i] && square[0][i] == square[2][i])
			return false;
	if (square[0][0] == square[1][1] && square[0][0] == square[2][2] || square[0][2] == square[1][1] && square[0][2] == square[2][0])
		return false;
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (square[i][j] != player1_symbol && square[i][j] != player2_symbol)
				return true;
	draw = true;
	return false;
}
//int main()
//{
//	char player1_symbol;
//	char player2_symbol;
//	cout << "Enter Player 1 Symbol: ";
//	cin >> player1_symbol;
//	cout << "Enter Player 2 Symbol:";
//	cin >> player2_symbol;
//	int matrix[ROWS][COLS] = { {1,2,3},{4,5,6},{7,8,9} };
//	displaysquare(matrix, player1_symbol, player2_symbol);
//	while (checkWin(matrix,player1_symbol,player2_symbol)) {
//		playGame(matrix, player1_symbol, player2_symbol);
//		checkWin(matrix, player1_symbol, player2_symbol);
//	}
//	if (turn == 2 && draw == false) {
//		cout << "Congratulations ! Player with 1 has won the game";
//	}
//	else if (turn == 1 && draw == false) {
//		cout << "Congratulations ! Player with 2 has won the game";
//	}
//	else
//		cout << "GAME DRAW!!!";
//
//	return 0;
//	
//	
//}