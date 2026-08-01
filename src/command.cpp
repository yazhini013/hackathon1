#include "../include/command.hpp"

#include <string>
#include <sstream>

Command parseCommand(const std::string &input)
{
    Command cmd;
    std::stringstream ss(input);

    std::string word1,word2;

    ss >> word1 >> word2;

    if (word1 == "LIST" && word2 == "PLAYERS")
    {
        cmd.type = CommandType::LIST_PLAYERS;
        return cmd;

    }

    if (word1 == "SPAWN" && word2 == "PLAYER")
    {
        int id;

        if (!(ss >> id))
        {
            cmd.error = "ID must be positive.";
            return cmd;
        }

        if (id <=0)
        {
            cmd.error ="ID must be positive.";
            return cmd;
        }

        cmd.player.id = id;

        if (!(ss >> cmd.player.username >> cmd.player.email))
        {
            cmd.error = "Syntax Error";
            return cmd;
        }

        if (cmd.player.username.length() > 32)
        {
            cmd.error = "Username too long (max 32 chars).";
            return cmd;
        }
        if (cmd.player.email.length() > 255 )
        {
            cmd.error = "email too long (max 255 chars).";
            return cmd;
        }
        cmd.type = CommandType::SPAWN_PLAYER;
        return cmd;
    }
    cmd.error = "Syntax Error";
    return cmd;
}
