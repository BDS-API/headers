#pragma once

class MessagingCommand : Command {

public:
    virtual ~MessagingCommand();

    void MessagingCommand(bool, bool);
    void checkChatPermissions(CommandOrigin const&, CommandOutput &)const;
};
