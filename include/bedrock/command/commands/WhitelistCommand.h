#pragma once

#include "../orgin/CommandOrigin"
#include "../../../unmapped/WhitelistFile"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class WhitelistCommand : Command {

public:
    static long mWhitelistFile;

    WhitelistCommand::~WhitelistCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, WhitelistFile &);
    WhitelistCommand(void);
};
