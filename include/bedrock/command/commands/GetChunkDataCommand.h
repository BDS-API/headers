#pragma once

class GetChunkDataCommand : Command {

public:
    virtual GetChunkDataCommand::~GetChunkDataCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GetChunkDataCommand(void);
};
