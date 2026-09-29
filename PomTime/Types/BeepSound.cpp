#include <windows.h>
#include <iostream>

namespace Sounds
{
    void GetSound();
}

void Sounds::GetSound()
{

    Beep(523, 500);
    std::cin.get();
}