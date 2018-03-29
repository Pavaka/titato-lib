#pragma once
#include <array>
namespace pavakalib
{
static const int BoardDimX = 3;
static const int BoardDimY = 3;
template <typename T>
using Board3x3 = std::array<std::array<T, BoardDimX>, BoardDimY>;

struct MovePosition
{
	int X;
	int Y;
};

enum class CellMark
{
	Empty,
	FirstPlayer,
	SecondPlayer
};

struct BoardMove
{
	// AddCtor with assert
	CellMark Mark;
	MovePosition Position;
};

enum class BoardState
{
	Unsettled,
	Draw,
	FirstPlayerWon,
	SecondPlayerWon
};

using GameState = BoardState;

struct TitatoGameData
{
	struct MiniGame
	{
		Board3x3<CellMark> Marks;
		GameState GameState;
	};

	Board3x3<MiniGame> GameData;
};
} // namespace pavakalib