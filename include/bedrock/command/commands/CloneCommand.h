#pragma once

#include "../Command.h"


class CloneCommand : public Command {

public:
    virtual ~CloneCommand(); // _ZN12CloneCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK12CloneCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN12CloneCommand5setupER15CommandRegistry
    CloneCommand(); // _ZN12CloneCommandC2Ev
    void convertClonedTag(CompoundTag &, BlockActor *, BlockPos const&); // _ZN12CloneCommand16convertClonedTagER11CompoundTagP10BlockActorRK8BlockPos
};
