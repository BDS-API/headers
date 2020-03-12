#pragma once

#include "../origin/CommandOrigin.h"
#include "../Command.h"
#include "../CommandOutput.h"


class MessagingCommand : Command {

public:
    ~MessagingCommand();
    MessagingCommand(bool, bool);
    void checkChatPermissions(CommandOrigin const&, CommandOutput &)const;
};
