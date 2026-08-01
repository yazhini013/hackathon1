#ifndef WORLD_STATE_HPP
#define WORLD_STATE_HPP

#include <vector>
#include "player.hpp"

class WorldState
{
public:
    bool addPlayer(const Player& player);

    const std::vector<Player>& getPlayers() const;

private:
    std::vector<Player> players_;
};

#endif

