#include<iostream>
#include"gameBoard.h"

//this checks the players input and then spits a struct of row and col back
gettingRandC checkPlayer(int gameBoard[3][3],int row,int column) 
{ 
	gettingRandC pointInArray = {0,0};
	//Searching through placeholders r=rows and c=columns
	if (row > 0 && row <= 3 && column > 0 && column <= 3) 
	{

		if (gameBoard[row][column] == 0)
		{
			pointInArray = {row-1,column-1};
		}
		else 
		{
			std::cout << "Sorry that spot is taken!" << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid Input! input is out of bounds" << std::endl;

	}

	return pointInArray;
}

//Prints game board and stays updated  
//checkedPlayerINp should be the return of updateGameBoard
void printGameBoard(int board[3][3])
{
	//print the board
		
		
				std::cout << "     |     |     " << std::endl;
				std::cout << "  " << dataConversion(board,0,0) << "  |  " << dataConversion(board, 0, 1) << "  |  " << dataConversion(board, 0, 2) << std::endl;

				std::cout << "_____|_____|_____" << std::endl;
				std::cout << "     |     |     " << std::endl;

				std::cout << "  " << dataConversion(board, 1, 0) << "  |  " << dataConversion(board, 1, 1) << "  |  " << dataConversion(board, 1, 2) << std::endl;

				std::cout << "_____|_____|_____" << std::endl;
				std::cout << "     |     |     " << std::endl;

				std::cout << "  " << dataConversion(board, 2, 0) << "  |  " << dataConversion(board, 2, 1) << "  |  " << dataConversion(board, 2, 2) << std::endl;

				std::cout << "     |     |     " << std::endl << std::endl;
			

}

//Updates the array to change the data to either a one or two
void dataUpdate(int board[3][3],gettingRandC data,int player)
{
	board[data.row][data.column] = player;
}

//Converts the 1 or 2's to X's and O's
char dataConversion(int board[3][3], int o, int x) 
{
	char symbols[]{ ' ','X','O' };
	return symbols[board[o][x]];

}

void printRules() 
{
	std::cout << "With the rules!" << std::endl;
	std::cout << "Although its simple tic tac toe make sure you're taking fair turns!" << std::endl;
	std::cout << "Player One is only able to place X's and Player Two is only able to place O's" << std::endl;
	std::cout << "Select a number between 1 and 3 for your rows and columns" << std::endl;
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