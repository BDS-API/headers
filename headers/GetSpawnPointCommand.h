#pragma once

class GetSpawnPointCommand : Command {

public:
    virtual ~GetSpawnPointCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void GetSpawnPointCommand(void);
};
