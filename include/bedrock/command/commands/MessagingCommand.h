#pragma once

#include "../Command.h"


class MessagingCommand : public Command {

public:
    virtual ~MessagingCommand(); // _ZN16MessagingCommandD2Ev
    virtual void __fake_function0(); // fake
    MessagingCommand(bool, bool); // _ZN16MessagingCommandC2Ebb
    void checkChatPermissions(CommandOrigin const&, CommandOutput &)const; // _ZNK16MessagingCommand20checkChatPermissionsERK13CommandOriginR13CommandOutput
};
