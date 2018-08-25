#include<iostream>
//gameboard includes all the code
#include"gameBoard.h"
int main()
{
	
	int gameBoard[3][3] = {0};
	int playerRow = 0;
	int playerCol = 0;

	gettingRandC checkedPlayerIn{0,0};

	int whichPlayer = 0;
	bool gameRunning = true;

	while (gameRunning)
	{
		whichPlayer++;
		printGameBoard(gameBoard);
		std::cout << "Player One whats your first move?" << std::endl;
		std::cout << "Row? " << std::endl;
		std::cin >> playerRow;
		std::cout << "Column" << std::endl;
		std::cin >> playerCol;
		checkedPlayerIn = checkPlayer(gameBoard, playerRow, playerCol);
		dataUpdate(gameBoard,checkedPlayerIn, whichPlayer);
		whichPlayer++;
		printGameBoard(gameBoard);
		std::cout << "Player Two whats your first move?" << std::endl;
		std::cout << "Row? " << std::endl;
		std::cin >> playerRow;
		std::cout << "Column" << std::endl;
		std::cin >> playerCol;
		checkedPlayerIn = checkPlayer(gameBoard, playerRow, playerCol);
		dataUpdate(gameBoard, checkedPlayerIn, whichPlayer);
		printGameBoard(gameBoard);
		whichPlayer--;
			


	}
	system("pause");
	return 0;
}