#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class PlaySoundCommand : Command {

public:
    virtual PlaySoundCommand::~PlaySoundCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    PlaySoundCommand(void);
};
