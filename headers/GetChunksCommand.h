#pragma once

class GetChunksCommand : Command {

public:
    virtual ~GetChunksCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void GetChunksCommand(void);
};
