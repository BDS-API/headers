#pragma once

#include <memory>
#include "orgin/CommandOrigin.h"
#include <string>


class CommandContext {

public:

    ~CommandContext();
    std::string getCommand()const;
    CommandContext(std::string const&, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, int);
    void getCommandOrigin()const;
    void getVersion()const;
};
