#pragma once



class CommandOutputMessage {

public:

    CommandOutputMessage(CommandOutputMessageType, std::string const&, std::vector<std::string, std::allocator<std::string>> &&);
    CommandOutputMessage(CommandOutputMessage&&);
    CommandOutputMessage(CommandOutputMessage const&);
    void getType()const;
};
