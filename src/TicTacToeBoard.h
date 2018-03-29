#pragma once
#include <BoardCommon.h>
#include <array>
namespace pavakalib
{

class TicTacToeBoard
{
private:
	using BoardType = Board3x3<CellMark>;
public:
	BoardState GetBoardState() const;
	BoardType GetBoard() const;
	bool PlayMove(const BoardMove& move);
private:

	bool CanPlayMoveAtPosition(MovePosition movePosition);
	BoardType m_Board = {};
	BoardState m_State = BoardState::Unsettled;
};
} // namespace pavakalib