#include <time.h>
#include  <stdlib.h>

#define __DICEGME (DiceGame::getInstance())
#define GAME_MOP (6)

class DiceGame
{
private:
    DiceGame()
    {        
    }

    DiceGame(const DiceGame &diceGameInstance)
    {     
    }

    DiceGame &operator=(const DiceGame &diceGameInstance)
    {        
    }

    ~DiceGame()
    {        
    }   

public:
    static DiceGame *getInstance()
    {
        static DiceGame dicGameInstance;
        return &dicGameInstance;
    }

    uint getGameNum() const
    {
        //让随机种子随时间变化
        srand(time(0));
        return (rand() % GAME_MOP) + 1;
    }
};