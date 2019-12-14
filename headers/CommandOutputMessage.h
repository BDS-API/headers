#pragma once

class CommandOutputMessage {

public:

    void CommandOutputMessage(CommandOutputMessageType, std::string const&, std::vector<std::string, std::allocator<std::string>> &&);
    void CommandOutputMessage(CommandOutputMessage&&);
    void CommandOutputMessage(CommandOutputMessage const&);
    void getType(void)const;
};
