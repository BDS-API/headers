#pragma once

class CloneCommand : Command {

public:
    virtual ~CloneCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void CloneCommand(void);
    void convertClonedTag(CompoundTag &, BlockActor *, BlockPos const&);
};
