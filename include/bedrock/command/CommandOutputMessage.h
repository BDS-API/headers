#pragma once

#include <string>
#include <vector>


class CommandOutputMessage {

public:
    void getType()const;
    ~CommandOutputMessage();
    CommandOutputMessage(CommandOutputMessage const&);
    CommandOutputMessage(CommandOutputMessage &&);
    std::string getMessageId()const;
//  CommandOutputMessage(CommandOutputMessageType, std::string const&, std::vector<std::string> &&); //TODO: incomplete function definition
    std::string getParams()const;
    std::string getUserMessage()const;
};
