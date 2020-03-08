#pragma once

#include "../Command"
#include "../orgin/CommandOrigin"


class MessagingCommand : Command {

public:
    virtual MessagingCommand::~MessagingCommand();

    MessagingCommand(bool, bool);
    void checkChatPermissions(CommandOrigin const&, CommandOutput &)const;
};
