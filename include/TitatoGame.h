namespace pavakalib
{
#define EXPORT_SYM __declspec(dllexport)
class EXPORT_SYM TitatoGame
{
public:
	virtual int Dummy() = 0;
	static TitatoGame* CreateGame();
	static void DestroyGame(TitatoGame*);
};
} // namespace pavakalib