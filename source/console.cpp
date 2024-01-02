#include "console.hpp"

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string &input)
{
    std::vector<std::string> container;
    std::istringstream iss(input);
    std::string word;

    while (iss >> word)
        container.push_back(word);

    return container;
}

void sanitize(std::vector<std::string> &command_arr)
{
    std::vector<std::string> ref{"load", "save", "select", "from", "update", "delete"};
    for (auto cmd : command_arr)
    {
        for (auto &kw : ref)
        {
            if (cmd == kw)
            {
                //lower input keywords, leave "names"
            }
        }
    }
}

void Console::start()
{
    std::string line;
    std::cout << "> ";
    while (std::getline(std::cin, line))
    {
        if (line.empty())
        {
            std::cout << "No commands entered\n";
            std::cout << "> ";
            continue;
        }

        auto input = split(line);
        std::copy(input.begin(), input.end(), std::back_inserter(commands));

        if (commands.front() == "quit")
            break;

        if (commands.front() == "help")
        {
            // display help
        }

        if (commands.front() == "echo")
        {
            commands.erase(commands.begin());
            for (auto &word : commands)
                std::cout << word + " ";
            std::cout << "\n";
        }

        if (commands.front() == "load")
        {
            commands.erase(commands.begin());
        }

        std::cout << "> ";
    }
}
