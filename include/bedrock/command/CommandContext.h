#pragma once

#include "orgin/CommandOrigin"


class CommandContext {

public:

    CommandContext(std::string const&, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, int);
    void getCommandOrigin()const;
    void getVersion()const;
};
