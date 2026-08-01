#include "../include/pager.hpp"
#include <fstream>


Pager::Pager(const std::string& name)
{
    filename = name;
    file.open(s: filename,mode: std::ios::in| std::ios::out | std::ios::binary);

    if (!file)
    {
        std::ofstream create(s: filename,mode: std::ios::binary);
        create.close();
        file.open(s: filename,mode: std::ios::in|std::ios::out|std::ios::binary);


    }

}

Pager::~Pager()
{
    close();
}

void Pager::close()
{
    if (file.is_open())
    {
        file.close();
    }
}

std::string Pager::getFilename() const
{
    return filename;
}







































