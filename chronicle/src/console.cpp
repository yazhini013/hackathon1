
#include <iostream>
#include <string>

#include "../include/application_state.hpp"
#include "../include/input_buffer.hpp"

namespace
{

AppState handleSystemCommand(const std::string& cmd)
{
    if (cmd == ".quit")
    {
        // Placeholder for future flush/save.
        return AppState::EXIT;
    }

    if (cmd == ".help")
    {
        std::cout
            << "  .quit       Shut down the world engine\n"
            << "  .help       Show this message\n"
            << "  .version    Show engine version\n"
            << "  .status     Show world status\n";

        return AppState::RUNNING;
    }

    if (cmd == ".version")
    {
        std::cout << "Chronicle v0.1 — Ironhold World Engine\n";
        return AppState::RUNNING;
    }

    if (cmd == ".status")
    {
        std::cout << "World: offline\n";
        return AppState::RUNNING;
    }

    std::cout
        << "Unknown system command: " << cmd
        << "\nTry .help\n";

    return AppState::UNKNOWN;
}

}

void runConsole()
{
    InputBuffer input;

    while (true)
    {
        std::cout << "ironhold> ";

        std::string line;

        if (!std::getline(std::cin, line))
            break;

        input.set(line);

        if (input.command().empty())
            continue;

        if (input.command()[0] == '.')
        {
            AppState state = handleSystemCommand(input.command());

            if (state == AppState::EXIT)
                break;
        }
        else
        {
            std::cout
                << "[World command queued: "
                << input.command()
                << "]\n";
        }
    }
}

