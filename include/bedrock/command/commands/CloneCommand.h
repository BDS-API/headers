#pragma once

#include "../../nbt/CompoundTag"
#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class CloneCommand : Command {

public:
    virtual CloneCommand::~CloneCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    CloneCommand(void);
    void convertClonedTag(CompoundTag &, BlockActor *, BlockPos const&);
};
