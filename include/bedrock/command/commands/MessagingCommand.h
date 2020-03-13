#pragma once

#include "../Command.h"


class MessagingCommand : Command {

public:
    ~MessagingCommand(); // _ZN16MessagingCommandD2Ev
    MessagingCommand(bool, bool); // _ZN16MessagingCommandC2Ebb
    void checkChatPermissions(CommandOrigin const&, CommandOutput &)const; // _ZNK16MessagingCommand20checkChatPermissionsERK13CommandOriginR13CommandOutput
};
