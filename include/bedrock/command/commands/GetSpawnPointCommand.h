#pragma once

class GetSpawnPointCommand : Command {

public:
    virtual GetSpawnPointCommand::~GetSpawnPointCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GetSpawnPointCommand(void);
};
