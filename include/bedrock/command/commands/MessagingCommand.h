#pragma once

#include "../Command.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class MessagingCommand : Command {

public:
    virtual ~MessagingCommand();

    MessagingCommand(bool, bool);
    void checkChatPermissions(CommandOrigin const&, CommandOutput &)const;
};
