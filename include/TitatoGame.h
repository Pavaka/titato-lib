#include <BoardCommon.h>
namespace pavakalib
{
#define EXPORT_SYM __declspec(dllexport)
class EXPORT_SYM TitatoGame
{
public:
	virtual int Dummy() = 0;
	virtual bool PlayMove(const BoardMove& move) = 0;
	virtual GameState GetGameState() const = 0;
	virtual TitatoGameData GetGameData() const = 0;
	static TitatoGame* CreateGame();
	static void DestroyGame(TitatoGame*);
};
} // namespace pavakalib