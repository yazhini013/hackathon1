#include <iostream>

void runConsole(const std::string& worldFile);

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: ./chronicle <world_file>\n";
        return 1;
    }

    runConsole(argv[1]);

    return 0;
}