
#ifndef INPUT_BUFFER_HPP
#define INPUT_BUFFER_HPP

#include <string>

class InputBuffer
{
public:
    void set(const std::string& input)
    {
        buffer_ = trim(input);
        ++historyCount_;
    }

    const std::string& command() const
    {
        return buffer_;
    }

    std::size_t historyLength() const
    {
        return historyCount_;
    }

private:
    std::string buffer_;
    std::size_t historyCount_ = 0;

    static std::string trim(const std::string& str)
    {
        const std::size_t first = str.find_first_not_of(" \t\r\n");

        if (first == std::string::npos)
            return "";

        const std::size_t last = str.find_last_not_of(" \t\r\n");

        return str.substr(first, last - first + 1);
    }
};

#endif

