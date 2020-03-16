#pragma once

#include "../Command.h"


class WhitelistCommand : public Command {

public:
    static long mWhitelistFile;

    virtual ~WhitelistCommand(); // _ZN16WhitelistCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK16WhitelistCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &, WhitelistFile &); // _ZN16WhitelistCommand5setupER15CommandRegistryR13WhitelistFile
    WhitelistCommand(); // _ZN16WhitelistCommandC2Ev
};
