#pragma once

#include "../CommandRegistry"
#include "../../nbt/CompoundTag"
#include "../Command"
#include "../CommandOutput"
#include "../../block/actor/BlockActor"
#include "../../util/BlockPos"
#include "../orgin/CommandOrigin"


class CloneCommand : Command {

public:
    virtual CloneCommand::~CloneCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    CloneCommand(void);
    void convertClonedTag(CompoundTag &, BlockActor *, BlockPos const&);
};
