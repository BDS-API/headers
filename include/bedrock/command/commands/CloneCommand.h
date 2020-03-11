#pragma once

#include "../CommandRegistry.h"
#include "../../nbt/CompoundTag.h"
#include "../CommandOutput.h"
#include "../../block/actor/BlockActor.h"
#include "../orgin/CommandOrigin.h"
#include "../../util/BlockPos.h"
#include "../Command.h"


class CloneCommand : Command {

public:
    virtual ~CloneCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    CloneCommand();
    void convertClonedTag(CompoundTag &, BlockActor *, BlockPos const&);
};
