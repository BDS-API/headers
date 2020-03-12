#pragma once

#include <memory>
#include <string>


class CommandContext {

public:
    std::string getCommand()const;
    ~CommandContext();
    void getCommandOrigin()const;
    void getVersion()const;
    CommandContext(std::string const&, std::unique_ptr<CommandOrigin>, int);
};
