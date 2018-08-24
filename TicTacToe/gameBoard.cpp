#include<iostream>
#include"gameBoard.h"
//Prints game board and stays updated  
void drawGameBoard(int board[3][3],int locationVal) 
{
	int row = 0;
	int colum = 0;

	for (int r = 0; r < 3; r++) 
	{
		for (int c = 0; c < 3; c++) 
		{
			if (board[r][c] == locationVal) 
			{

			}
		}

	}

	//P is the placeholder for now but it will end up being the input of the player 
	std::cout << "     |     |     " << std::endl;
	std::cout << "  " << board[row][colum] << "  |  " << board[row][colum] << "  |  " << board[row][colum] << std::endl;

	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;

	std::cout << "  " << board[row][colum] << "  |  " << board[row][colum] << "  |  " << board[row][colum] << std::endl;

	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;

	std::cout << "  " << board[row][colum] << "  |  " << board[row][colum] << "  |  " << board[row][colum] << std::endl;

	std::cout << "     |     |     " << std::endl << std::endl;
}

void printGameBoard() 
{

}

void printRules() 
{
	std::cout << "With the rules!" << std::endl;
	std::cout << "Although its simple tic tac toe make sure you're taking fair turns!" << std::endl;
	std::cout << "Player One is only able to place X's and Player Two is only able to place O's" << std::endl;
	std::cout << "Most importantly have fun!" << std::endl;
}

void printIntroductions() 
{
	std::cout << "Hello and welcome to Tic Tac Toe!" << std::endl;
	system("pause");

	std::cout << "Grab a friend or the closest person or you can pretend you're two people (the computer doesn't tattle)" << std::endl;
	std::cout << "" << std::endl;
	system("pause");
	std::cout << "Now that there is hopefully two people on the other side of the screen lets get started!" << std::endl;
}