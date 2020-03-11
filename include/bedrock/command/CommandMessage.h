#pragma once

#include "orgin/CommandOrigin.h"
#include <string>


class CommandMessage {

public:

    CommandMessage();
    ~CommandMessage();
    std::string getMessage(CommandOrigin const&)const;
};
