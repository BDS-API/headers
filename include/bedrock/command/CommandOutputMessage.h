#pragma once

#include <memory>
#include "./CommandOutputMessage.h"
#include <vector>
#include <string>


class CommandOutputMessage {

public:

    ~CommandOutputMessage();
//  CommandOutputMessage(CommandOutputMessageType, std::string const&, std::vector<std::string, std::allocator<std::string>> &&); //TODO: incomplete function definition
    CommandOutputMessage(CommandOutputMessage &&);
    CommandOutputMessage(CommandOutputMessage const&);
    void getType()const;
    std::string getMessageId()const;
    std::string getParams()const;
    std::string getUserMessage()const;
};
