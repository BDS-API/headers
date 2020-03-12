#pragma once

#include <vector>
#include <string>


class CommandOutputMessage {

public:
    CommandOutputMessage(CommandOutputMessage &&);
    CommandOutputMessage(CommandOutputMessage const&);
    std::string getMessageId()const;
    void getType()const;
    ~CommandOutputMessage();
    std::string getParams()const;
    std::string getUserMessage()const;
//  CommandOutputMessage(CommandOutputMessageType, std::string const&, std::vector<std::string> &&); //TODO: incomplete function definition
};
