#pragma once

class CommandContext {

public:

    void CommandContext(std::string const&, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, int);
    void getCommandOrigin(void)const;
    void getVersion(void)const;
};
