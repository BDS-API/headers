#pragma once

#include "origin/CommandOrigin.h"
#include <string>
#include <memory>


class CommandContext {

public:
    ~CommandContext();
    void getCommandOrigin()const;
    void getVersion()const;
    std::string getCommand()const;
    CommandContext(std::string const&, std::unique_ptr<CommandOrigin>, int);
};
