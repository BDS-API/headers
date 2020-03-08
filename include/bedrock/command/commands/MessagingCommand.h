#pragma once

#include "../CommandOutput"
#include "../orgin/CommandOrigin"
#include "../Command"


class MessagingCommand : Command {

public:
    virtual MessagingCommand::~MessagingCommand()

    MessagingCommand(bool, bool);
    void checkChatPermissions(CommandOrigin const&, CommandOutput &)const;
};
