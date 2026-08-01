#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>
#include "player.hpp"

enum class CommandType
{
    SPAWN_PLAYER,
    LIST_PLAYERS,
    INVALID
};

struct Command
{
    CommandType type = CommandType::INVALID;
    Player player;
    std::string error;
};

Command parseCommand(const std::string& input);

#endif

