#include <TitatoGameImpl.h>
namespace pavakalib
{
int TitatoGameImpl::Dummy()
{
	return 42;
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