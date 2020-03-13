#pragma once

#include "../Command.h"


class WhitelistCommand : Command {

public:
    static long mWhitelistFile;

    ~WhitelistCommand(); // _ZN16WhitelistCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK16WhitelistCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &, WhitelistFile &); // _ZN16WhitelistCommand5setupER15CommandRegistryR13WhitelistFile
    WhitelistCommand(); // _ZN16WhitelistCommandC2Ev
};
