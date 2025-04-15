#include "pch.h"
#include "CppUnitTest.h"
#include "../TicTacToe.Logic/Board.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TicTacToeTest
{
	TEST_CLASS(TicTacToeTest)
	{
	public:

		TEST_METHOD(TestTrue)
		{
			Assert::AreEqual(true, true);
		}

		//TEST_METHOD(TestSetSquare)
		//{
		//	//Arrange
		//	Board b;
		//	
		//	//Act
		//	b.SetSquare(0, 0, 'X');

		//	//Assert
		//	Assert::AreEqual('X', b.GetSquare(0,0));
		//}

		//TEST_METHOD(TestSetTwoSquares)
		//{
		//	//Arrange
		//	Board b;

		//	//Act
		//	b.SetSquare(1, 0, 'X');
		//	b.SetSquare(0, 1, 'X');

		//	//Assert
		//	Assert::AreEqual('X', b.GetSquare(1, 0));
		//	Assert::AreEqual('X', b.GetSquare(0, 1));
		//}

		//TEST_METHOD(TestSet3Squares)
		//{
		//	//Arrange
		//	Board b;

		//	//Act
		//	b.SetSquare(1, 1, 'O');
		//	b.SetSquare(2, 2, 'O');
		//	b.SetSquare(0, 0, 'O');

		//	//Assert
		//	Assert::AreEqual('O', b.GetSquare(0, 0));
		//	Assert::AreEqual('O', b.GetSquare(2, 2));
		//	Assert::AreEqual('O', b.GetSquare(1, 1));
		//}

		/*TEST_METHOD(TestBoardCreate)
		{
			Board b;
			char setup[3][3] = { {'X',' ',' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
			b.SetBoard(setup);
			Assert::AreEqual('X', b.GetSquare(0, 0));
		}

		TEST_METHOD(TestBoardCreate2)
		{
			Board b;
			char setup[3][3] = { {' ',' ',' '}, {'X', 'O', ' '}, {' ', ' ', ' '} };
			b.SetBoard(setup);
			Assert::AreEqual('X', b.GetSquare(1, 0));
			Assert::AreEqual('O', b.GetSquare(1, 1));
			Assert::AreEqual(' ', b.GetSquare(1, 2));
		}

		TEST_METHOD(TestBoardCreate3)
		{
			Board b;
			char setup[3][3] = { {' ',' ','X'}, {' ', 'X', ' '}, {'O', ' ', ' '} };
			b.SetBoard(setup);
			Assert::AreEqual('X', b.GetSquare(0, 2));
			Assert::AreEqual('X', b.GetSquare(1, 1));
			Assert::AreEqual('O', b.GetSquare(2, 0));
			Assert::AreEqual(' ', b.GetSquare(0, 0));
		}*/

		TEST_METHOD(TestGameStatusRowWins)
		{
			Board b;
			char setup1[3][3] = { {'X','X','X'}, {' ', ' ', ' '}, {' ', ' ', ' '} };
			b.SetBoard(setup1);
			Assert::AreEqual('X', b.GameStatus());

			char setup2[3][3] = { {' ',' ',' '}, {'O', 'O', 'O'}, {' ', ' ', ' '} };
			b.SetBoard(setup2);
			Assert::AreEqual('O', b.GameStatus());

			char setup3[3][3] = { {' ',' ',' '}, {' ', ' ', ' '}, {'X', 'X', 'X'} };
			b.SetBoard(setup3);
			Assert::AreEqual('X', b.GameStatus());
		}

		TEST_METHOD(TestGameStatusColumnWins)
		{
			Board b;
			char setup1[3][3] = { {'O',' ',' '}, {'O', ' ', ' '}, {'O', ' ', ' '} };
			b.SetBoard(setup1);
			Assert::AreEqual('O', b.GameStatus());

			char setup2[3][3] = { {' ','X',' '}, {' ', 'X', ' '}, {' ', 'X', ' '} };
			b.SetBoard(setup2);
			Assert::AreEqual('X', b.GameStatus());

			char setup3[3][3] = { {' ',' ','O'}, {' ', ' ', 'O'}, {' ', ' ', 'O'} };
			b.SetBoard(setup3);
			Assert::AreEqual('O', b.GameStatus());
		}

		TEST_METHOD(TestGameStatusCrossWins)
		{
			Board b;
			char setup1[3][3] = { {'X',' ',' '}, {' ', 'X', ' '}, {' ', ' ', 'X'} };
			b.SetBoard(setup1);
			Assert::AreEqual('X', b.GameStatus());

			char setup2[3][3] = { {' ',' ','O'}, {' ', 'O', ' '}, {'O', ' ', ' '} };
			b.SetBoard(setup2);
			Assert::AreEqual('O', b.GameStatus());
		}

		TEST_METHOD(TestGameStatusTie)
		{
			Board b;
			char setup1[3][3] = { {'X','X','O'}, {'O', 'O', 'X'}, {'X', 'X', 'O'} };
			b.SetBoard(setup1);
			Assert::AreEqual('T', b.GameStatus());

		}

	};
}
