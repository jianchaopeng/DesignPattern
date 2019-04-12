#include <iostream>
#include <map>

using namespace std;

class CPlayer
{
public:
    CPlayer(/* args */);
    ~CPlayer();

private:
    // data
};



class CGameManager
{
public:
    static CGameManager* instance()
    {
        static CGameManager inst;
        return &inst;
    }

    void run()
    {
        cout << "singleton ..." << endl;
    }

private:
    CGameManager(){}
    ~CGameManager(){}

private:
    //data
};  


int main(int argc, char* argv[])
{
    CGameManager::instance()->run();

    return 0;
}