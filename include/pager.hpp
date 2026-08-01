#ifndef PAGER_HPP
#define PAGER_HPP

#include <string>
#include <fstream>

class Pager
{
    private:
        std::string filename;
        std::fstream file;

    public:
        Pager(const std::string& name)

        void close();

        const std::string& getFilename() const;

};

#endif

