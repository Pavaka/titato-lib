#pragma once
#include <TitatoGame.h>
#include <TicTacToeBoard.h>

namespace pavakalib
{
class TitatoGameImpl : public TitatoGame
{
public:
	virtual int Dummy() override;
	virtual bool PlayMove(const BoardMove& move) override;
	virtual GameState GetGameState() const override;
	virtual TitatoGameData GetGameData() const override;
private:

	using TitatoBoard = std::array<std::array<TicTacToeBoard, 3>, 3>;
	TitatoBoard m_Board = {};
};
} // namespace pavakalib