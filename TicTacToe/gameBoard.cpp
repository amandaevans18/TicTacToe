#include<iostream>
#include"gameBoard.h"


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

int checkForWin(int board[3][3], int whichPlayer)
{
	//check for horiz win
	int	checkVal = 0;
	int yes = 0;
	for (int r = 0; r < 3; r++)
	{
		checkVal = board[r][0];
		for (int c = 0; c < 3; c++)
		{
			//check to see if the first value in the line is equal to the val being read
			// the value being read will always left to right 
			if (checkVal == board[r][c])
			{
				yes++;
				if (checkVal == 1 && yes == 3) 
				{
					yes = 0;
					return 1;
				}
				else if(checkVal == 2 && yes == 3)
				{
					yes = 0;
					return 2;
				}
			}
		}
	}
	//check for vertical
	for (int r = 0; r < 3; r++)
	{
		checkVal = board[0][r];
		for (int c = 0; c < 3; c++)
		{
			if (checkVal == board[r][c])
			{
				yes++;
				if (checkVal == 1 && yes == 3)
				{
					yes = 0;
					return 1;
				}
				else if (checkVal == 2 && yes == 3)
				{
					yes = 0;
					return 2;
				}
			}
		}
	}

	// if we havent returned yet then it finna be a tie???!!!! if we get to the end w/o returning anything then it has to be that the game is still going!
	for (int r = 0; r < 3; r++) 
	{
		for (int c = 0; c < 3; c++) 
		{
			if (board[r][c] != 0) 
			{
				yes++;
				if (yes == 9)
				{
					yes = 0;
					return 3;
				}
			}
		}
	
	}

	return 0;
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