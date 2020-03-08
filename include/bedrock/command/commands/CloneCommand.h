#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandRegistry"
#include "../../block/actor/BlockActor"
#include "../../util/BlockPos"
#include "../CommandOutput"
#include "../Command"
#include "../../nbt/CompoundTag"


class CloneCommand : Command {

public:
    CloneCommand::~CloneCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    CloneCommand(void);
    void convertClonedTag(CompoundTag &, BlockActor *, BlockPos const&);
};
