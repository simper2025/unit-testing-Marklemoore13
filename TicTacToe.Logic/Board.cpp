#include "pch.h"
#include "Board.h"


void Board::SetBoard(char setup[3][3])
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			grid[i][j] = setup[i][j];
		}
	}
}

char Board::GetSquare(int row, int col) const
{
	return grid[row][col];
}

bool Board::SetSquare(int row, int col, char player)
{
	if (grid[row][col] == ' ')
	{
		grid[row][col] = player;
		return true;
	}
	return false;
}

char Board::GameStatus()
{
	char winner = ' ';
	for (int i = 0; i < 3; i++)
	{
		if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2] && grid[i][0] != ' ')
		{
			winner = grid[i][0];
			break;
		}
		else if (grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i] && grid[0][i] != ' ')
		{
			winner = grid[0][i];
			break;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (grid[i][j] == 'X' || grid[i][j] == 'O')
			{
				winner = 'T';
			}
			else
			{
				winner = ' ';
			}
		}
	}
	if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[0][0] != ' ')
	{
		winner = grid[0][0];
	}
	else if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0] && grid[0][2] != ' ')
	{
		winner = grid[0][2];
	}
	

	return winner;
}

