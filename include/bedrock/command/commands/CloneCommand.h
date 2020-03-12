#pragma once

#include "../../block/actor/BlockActor.h"
#include "../../nbt/CompoundTag.h"
#include "../CommandRegistry.h"
#include "../origin/CommandOrigin.h"
#include "../../util/BlockPos.h"
#include "../Command.h"
#include "../CommandOutput.h"


class CloneCommand : Command {

public:
    ~CloneCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    CloneCommand();
    void convertClonedTag(CompoundTag &, BlockActor *, BlockPos const&);
    void setup(CommandRegistry &);
};
