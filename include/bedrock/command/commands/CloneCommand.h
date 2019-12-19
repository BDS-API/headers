#pragma once

class CloneCommand : Command {

public:
    virtual CloneCommand::~CloneCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    CloneCommand(void);
    void convertClonedTag(CompoundTag &, BlockActor *, BlockPos const&);
};
