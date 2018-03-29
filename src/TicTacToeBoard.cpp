#include <TicTacToeBoard.h>
#include <cassert>
namespace pavakalib
{
BoardState TicTacToeBoard::GetBoardState() const
{
	return m_State;
}

bool TicTacToeBoard::PlayMove(const BoardMove& move)
{
	if (CanPlayMoveAtPosition(move.Position))
	{
		m_Board[move.Position.X][move.Position.Y] = move.Mark;
		return true;
	}
	return false;
}

bool TicTacToeBoard::CanPlayMoveAtPosition(MovePosition movePosition)
{
	assert(movePosition.X >= 0 && movePosition.X < BoardDimY);
	assert(movePosition.Y >= 0 && movePosition.Y < BoardDimY);
	return m_Board[movePosition.X][movePosition.Y] == CellMark::Empty;
}

auto TicTacToeBoard::GetBoard() const -> BoardType
{
	return m_Board;
};


} // namespace pavakalib