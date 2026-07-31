/*id runConsole();

int main()
{
    runConsole();
    return 0;
}*/

#include <iostream>
#include <string>

int main()
{
    std::string command;

    while (true)
    {
        std::cout << "ironhold> ";

        std::getline(std::cin, command);

        if (command == ".quit")
        {
            std::cout << "Shutting down world engine...\n";
            break;
        }

        else if (command == ".help")
        {
            std::cout << "  .quit       Shut down the world engine\n";
            std::cout << "  .help       Show this message\n";
            std::cout << "  .version    Show engine version\n";
            std::cout << "  .status     Show world status\n";
        }

        else if (command == ".version")
        {
            std::cout << "Chronicle v0.1 — Ironhold World Engine\n";
        }

        else if (command == ".status")
        {
            std::cout << "World: offline\n";
        }

        else if (command[0] == '.')
        {
            std::cout << "Unknown command. Try .help\n";
        }

        else
        {
            std::cout << "[World command queued: "
                      << command
                      << "]\n";
        }
    }

    return 0;
}