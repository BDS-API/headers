#pragma once

class GetChunkDataCommand : Command {

public:
    virtual ~GetChunkDataCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void GetChunkDataCommand(void);
};
