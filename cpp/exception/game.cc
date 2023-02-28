#include "game.hh"
#include "player.hh"
#include "invalid-argument.hh"
#include <algorithm>
#include <exception>
#include <iostream>

void Game::play(Player& p1, Player& p2)
{
    try 
    {
        if (&p1 == &p2)
            throw InvalidArgumentException("Stop playing by yourself!");
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }
}