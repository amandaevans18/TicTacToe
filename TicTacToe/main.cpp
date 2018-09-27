#include<iostream>
//gameboard includes all the code
#include"gameBoard.h"

using namespace std;
int main()
{
	
	int gameBoard[3][3] = {0};
	int playerRow = 0;
	int playerCol = 0;

	int whichPlayer = 1;
	bool gameRunning = true;

	while (gameRunning)
	{
		while (whichPlayer == 1)
		{
			gettingRandC pointInArray = { 0,0 };
			printGameBoard(gameBoard);
			std::cout << "Player One whats your first move?" << std::endl;
			std::cout << "Row? " << std::endl;
			std::cin >> playerRow;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Column" << std::endl;
			std::cin >> playerCol;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (playerRow > 0 && playerRow <= 3 && playerCol > 0 && playerCol <= 3)
			{

				if (gameBoard[playerRow - 1][playerCol - 1] == 0)
				{
					pointInArray = { playerRow - 1,playerCol - 1 };
					dataUpdate(gameBoard, pointInArray, whichPlayer);
					break;
				}
				else
				{
					std::cout << "Sorry that spot is taken!" << std::endl;
					continue;
				}
			}
			else
			{
				std::cout << "Invalid Input! input is out of bounds" << std::endl;
				continue;
			}
		}
		if (checkForWin(gameBoard, whichPlayer) == 0)
		{
			cout << "The game goes on!" << endl;
		}
		else if (checkForWin(gameBoard, whichPlayer) == 1)
		{
			cout << "Player One wins!" << endl;
			break;
		}
		else if (checkForWin(gameBoard, whichPlayer) == 2)
		{
			cout << "Player Two wins!" << endl;
			break;
		}
		else if (checkForWin(gameBoard, whichPlayer) == 3)
		{
			cout << "It's a tie!" << endl;
			break;
		}

		whichPlayer++;
		while (whichPlayer == 2)
		{
			gettingRandC pointInArray = { 0,0 };
			printGameBoard(gameBoard);
			std::cout << "Player Two whats your first move?" << std::endl;
			std::cout << "Row? " << std::endl;
			std::cin >> playerRow;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Column" << std::endl;
			std::cin >> playerCol;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (playerRow > 0 && playerRow <= 3 && playerCol > 0 && playerCol <= 3)
			{

				if (gameBoard[playerRow - 1][playerCol - 1] == 0)
				{
					pointInArray = { playerRow - 1,playerCol - 1 };
					dataUpdate(gameBoard, pointInArray, whichPlayer);
					break;
				}
				else
				{
					std::cout << "Sorry that spot is taken!" << std::endl;
					continue;
				}
			}
			else
			{
				std::cout << "Invalid Input! input is out of bounds" << std::endl;
				continue;
			}
			printGameBoard(gameBoard);

		}
		if (checkForWin(gameBoard, whichPlayer) == 0)
		{
			cout << "The game goes on!" << endl;
		}
		else if (checkForWin(gameBoard, whichPlayer) == 1)
		{
			cout << "Player One wins!" << endl;
			break;
		}
		else if (checkForWin(gameBoard, whichPlayer) == 2)
		{
			cout << "Player Two wins!" << endl;
			break;
		}
		else if (checkForWin(gameBoard, whichPlayer) == 3)
		{
			cout << "It's a tie!" << endl;
			break;
		}
		whichPlayer--;
		
	}
	return 0;
}