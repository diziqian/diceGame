#include <iostream>

#ifdef WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

#include "dicegame.h"

#define TEST_NUM 3
#define TM_DISTANCE 3
#define WIN_MUL  1000

void sleepInMulOS()
{
#ifdef WIN32
    Sleep(TM_DISTANCE * WIN_MUL);
#else
    sleep(TM_DISTANCE);
#endif
}

int main(int argc, char *argv[])
{
    for(int i = 0; i < TEST_NUM; i++)
    {
        sleepInMulOS();
        std::cout << __DICEGME->getGameNum() << std::endl;
    }

    return 0;
}
