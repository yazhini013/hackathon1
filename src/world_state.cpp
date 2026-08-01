#include "../include/world_state.hpp"

bool WorldState::addPlayer(const Player& player)
{
    for (const auto& p : players_)
    {
        if (p.id == player.id)
        {
            return false;
        }
    }

    players_.push_back(player);
    return true;
}

const std::vector<Player>& WorldState::getPlayers() const
{
    return players_;
}