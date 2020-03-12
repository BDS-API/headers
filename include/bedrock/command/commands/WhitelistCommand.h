#pragma once

#include "../Command.h"


class WhitelistCommand : Command {

public:
    static long mWhitelistFile;

    ~WhitelistCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    WhitelistCommand();
    void setup(CommandRegistry &, WhitelistFile &);
};
