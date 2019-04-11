#include "Factory/GameFactory.hpp"

int main(int argc, char* argv[])
{
	IGame* pcGame = CGameFactory::CreateGame(EGameTypePc);
	if (pcGame == nullptr)
	{
		cerr << "�������д���" << endl;
		return -1;
	}
	pcGame->run();

	delete pcGame;
	pcGame = nullptr;

	pcGame = CGameFactory::CreateGame(EGameTypePhone);
	if (pcGame == nullptr)
	{
		cerr << "�������д���" << endl;
		return -1;
	}

	pcGame->run();

	delete pcGame;
	pcGame = nullptr;


	return 0;
}