#pragma once

#include "../Command.h"


class CloneCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~CloneCommand();
    void convertClonedTag(CompoundTag &, BlockActor *, BlockPos const&);
    CloneCommand();
    void setup(CommandRegistry &);
};
