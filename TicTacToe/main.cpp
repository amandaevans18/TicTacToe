#include<iostream>
#include"gameBoard.h"
int main()
{
	int gameBoard[3][3] = { {1,2,3 }, {4, 5, 6}, {7, 8, 9 }};
	int playerOne = 0;

	int playerTwo = 0;

	bool playerOnePlaced = false;
	bool gameRunning = true;

	//while (gameRunning)
	//{
	drawGameBoard(gameBoard, playerOne);
		std::cout << "Player One whats your first move?" << std::endl;
		std::cout << "Location? " << std::endl;
		std::cin >> playerOne;
		if(playerOne <= 9)
		{

			drawGameBoard(gameBoard, playerOne);
			playerOnePlaced = true;
		}

	//}
	system("pause");
	return 0;
}