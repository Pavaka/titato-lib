#include <TitatoGameImpl.h>
namespace pavakalib
{
int TitatoGameImpl::Dummy()
{
	return 42;
}
bool TitatoGameImpl::PlayMove(const BoardMove& move)
{
	// TODO add assert !!!
	BoardMove miniGameMove;
	miniGameMove.Mark = move.Mark;
	miniGameMove.Position = MovePosition{ move.Position.X % BoardDimX, move.Position.Y % BoardDimY };

	return m_Board[move.Position.X / BoardDimX][move.Position.Y / BoardDimY].PlayMove(miniGameMove);
}
GameState TitatoGameImpl::GetGameState() const
{
	return GameState();
}
TitatoGameData TitatoGameImpl::GetGameData() const
{
	TitatoGameData data;
	for (int i = 0; i < BoardDimX; ++i)
	{
		for (int j = 0; j < BoardDimY; ++j)
		{
			const auto& brd = m_Board[i][j];
			const TitatoGameData::MiniGame minData = { brd.GetBoard(), brd.GetBoardState() };
			data.GameData[i][j] = minData;
		}
	}
	return data;
}
auto TitatoGame::CreateGame() -> TitatoGame*
{
	return new TitatoGameImpl;
}
void TitatoGame::DestroyGame(TitatoGame* game)
{
	delete game;
}

} // namesapce pavakalib