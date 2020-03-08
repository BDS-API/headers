#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class MessagingCommand : Command {

public:
    MessagingCommand::~MessagingCommand()

    MessagingCommand(bool, bool);
    void checkChatPermissions(CommandOrigin const&, CommandOutput &)const;
};
