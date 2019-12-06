#pragma once

class SpawnPointCommand : Command {

public:
    virtual ~SpawnPointCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void SpawnPointCommand(void);
};
