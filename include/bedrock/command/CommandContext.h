#pragma once

class CommandContext {

public:

    CommandContext(std::string const&, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, int);
    void getCommandOrigin(void)const;
    void getVersion(void)const;
};
