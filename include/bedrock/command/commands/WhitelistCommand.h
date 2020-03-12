#pragma once

#include "../../../unmapped/WhitelistFile.h"
#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class WhitelistCommand : Command {

public:
    static long mWhitelistFile;

    ~WhitelistCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &, WhitelistFile &);
    WhitelistCommand();
};
