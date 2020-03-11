#pragma once

#include "../CommandRegistry.h"
#include "../CommandOutput.h"
#include "../orgin/CommandOrigin.h"
#include "../../../unmapped/WhitelistFile.h"
#include "../Command.h"


class WhitelistCommand : Command {

public:
    static long mWhitelistFile;

    virtual ~WhitelistCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, WhitelistFile &);
    WhitelistCommand();
};
