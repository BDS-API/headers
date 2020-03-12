#pragma once

#include "../Command.h"


class MessagingCommand : Command {

public:
    ~MessagingCommand();
    MessagingCommand(bool, bool);
    void checkChatPermissions(CommandOrigin const&, CommandOutput &)const;
};
