#pragma once
#include<iostream>

struct gettingRandC
{
	int row;
	int column;
};

gettingRandC checkPlayer(int gameBoard[3][3], int row,int column);

void printGameBoard(int board[3][3]);

void printRules();

void printIntroductions();

void dataUpdate(int board[3][3],gettingRandC data,int player);

char dataConversion(int board[3][3],int o,int x);
//how to get the rows and columns to return
