#pragma once

#include "../CommandRegistry"
#include "../Command"
#include "../CommandOutput"
#include "../orgin/CommandOrigin"
#include "../../../unmapped/WhitelistFile"


class WhitelistCommand : Command {

public:
    static long mWhitelistFile;

    virtual WhitelistCommand::~WhitelistCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, WhitelistFile &);
    WhitelistCommand(void);
};
